
LIB_NAME = ClimCLib

PREFIX := /usr/local

SOURCE_DIR = src
INCLUDE_DIR = include

LIB_DIR = bin

LIB = $(LIB_DIR)/$(LIB_NAME).a

OBJS  = $(patsubst $(SOURCE_DIR)/adt/%.c,$(SOURCE_DIR)/adt/%.o,$(wildcard $(SOURCE_DIR)/adt/*.c))
OBJS += $(patsubst $(SOURCE_DIR)/physics/%.c,$(SOURCE_DIR)/physics/%.o,$(wildcard $(SOURCE_DIR)/physics/*.c))
OBJS += $(patsubst $(SOURCE_DIR)/utility/%.c,$(SOURCE_DIR)/utility/%.o,$(wildcard $(SOURCE_DIR)/utility/*.c))

CC = gcc
CFLAGS := -Wall -Werror -pedantic-errors -std=c11 -I$(INCLUDE_DIR)

.PHONY: all clean make_local rm_Local

all: $(LIB)

$(LIB): $(OBJS)
	mkdir -p $(LIB_DIR)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -Rf bin
	find $(SOURCE_DIR) -name "*.o" -delete

install:
	mkdir -p $(PREFIX)/include/climclib
	mkdir -p $(PREFIX)/lib
	cp $(LIB) $(PREFIX)/lib
	cp -R $(INCLUDE_DIR)/* $(PREFIX)/include/climclib
