CFLAGS  ?= -std=c99 -Wall -Wextra -Werror -pedantic -fno-builtin
BUILD    = build
SRCS     = $(wildcard src/*/*.c)
OBJS     = $(patsubst src/%.c,$(BUILD)/%.o,$(SRCS))
TESTS    = $(wildcard test/test_*.c)
TBINS    = $(patsubst test/%.c,$(BUILD)/%,$(TESTS))

.PHONY: all test clean

all: $(OBJS)

$(BUILD)/%.o: src/%.c | $(BUILD)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -Iinclude -c -o $@ $<

$(BUILD)/test_%: test/test_%.c $(OBJS) | $(BUILD)
	$(CC) $(CFLAGS) -o $@ $< $(wildcard $(BUILD)/$*/*.o)

test: $(TBINS)
	@fail=0; for t in $(TBINS); do \
	  echo "\n=== $$(basename $$t) ==="; \
	  ./$$t || fail=1; \
	done; exit $$fail

$(BUILD):
	mkdir -p $(BUILD)

clean:
	rm -rf $(BUILD)
