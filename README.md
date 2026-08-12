# 🧮 Scientific C Calculator

A modular, menu-driven scientific calculator built with **C (C11)**.

The project demonstrates fundamental C programming concepts, modular software design, mathematical operations, input validation, error handling, and basic build automation using **GNU Make**.

---

## 📸 Preview

![Scientific Calculator Demo](screenshots/demo.png)

---

## ✨ Features

### Basic Operations
- Addition
- Subtraction
- Multiplication
- Division
- Division-by-zero protection

### Scientific Operations
- Power calculation (`x^y`)
- Square root
- Sine
- Cosine
- Tangent
- Natural logarithm (`ln`)
- Logarithm base 10 (`log10`)
- Factorial (`n!`)
- Percentage calculation

### Input & Error Handling
- Integer input validation
- Floating-point input validation
- Operator validation
- Negative square-root protection
- Invalid logarithm input protection
- Factorial range validation
- Division-by-zero protection

### Project Features
- Modular C architecture
- Separate source files for each calculator module
- Header file for function declarations
- GNU Make build system
- `.gitignore`
- MIT License
- Cross-platform source code

---

## 📁 Project Structure

```text
scientific-calculator/
│
├── include/
│   └── calculator.h
│
├── src/
│   ├── main.c
│   ├── basic_calculator.c
│   ├── power_calculator.c
│   ├── sqrt_calculator.c
│   ├── trig_calculator.c
│   ├── log_calculator.c
│   ├── factorial_calculator.c
│   ├── percentage_calculator.c
│   └── utils.c
│
├── screenshots/
│   └── demo.png
│
├── .gitignore
├── LICENSE
├── Makefile
├── README.md
└── CONTRIBUTING.md
