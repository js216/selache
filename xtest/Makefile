# cctest sweep: build every cases/cctest_*.c through gcc, clang, cces, sel.
# gcc/clang validate inline (run binary, compare to /* @expect */). cces/sel
# emit cctest_<name>.<expect_hex>.ldr files for the mission Foreach loop.

R := $(abspath ..)

CC21K     ?= cc21k
EASM21K   ?= easm21k
ELFLOADER ?= elfloader
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
	    if [ "$$$$((16#$$$$got))" -ne "$$$$(($$$$expect))" ]; then \
	        echo "$(1) $$*: expect=$$$$expect got=0x$$$$got"; exit 1; \
	    fi
	$$(Q)touch $$@
endef

$(eval $(call HOST_RULE,gcc))
$(eval $(call HOST_RULE,clang))

# Harness objects (xtest_main.doj, xtest_uart.doj).
$(BUILD)/cces/xtest_%.doj: %.c | $(BUILD)/cces
	$(Q)$(CC21K) $(CFLAGS_TARGET) -c -o $@ $<

$(BUILD)/sel/xtest_%.doj: %.c | $(BUILD)/sel
	$(Q)$(SELCC) $(SELCC_FLAGS) -S -o $(@:.doj=.s) $<
	$(Q)$(SELAS) $(SELAS_FLAGS) -o $@ $(@:.doj=.s)

# libsel objects: per-subdir static patterns.
# cces .c via cc21k; cces .s via easm21k.
define CCES_LIB_RULES
$$(BUILD)/cces/lib_$(1)_%.doj: $$(LIBSEL_SRC)/$(1)/%.c | $$(BUILD)/cces
	$$(Q)$$(CC21K) $$(CFLAGS_TARGET) -c -o $$@ $$<
$$(BUILD)/cces/lib_$(1)_%.doj: $$(LIBSEL_SRC)/$(1)/%.s | $$(BUILD)/cces
	$$(Q)$$(EASM21K) -proc ADSP-21569 -si-revision any -char-size-8 -swc -o $$@ $$<
endef

# sel .c via selcc -S + selas; sel .s via selas. Keeps a `make sel` build
# CCES-free end-to-end.
define SEL_LIB_RULES
$$(BUILD)/sel/lib_$(1)_%.doj: $$(LIBSEL_SRC)/$(1)/%.c | $$(BUILD)/sel
	$$(Q)$$(SELCC) $$(SELCC_FLAGS) -S -o $$(@:.doj=.s) $$<
	$$(Q)$$(SELAS) $$(SELAS_FLAGS) -o $$@ $$(@:.doj=.s)
$$(BUILD)/sel/lib_$(1)_%.doj: $$(LIBSEL_SRC)/$(1)/%.s | $$(BUILD)/sel
	$$(Q)$$(SELAS) $$(SELAS_FLAGS) -o $$@ $$<
endef

$(foreach sub,$(LIBSEL_SUBS),$(eval $(call CCES_LIB_RULES,$(sub))))
$(foreach sub,$(LIBSEL_SUBS),$(eval $(call SEL_LIB_RULES,$(sub))))

$(CCES_ARCHIVE): $(LIBSEL_OBJS_CCES) $(HARNESS_OBJS_CCES) | $(BUILD)/cces
	$(Q)$(ELFAR) -c $@ $^

$(SEL_ARCHIVE): $(LIBSEL_OBJS_SEL) $(HARNESS_OBJS_SEL) | $(BUILD)/sel
	$(Q)$(SELAR) -c $@ $^

# Per-case cces .ldr. Stem-named target is what Make tracks; the
# expect-encoded sibling (cctest_X.0xNN.ldr) is what the mission Foreach
# globs. Stale 0x*.ldr siblings are removed first so a changed @expect
# leaves only the new copy.
$(BUILD)/cces/%.ldr: cases/%.c $(CCES_ARCHIVE) | $(BUILD)/cces
	$(Q)$(CC21K) $(CFLAGS_TARGET) -c -o $(BUILD)/cces/$*.doj $<
	$(Q)$(CC21K) -proc ADSP-21569 -si-revision any -no-mem -no-std-lib \
	    -T $(LIBSEL_LDF) -o $(BUILD)/cces/$*.dxe \
	    $(BUILD)/cces/$*.doj $(CCES_ARCHIVE)
	$(Q)$(ELFLOADER) -proc ADSP-21569 -b UARTHOST -f ASCII -Width 8 \
	    $(BUILD)/cces/$*.dxe -o $@
	$(Q)expect=$$(awk '$(EXPECT_AWK)' $<); \
	    hex=$$(printf '0x%x' $$(($$expect))); \
	    rm -f $(BUILD)/cces/$*.0x*.ldr; \
	    cp $@ $(BUILD)/cces/$*.$$hex.ldr

# Per-case sel .ldr. Same stem/encoded-sibling layout as cces.
$(BUILD)/sel/%.ldr: cases/%.c $(SEL_ARCHIVE) | $(BUILD)/sel
	$(Q)$(SELCC) $(SELCC_FLAGS) -S -o $(BUILD)/sel/$*.s $<
	$(Q)$(SELAS) $(SELAS_FLAGS) -o $(BUILD)/sel/$*.doj $(BUILD)/sel/$*.s
	$(Q)$(SELD) -proc ADSP-21569 -T $(LIBSEL_LDF) -o $(BUILD)/sel/$*.dxe \
	    $(BUILD)/sel/$*.doj $(SEL_ARCHIVE)
	$(Q)$(SELLOAD) -proc ADSP-21569 -b UARTHOST -f ascii -Width 8 \
	    -o $@ $(BUILD)/sel/$*.dxe
	$(Q)expect=$$(awk '$(EXPECT_AWK)' $<); \
	    hex=$$(printf '0x%x' $$(($$expect))); \
	    rm -f $(BUILD)/sel/$*.0x*.ldr; \
	    cp $@ $(BUILD)/sel/$*.$$hex.ldr
