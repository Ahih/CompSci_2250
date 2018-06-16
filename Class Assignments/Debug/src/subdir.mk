################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Project\ One.cpp 

OBJS += \
./src/Project\ One.o 

CPP_DEPS += \
./src/Project\ One.d 


# Each subdirectory must supply rules for building sources it contributes
src/Project\ One.o: ../src/Project\ One.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Project One.d" -MT"src/Project\ One.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


