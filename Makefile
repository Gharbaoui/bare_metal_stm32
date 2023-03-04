CC=arm-none-eabi-gcc
MACHINE=cortex-m4
CFLAGS= -c -mcpu=$(MACHINE) -mthumb
SRC_DIR=src
BUILD_DIR=build

all: make_folders $(BUILD_DIR)/main.o

make_folders:
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/main.o:$(SRC_DIR)/main.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(BUILD_DIR)/*

re: clean all
