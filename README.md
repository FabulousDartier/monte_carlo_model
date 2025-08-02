# 🎯 Monte Carlo Option Pricer

[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B17-blue.svg)](https://isocpp.org/)
[![Build System: CMake](https://img.shields.io/badge/Build-CMake-green.svg)](https://cmake.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

A high-performance C++ application that estimates European-style call option prices using **Monte Carlo simulation**. This project demonstrates the application of mathematical finance, statistical modeling, and modern C++ programming practices in quantitative finance.

## 🚀 Features

- **🎲 Monte Carlo Simulation**: Estimates option prices by simulating thousands of stock price paths using Geometric Brownian Motion
- **📊 Financial Modeling**: Implements Black-Scholes framework with stochastic processes
- **🏗️ Clean Architecture**: Well-structured codebase with separation of concerns (.h/.cpp files)
- **⚡ Performance**: Optimized C++17 implementation for fast computations
- **🔧 Cross-Platform**: CMake build system for Windows, Linux, and macOS

## 🛠️ Technologies Used

- **Language**: C++17
- **Build System**: CMake 3.10+
- **Libraries**: Standard Library (`<iostream>`, `<cmath>`, `<random>`, `<vector>`)
- **Mathematical Model**: Geometric Brownian Motion, Black-Scholes framework

## 📦 Installation & Usage

### Prerequisites
- CMake 3.10 or higher
- C++17 compatible compiler (MSVC, GCC, or Clang)

### Build Instructions

#### Windows (PowerShell)
```powershell
# Clone the repository
git clone https://github.com/FabulousDartier/monte_carlo_model.git
cd monte_carlo_model

# Create build directory and configure
mkdir build
cd build
cmake ..

# Build the project
cmake --build . --config Debug

# Run the executable
.\monte_carlo_model.exe
```

#### Linux/macOS
```bash
# Clone the repository
git clone https://github.com/FabulousDartier/monte_carlo_model.git
cd monte_carlo_model

# Create build directory and configure
mkdir build && cd build
cmake ..

# Build and run
make
./monte_carlo_model
```

## 📈 Sample Output

```
Estimated Call Option Price: 10.5117
```

## 🧮 Mathematical Background

This implementation uses:
- **Geometric Brownian Motion** for stock price modeling
- **Risk-neutral valuation** for option pricing
- **Monte Carlo integration** for numerical estimation

The option price is calculated as the discounted expected payoff:
```
Call Price = e^(-r*T) * E[max(S_T - K, 0)]
```

Where:
- `S_T`: Stock price at maturity
- `K`: Strike price  
- `r`: Risk-free rate
- `T`: Time to maturity

## 📁 Project Structure

```
monte_carlo_model/
├── CMakeLists.txt          # Build configuration
├── README.md              # Project documentation
├── LICENSE                # MIT license
├── src/                   # Source files
│   ├── main.cpp          # Entry point
│   └── monte_carlo.cpp   # Monte Carlo implementation
├── include/              # Header files
│   └── monte_carlo.h     # Class declarations
└── build/               # Build artifacts (generated)
```

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🎓 Academic Context

This project was developed to apply concepts from:
- **Mathematical Finance**: Stochastic calculus and option pricing theory
- **Statistics**: Monte Carlo methods and random number generation
- **Computer Science**: Object-oriented programming and software engineering practices

## 📞 Contact

**Author**: FabulousDartier  
**Repository**: [monte_carlo_model](https://github.com/FabulousDartier/monte_carlo_model)
