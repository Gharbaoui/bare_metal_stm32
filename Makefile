CC=arm-none-eabi-gcc
MACHINE=cortex-m4
CFLAGS= -c -mcpu=$(MACHINE) -mthumb -Wall -O0
SRC_DIR=src
BUILD_DIR=build
LDFLAGS= -nostdlib -T $(SRC_DIR)/linker_script.ld

all: make_folders $(BUILD_DIR)/main.o $(BUILD_DIR)/startup.o $(BUILD_DIR)/final.elf

make_folders:
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/main.o:$(SRC_DIR)/main.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/startup.o:$(SRC_DIR)/startup.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/final.elf: $(BUILD_DIR)/main.o $(BUILD_DIR)/startup.o
	$(CC) $(LDFLAGS) $^ -o $@

clean:
	rm -f $(BUILD_DIR)/*

re: clean all
