################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Main.cpp \
../src/Studente.cpp \
../src/StudenteIL.cpp \
../src/StudenteLS.cpp 

OBJS += \
./src/Main.o \
./src/Studente.o \
./src/StudenteIL.o \
./src/StudenteLS.o 

CPP_DEPS += \
./src/Main.d \
./src/Studente.d \
./src/StudenteIL.d \
./src/StudenteLS.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


