# 🚗 Automatic Headlight Intensity Control using ESP32

## 📖 Project Overview

This project automatically adjusts headlight brightness based on ambient light intensity using an ESP32 microcontroller, an LDR sensor module, PWM control, and a MOSFET driver stage.

The system reduces headlight intensity when bright light is detected and restores maximum brightness in darker conditions. This helps reduce glare and demonstrates real-time sensor-based control using embedded systems concepts.

---

## 🎯 Objectives

- Detect ambient light intensity using an LDR sensor
- Read sensor values using ESP32 ADC
- Generate PWM signals for brightness control
- Automatically adjust headlight intensity
- Demonstrate practical embedded systems design

---

## 🛠 Components Used

| Component | Quantity |
|------------|------------|
| ESP32 DevKit | 1 |
| LDR Sensor Module | 1 |
| N-Channel MOSFET | 1 |
| 5mm LEDs | 2 |
| 220Ω Resistors | 2 |
| 1kΩ Gate Resistor | 1 |
| 10kΩ Pull-down Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | Multiple |

---

## ⚙️ System Architecture

```text
LDR Sensor
     │
     ▼
ESP32 ADC (GPIO34)
     │
     ▼
Signal Processing
     │
     ▼
PWM Generation (GPIO25)
     │
     ▼
MOSFET Driver
     │
     ▼
Headlights (LEDs)
```

---

## 🔌 Circuit Connections

## Circuit Diagram

![Circuit Diagram](Circuit_diagram.png)

## Flowchart

![Flowchart](Flowchart.jpeg)

### LDR Module

| LDR Module | ESP32 |
|------------|--------|
| VCC | 3.3V |
| GND | GND |
| A0 | GPIO34 |
| D0 | Not Used |

### LED & MOSFET

| Connection | Description |
|------------|------------|
| GPIO25 | MOSFET Gate (via 1kΩ resistor) |
| Source | GND |
| Drain | LED Negative Terminal |
| LED Positive | 3.3V through 220Ω resistor |

---

## 🔄 Working Principle

## Project Demonstration

The system continuously monitors ambient light intensity using an LDR sensor connected to the ESP32.

### Dark Environment
- The LDR detects low light intensity.
- ESP32 reads a lower ADC value.
- The ADC value is mapped to a higher PWM duty cycle.
- The MOSFET receives a stronger PWM signal.
- Both LEDs operate at maximum brightness.

### Bright Environment
- The LDR detects higher light intensity.
- ESP32 reads a higher ADC value.
- The ADC value is mapped to a lower PWM duty cycle.
- The MOSFET receives a reduced PWM signal.
- LED brightness decreases automatically.

### Control Mechanism
1. LDR senses ambient light.
2. ESP32 converts the analog signal into a digital ADC value.
3. The ADC value is processed and mapped to a PWM range.
4. PWM is generated on GPIO25.
5. The MOSFET acts as a power driver.
6. The MOSFET controls current through the LEDs.
7. LED brightness adjusts automatically according to surrounding light conditions.

---

## ✨ Features

- Automatic brightness adjustment
- PWM-based smooth intensity control
- Real-time ambient light sensing
- MOSFET-based load driving
- Low-cost implementation
- Expandable for automotive applications

---

## 📊 Technologies Used

- ESP32
- Embedded C
- Arduino Framework
- ADC (Analog to Digital Conversion)
- PWM (Pulse Width Modulation)
- Sensor Interfacing

---


## 📁 Project Structure

```text
automatic-headlight-intensity-control-esp32
│
├── code
│   └── automatic_headlight_control.ino
│
├── circuit_diagram.png
├── flowchart.png
├── project_report.pdf
│
└── README.md
```

---

## ⚠️ Limitations

- LDR cannot distinguish vehicle headlights from streetlights
- Performance depends on ambient conditions
- Prototype uses low-power LEDs instead of real vehicle headlights

---

## 🚀 Future Improvements

- High-power automotive LED integration
- Camera-based headlight detection
- IoT monitoring using ESP32 Wi-Fi
- OLED/LCD status display
- AI-based glare reduction algorithms

---

## 🎓 Concepts Demonstrated

- Embedded Systems
- Sensor Interfacing
- ADC
- PWM
- MOSFET Driver Circuits
- Real-Time Control Systems

---

## 👨‍💻 Author

Aganith Rai

Mini Project – Automatic Headlight Intensity Control using ESP32
