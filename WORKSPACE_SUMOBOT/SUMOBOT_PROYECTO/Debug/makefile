################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := SUMOBOT_PROYECTO
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
SUMOBOT_PROYECTO.elf \

MAP_FILES += \
SUMOBOT_PROYECTO.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
SUMOBOT_PROYECTO.list \

OBJCOPY_HEX += \
SUMOBOT_PROYECTO.hex \

OBJCOPY_BIN += \
SUMOBOT_PROYECTO.bin \


# All Target
all: main-build

# Main-build Target
main-build: SUMOBOT_PROYECTO.elf secondary-outputs

# Tool invocations
SUMOBOT_PROYECTO.elf SUMOBOT_PROYECTO.map: $(OBJS) $(USER_OBJS) C:\Users\jnico\STM32CubeIDE\WORKSPACE_SUMOBOT\SUMOBOT_PROYECTO\STM32F103C8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "SUMOBOT_PROYECTO.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\jnico\STM32CubeIDE\WORKSPACE_SUMOBOT\SUMOBOT_PROYECTO\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="SUMOBOT_PROYECTO.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

SUMOBOT_PROYECTO.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "SUMOBOT_PROYECTO.list"
	@echo 'Finished building: $@'
	@echo ' '

SUMOBOT_PROYECTO.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "SUMOBOT_PROYECTO.hex"
	@echo 'Finished building: $@'
	@echo ' '

SUMOBOT_PROYECTO.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "SUMOBOT_PROYECTO.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) SUMOBOT_PROYECTO.bin SUMOBOT_PROYECTO.elf SUMOBOT_PROYECTO.hex SUMOBOT_PROYECTO.list SUMOBOT_PROYECTO.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
