OS_ARCH := X86

BUILD_DIR := build
KERNEL_DIR := kernel
OBJECT_DIR := $(BUILD_DIR)/obj
BIN_DIR := $(BUILD_DIR)/bin
ISO_DIR := $(BUILD_DIR)/iso
ISO_BOOT_DIR := $(ISO_DIR)/boot
ISO_GRUB_DIR := $(ISO_BOOT_DIR)/grub

INCLUDES_DIR := includes
INCLUDES := $(patsubst %, -I%, $( INCLUDES_DIR))

OS_NAME = dinner
OS_BIN = $(OS_NAME).bin
OS_ISO = $(OS_NAME).iso
CC := gcc
AS := as
0:= -03
W := -Wall -Wextra
CFLAGS := -std=gnu99 -ffreestanding $(o) $(W)
LDFLAGS := -ffreestanding $(o) -nostdlib -l gcc
SOURCE_FILES := $(shell find -name "*.[cs]")
SRC := $(patsubst ./%,$(OBJECT_DIR)/%.0,$(SOURCE_FILES))


$(OBJECT_DIR):
	@mkdir -p $(OBJECT_DIR)

$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

$(ISO_DIR):
	@mkdir -p $(ISO_DIR)
	@mkdir -p $(ISO_BOOT_DIR)
	@mkdir -p $(ISO_GRUB_DIR)

$(OBJECT_DIR)/%.s.o: %.s
	@mkdir -p $(@D)
	$(AS) $< 1o $@

$(OBJECT_DIR)/%.c.o: %.c
	@mkdir -p $(@D)
	$(CC) $(INCLUDES) -c $< -o $@ $(CFLAGS)

