################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Project\ Two.cpp 

OBJS += \
./src/Project\ Two.o 

CPP_DEPS += \
./src/Project\ Two.d 


# Each subdirectory must supply rules for building sources it contributes
src/Project\ Two.o: ../src/Project\ Two.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Project Two.d" -MT"src/Project\ Two.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


