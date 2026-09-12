# STM32 Embedded Systems Journey

This repository documents my transition into embedded systems programming using the **NUCLEO-F401RE** development board. It serves as a structured learning path, exploring everything from basic GPIO manipulation to integrating complex sensors via I2C and ADC, bridging the gap between high-level software architectures and low-level microcontroller operations.

## Hardware Components
* **Microcontroller:** STM32 NUCLEO-F401RE (ARM Cortex-M4)
* **Display:** 2x16 LCD Screen with I2C module
* **Sensors:** DHT11 Temperature and Humidity Sensor
* **Inputs:** 4x4 Membrane Keypad, 10K Potentiometer

## Repository Architecture

The project is divided into two main phases: isolated hardware testing and integrated mini-projects.

### Phase 1: Basic Modules
* [x] `01_Onboard_LED_Button`: Basic GPIO digital read/write operations using the onboard user button and LED.
* [x] `02_I2C_LCD_Basics`: I2C protocol implementation to display characters and variables.
* [ ] `03_ADC_Potentiometer`: Analog-to-Digital Conversion using polling and interrupts.
* [ ] `04_DHT11_Sensor_Test`: Reading custom digital signals from a single-wire protocol.
* [ ] `05_Keypad_Matrix`: Matrix scanning algorithms for input handling.

### Phase 2: Mini Projects
* [ ] `01_Weather_Station`: Integrating DHT11 and LCD.
* [ ] `02_Password_Lock_System`: State machine implementation using Keypad and LCD.
* [ ] `03_Adjustable_Thermostat`: ADC thresholds triggering visual alarms.
* [ ] `04_Smart_Control_Panel`: Final integration of all components using non-blocking delays and hardware interrupts.

## Development Environment
* **IDE:** STM32CubeIDE
* **Framework:** STM32 HAL (Hardware Abstraction Layer)
* **Language:** C

## How to Use
1. Clone this repository: `git clone <your-repo-link>`
2. Open **STM32CubeIDE** and set the repository root as your workspace.
3. Import the desired module folder into the IDE.
4. Compile the code (`Project > Build Project`).
5. Flash the generated `.elf` binary to the NUCLEO board via the onboard ST-LINK (`Run > Debug`).
