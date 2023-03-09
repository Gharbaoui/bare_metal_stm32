SRC_DIR=src
BUILD_DIR=build
DEBUG_DIR=debug
CC=arm-none-eabi-gcc
MACHINE=cortex-m4
CFLAGS= -c -mcpu=$(MACHINE) -mthumb -Wall -O0
LDFLAGS= -nostdlib -T $(SRC_DIR)/linker_script.ld -Wl,-Map=$(DEBUG_DIR)/final.map

all: make_folders $(BUILD_DIR)/main.o $(BUILD_DIR)/startup.o $(BUILD_DIR)/final.elf

make_folders:
	mkdir -p $(BUILD_DIR) $(DEBUG_DIR)

$(BUILD_DIR)/main.o:$(SRC_DIR)/main.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/startup.o:$(SRC_DIR)/startup.c
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/final.elf: $(BUILD_DIR)/main.o $(BUILD_DIR)/startup.o
	$(CC) $(LDFLAGS) $^ -o $@

upload:
	openocd -f board/st_nucleo_f4.cfg

clean:
	rm -f $(BUILD_DIR)/*

re: clean all
