
CC ?= gcc
CFLAGS += -std=c99 -Wall -Wextra -Ideps
DEPS := $(wildcard deps/*/*.c)
OBJS := stopping_converge.o $(DEPS:.c=.o)

.DEFAULT_GOAL := validate

test: test.o $(OBJS)

stopping_converge.o: stopping_converge.c stopping_converge.h

deps: package.json
	clib install --dev
	@touch $@

validate: test
	./$<

clean:
	rm -f $(OBJS) stopping_converge.o test.o test

.PHONY: validate clean
