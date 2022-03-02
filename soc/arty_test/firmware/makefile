.DEFAULT_GOAL := all


CC_prefix := riscv64-unknown-elf-
ADD_CFLAGS := -D__vexriscv__ -march=rv32i  -mabi=ilp32 #set the cpu variant, automatically generated in variables.mak as CPU_FLAGS


BASE_DIR := .
BUILD_DIR=$(BASE_DIR)/../build
include $(BUILD_DIR)/software/include/generated/variables.mak
include $(SOC_DIRECTORY)/software/common.mak
CFLAG_INCLUDES := -I$(BUILD_DIR)/software/include
LOCAL_INCLUDE := -I$(BASE_DIR)/include

#CPU flags comes from variables.mak

all: 
	@$(CC_prefix)gcc $(CFLAG_INCLUDES) $(LOCAL_INCLUDE) $(CPU_FLAGS) main.c -o test.bin


run:
	litex_term /dev/ttyUSB1 --kernel=test.bin

clean: 
	@rm test.bin