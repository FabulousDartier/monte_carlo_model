# C++ Monte Carlo Option Pricer

This project is a C++ application that estimates the price of a European-style call option using a **Monte Carlo simulation**. This was developed to apply concepts from my studies in mathematics, statistics, and object-oriented programming to a real-world problem in quantitative finance.

## Features

* **Monte Carlo Simulator:** Estimates the option price by simulating millions of random stock price paths based on the Geometric Brownian Motion model.
* **Structured Code:** The project is organized with a clean separation of interface (.h) and implementation (.cpp) files.
* **Build System:** Uses CMake for a standard, cross-platform build process.

## Technologies Used

* **Language:** C++ (Standard: C++17)
* **Build System:** CMake
* **Core Libraries:** `<iostream>`, `<cmath>`, `<random>`

## How to Build and Run

This project uses CMake to build from the source.

```bash
# 1. Clone the repository
git clone <your-repo-url>
cd OptionPricer

# 2. Create a build directory
mkdir build
cd build

# 3. Configure the project with CMake
cmake ..

# 4. Compile the project
make

# 5. Run the executable
./OptionPricer
