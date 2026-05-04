# cctest sweep: build every cases/cctest_*.c through gcc, clang, cces, sel.
# gcc/clang validate inline (run binary, compare to /* @expect */). cces/sel
# emit cctest_<name>.<expect_hex>.ldr files for the mission Foreach loop.

# Recipes use bash-only arithmetic ($((16#$got))) for hex parsing; pin the
# recipe shell so /bin/sh (dash on Debian) doesn't get used.
SHELL := /bin/bash

R := $(abspath ..)

CC21K     ?= /opt/cces-qemu/cc21k
EASM21K   ?= /opt/cces-qemu/easm21k
ELFLOADER ?= /opt/cces-qemu/elfloader
ELFAR     ?= /opt/analog/cces/3.0.3/elfar

SELCC    := $(R)/target/release/selcc
SELAS    := $(R)/target/release/selas
SELD     := $(R)/target/release/seld
SELLOAD  := $(R)/target/release/selload
SELAR    := $(R)/target/release/selar

LIBSEL_INC := $(R)/libsel/include
LIBSEL_SRC := $(R)/libsel/src
LIBSEL_LDF := $(R)/libsel/link.ldf

CFLAGS_TARGET := -proc ADSP-21569 -si-revision any -char-size-8 -swc \
                 -no-std-inc -DBOARD_BAUD_DIV=814U -I. -I$(LIBSEL_INC)
SELCC_FLAGS   := -proc ADSP-21569 -char-size-8 \
                 -DBOARD_BAUD_DIV=814U -I. -I$(LIBSEL_INC)
SELAS_FLAGS   := -proc ADSP-21569
CFLAGS_HOST   := -m32 -funsigned-char -std=c99 -w -O0

BUILD := build
V     ?= 0
Q     := $(if $(filter 0,$(V)),@,)

# Awk snippet that prints the first /* @expect <0xHEX|decimal> */ in a file.
EXPECT_AWK := /@expect/ { match($$0, /(0x[0-9a-fA-F]+|[0-9]+)/); \
                          print substr($$0, RSTART, RLENGTH); exit }

CASE_SRCS  := $(wildcard cases/cctest_*.c)
CASE_NAMES := $(notdir $(CASE_SRCS:.c=))

LIBSEL_SUBS   := $(notdir $(patsubst %/,%,$(dir $(wildcard $(LIBSEL_SRC)/*/.))))
LIBSEL_C_SRCS := $(foreach s,$(LIBSEL_SUBS),$(wildcard $(LIBSEL_SRC)/$(s)/*.c))
LIBSEL_S_SRCS := $(foreach s,$(LIBSEL_SUBS),$(wildcard $(LIBSEL_SRC)/$(s)/*.s))

# libsel/src/<sub>/<bn>.[cs] -> lib_<sub>_<bn>.doj (flattened)
libsel_obj = lib_$(notdir $(patsubst %/,%,$(dir $(1))))_$(basename $(notdir $(1))).doj

LIBSEL_OBJS_CCES  := $(foreach src,$(LIBSEL_C_SRCS) $(LIBSEL_S_SRCS),$(BUILD)/cces/$(call libsel_obj,$(src)))
LIBSEL_OBJS_SEL   := $(foreach src,$(LIBSEL_C_SRCS) $(LIBSEL_S_SRCS),$(BUILD)/sel/$(call libsel_obj,$(src)))
HARNESS_OBJS_CCES := $(BUILD)/cces/xtest_main.doj $(BUILD)/cces/xtest_uart.doj
HARNESS_OBJS_SEL  := $(BUILD)/sel/xtest_main.doj  $(BUILD)/sel/xtest_uart.doj

CCES_ARCHIVE := $(BUILD)/cces/libxtest.dlb
SEL_ARCHIVE  := $(BUILD)/sel/libxtest_sel.dlb

GCC_STAMPS   := $(addprefix $(BUILD)/gcc/,  $(addsuffix .run,$(CASE_NAMES)))
CLANG_STAMPS := $(addprefix $(BUILD)/clang/,$(addsuffix .run,$(CASE_NAMES)))
CCES_LDRS    := $(addprefix $(BUILD)/cces/, $(addsuffix .ldr,$(CASE_NAMES)))
SEL_LDRS     := $(addprefix $(BUILD)/sel/,  $(addsuffix .ldr,$(CASE_NAMES)))

.PHONY: all gcc clang cces sel clean

all:   gcc clang cces sel
gcc:   $(GCC_STAMPS)
clang: $(CLANG_STAMPS)
cces:  $(CCES_LDRS)
sel:   $(SEL_LDRS)

clean:
	$(Q)rm -rf $(BUILD)

$(BUILD) $(BUILD)/gcc $(BUILD)/clang $(BUILD)/cces $(BUILD)/sel:
	$(Q)mkdir -p $@

$(BUILD)/host_wrap.c: | $(BUILD)
	$(Q)printf '#include <stdio.h>\nextern int test_main(void);\nint main(void) { printf("got %%x\\n", test_main()); return 0; }\n' > $@

# Host (gcc/clang): compile + run + compare to @expect.
define HOST_RULE
$(BUILD)/$(1)/%.run: cases/%.c $$(BUILD)/host_wrap.c | $$(BUILD)/$(1)
	$$(Q)$(1) $$(CFLAGS_HOST) -o $$(BUILD)/$(1)/$$*.bin $$< $$(BUILD)/host_wrap.c -lm
	$$(Q)got=$$$$($$(BUILD)/$(1)/$$*.bin | awk '/^got/ {print $$$$2}'); \
	    expect=$$$$(awk '$$(EXPECT_AWK)' $$<); \
	    if [ -z "$$$$got" ]; then \
	        printf '\033[31m$(1) %s FAIL\033[0m: no got NN output\n' "$$*"; exit 1; \
	    fi; \
	    if [ "$$$$((16#$$$$got))" -ne "$$$$(($$$$expect))" ]; then \
	        printf '\033[31m$(1) %s FAIL\033[0m expect=%s got=0x%s\n' "$$*" "$$$$expect" "$$$$got"; exit 1; \
	    fi; \
	    printf '\033[32m$(1) %s PASS\033[0m\n' "$$*"
	$$(Q)touch $$@
endef

$(eval $(call HOST_RULE,gcc))
$(eval $(call HOST_RULE,clang))

# Harness objects (xtest_main.doj, xtest_uart.doj).
$(BUILD)/cces/xtest_%.doj: %.c | $(BUILD)/cces
	$(Q)$(CC21K) $(CFLAGS_TARGET) -c -o $@ $< > /dev/null

$(BUILD)/sel/xtest_%.doj: %.c | $(BUILD)/sel
	$(Q)$(SELCC) $(SELCC_FLAGS) -S -o $(@:.doj=.s) $< > /dev/null
	$(Q)$(SELAS) $(SELAS_FLAGS) -o $@ $(@:.doj=.s) > /dev/null

# libsel objects: per-subdir static patterns.
# cces .c via cc21k; cces .s via easm21k.
define CCES_LIB_RULES
$$(BUILD)/cces/lib_$(1)_%.doj: $$(LIBSEL_SRC)/$(1)/%.c | $$(BUILD)/cces
	$$(Q)$$(CC21K) $$(CFLAGS_TARGET) -c -o $$@ $$< > /dev/null
$$(BUILD)/cces/lib_$(1)_%.doj: $$(LIBSEL_SRC)/$(1)/%.s | $$(BUILD)/cces
	$$(Q)$$(EASM21K) -proc ADSP-21569 -si-revision any -char-size-8 -swc -o $$@ $$< > /dev/null
endef

# sel .c via selcc -S + selas; sel .s via selas. Keeps a `make sel` build
# CCES-free end-to-end.
define SEL_LIB_RULES
$$(BUILD)/sel/lib_$(1)_%.doj: $$(LIBSEL_SRC)/$(1)/%.c | $$(BUILD)/sel
	$$(Q)$$(SELCC) $$(SELCC_FLAGS) -S -o $$(@:.doj=.s) $$< > /dev/null
	$$(Q)$$(SELAS) $$(SELAS_FLAGS) -o $$@ $$(@:.doj=.s) > /dev/null
$$(BUILD)/sel/lib_$(1)_%.doj: $$(LIBSEL_SRC)/$(1)/%.s | $$(BUILD)/sel
	$$(Q)$$(SELAS) $$(SELAS_FLAGS) -o $$@ $$< > /dev/null
endef

$(foreach sub,$(LIBSEL_SUBS),$(eval $(call CCES_LIB_RULES,$(sub))))
$(foreach sub,$(LIBSEL_SUBS),$(eval $(call SEL_LIB_RULES,$(sub))))

$(CCES_ARCHIVE): $(LIBSEL_OBJS_CCES) $(HARNESS_OBJS_CCES) | $(BUILD)/cces
	$(Q)$(ELFAR) -c $@ $^ > /dev/null

$(SEL_ARCHIVE): $(LIBSEL_OBJS_SEL) $(HARNESS_OBJS_SEL) | $(BUILD)/sel
	$(Q)$(SELAR) -c $@ $^ > /dev/null

# Per-case cces .ldr. Stem-named target is what Make tracks; the
# expect-encoded sibling (cctest_X.0xNN.ldr) is what the mission Foreach
# globs. Stale 0x*.ldr siblings are removed first so a changed @expect
# leaves only the new copy.
$(BUILD)/cces/%.ldr: cases/%.c $(CCES_ARCHIVE) | $(BUILD)/cces
	$(Q)$(CC21K) $(CFLAGS_TARGET) -c -o $(BUILD)/cces/$*.doj $< > /dev/null
	$(Q)$(CC21K) -proc ADSP-21569 -si-revision any -no-mem -no-std-lib \
	    -T $(LIBSEL_LDF) -o $(BUILD)/cces/$*.dxe \
	    $(BUILD)/cces/$*.doj $(CCES_ARCHIVE) > /dev/null
	$(Q)$(ELFLOADER) -proc ADSP-21569 -b UARTHOST -f ASCII -Width 8 \
	    $(BUILD)/cces/$*.dxe -o $@ > /dev/null
	$(Q)expect=$$(awk '$(EXPECT_AWK)' $<); \
	    hex=$$(printf '0x%x' $$(($$expect))); \
	    rm -f $(BUILD)/cces/$*.0x*.ldr; \
	    cp $@ $(BUILD)/cces/$*.$$hex.ldr; \
	    printf 'cces %s built expect=%s\n' "$*" "$$hex"

# Per-case sel .ldr. Same stem/encoded-sibling layout as cces.
$(BUILD)/sel/%.ldr: cases/%.c $(SEL_ARCHIVE) | $(BUILD)/sel
	$(Q)$(SELCC) $(SELCC_FLAGS) -S -o $(BUILD)/sel/$*.s $< > /dev/null
	$(Q)$(SELAS) $(SELAS_FLAGS) -o $(BUILD)/sel/$*.doj $(BUILD)/sel/$*.s > /dev/null
	$(Q)$(SELD) -proc ADSP-21569 -T $(LIBSEL_LDF) -o $(BUILD)/sel/$*.dxe \
	    $(BUILD)/sel/$*.doj $(SEL_ARCHIVE) > /dev/null
	$(Q)$(SELLOAD) -proc ADSP-21569 -b UARTHOST -f ascii -Width 8 \
	    -o $@ $(BUILD)/sel/$*.dxe > /dev/null
	$(Q)expect=$$(awk '$(EXPECT_AWK)' $<); \
	    hex=$$(printf '0x%x' $$(($$expect))); \
	    rm -f $(BUILD)/sel/$*.0x*.ldr; \
	    cp $@ $(BUILD)/sel/$*.$$hex.ldr; \
	    printf 'sel %s built expect=%s\n' "$*" "$$hex"

# === drafts: same sweep applied to draft_cases/ ===
# Mirrors the cases/ rules but reads from draft_cases/ and writes to
# build/drafts/<toolchain>/. Reuses the cases/ support archives
# (libxtest.dlb / libxtest_sel.dlb) since they're case-independent.
DRAFT_SRCS  := $(wildcard draft_cases/cctest_*.c)
DRAFT_NAMES := $(notdir $(DRAFT_SRCS:.c=))

DRAFTS_GCC_STAMPS   := $(addprefix $(BUILD)/drafts/gcc/,  $(addsuffix .run,$(DRAFT_NAMES)))
DRAFTS_CLANG_STAMPS := $(addprefix $(BUILD)/drafts/clang/,$(addsuffix .run,$(DRAFT_NAMES)))
DRAFTS_CCES_LDRS    := $(addprefix $(BUILD)/drafts/cces/, $(addsuffix .ldr,$(DRAFT_NAMES)))
DRAFTS_SEL_LDRS     := $(addprefix $(BUILD)/drafts/sel/,  $(addsuffix .ldr,$(DRAFT_NAMES)))

.PHONY: drafts-gcc drafts-clang drafts-cces drafts-sel
drafts-gcc:   $(DRAFTS_GCC_STAMPS)
drafts-clang: $(DRAFTS_CLANG_STAMPS)
drafts-cces:  $(DRAFTS_CCES_LDRS)
drafts-sel:   $(DRAFTS_SEL_LDRS)

$(BUILD)/drafts/gcc $(BUILD)/drafts/clang $(BUILD)/drafts/cces $(BUILD)/drafts/sel:
	$(Q)mkdir -p $@

define DRAFT_HOST_RULE
$$(BUILD)/drafts/$(1)/%.run: draft_cases/%.c $$(BUILD)/host_wrap.c | $$(BUILD)/drafts/$(1)
	$$(Q)$(1) $$(CFLAGS_HOST) -o $$(BUILD)/drafts/$(1)/$$*.bin $$< $$(BUILD)/host_wrap.c -lm
	$$(Q)got=$$$$($$(BUILD)/drafts/$(1)/$$*.bin | awk '/^got/ {print $$$$2}'); \
	    expect=$$$$(awk '$$(EXPECT_AWK)' $$<); \
	    if [ -z "$$$$got" ]; then \
	        printf '\033[31m$(1) (draft) %s FAIL\033[0m: no got NN output\n' "$$*"; exit 1; \
	    fi; \
	    if [ "$$$$((16#$$$$got))" -ne "$$$$(($$$$expect))" ]; then \
	        printf '\033[31m$(1) (draft) %s FAIL\033[0m expect=%s got=0x%s\n' "$$*" "$$$$expect" "$$$$got"; exit 1; \
	    fi; \
	    printf '\033[32m$(1) (draft) %s PASS\033[0m\n' "$$*"
	$$(Q)touch $$@
endef

$(eval $(call DRAFT_HOST_RULE,gcc))
$(eval $(call DRAFT_HOST_RULE,clang))

$(BUILD)/drafts/cces/%.ldr: draft_cases/%.c $(CCES_ARCHIVE) | $(BUILD)/drafts/cces
	$(Q)$(CC21K) $(CFLAGS_TARGET) -c -o $(BUILD)/drafts/cces/$*.doj $< > /dev/null
	$(Q)$(CC21K) -proc ADSP-21569 -si-revision any -no-mem -no-std-lib \
	    -T $(LIBSEL_LDF) -o $(BUILD)/drafts/cces/$*.dxe \
	    $(BUILD)/drafts/cces/$*.doj $(CCES_ARCHIVE) > /dev/null
	$(Q)$(ELFLOADER) -proc ADSP-21569 -b UARTHOST -f ASCII -Width 8 \
	    $(BUILD)/drafts/cces/$*.dxe -o $@ > /dev/null
	$(Q)expect=$$(awk '$(EXPECT_AWK)' $<); \
	    hex=$$(printf '0x%x' $$(($$expect))); \
	    rm -f $(BUILD)/drafts/cces/$*.0x*.ldr; \
	    cp $@ $(BUILD)/drafts/cces/$*.$$hex.ldr; \
	    printf 'cces (draft) %s built expect=%s\n' "$*" "$$hex"

$(BUILD)/drafts/sel/%.ldr: draft_cases/%.c $(SEL_ARCHIVE) | $(BUILD)/drafts/sel
	$(Q)$(SELCC) $(SELCC_FLAGS) -S -o $(BUILD)/drafts/sel/$*.s $< > /dev/null
	$(Q)$(SELAS) $(SELAS_FLAGS) -o $(BUILD)/drafts/sel/$*.doj $(BUILD)/drafts/sel/$*.s > /dev/null
	$(Q)$(SELD) -proc ADSP-21569 -T $(LIBSEL_LDF) -o $(BUILD)/drafts/sel/$*.dxe \
	    $(BUILD)/drafts/sel/$*.doj $(SEL_ARCHIVE) > /dev/null
	$(Q)$(SELLOAD) -proc ADSP-21569 -b UARTHOST -f ascii -Width 8 \
	    -o $@ $(BUILD)/drafts/sel/$*.dxe > /dev/null
	$(Q)expect=$$(awk '$(EXPECT_AWK)' $<); \
	    hex=$$(printf '0x%x' $$(($$expect))); \
	    rm -f $(BUILD)/drafts/sel/$*.0x*.ldr; \
	    cp $@ $(BUILD)/drafts/sel/$*.$$hex.ldr; \
	    printf 'sel (draft) %s built expect=%s\n' "$*" "$$hex"
