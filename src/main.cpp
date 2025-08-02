#include "../include/monte_carlo.h"
#include <iostream>

using namespace std;

int main() {
    // Define option parameters
    Option option;
    option.strikePrice = 100.0;
    option.timeToMaturity = 1.0;

    // Define stock parameters
    Stock stock;
    stock.initialPrice = 100.0;
    stock.riskFreeRate = 0.05;
    stock.volatility = 0.2;

    // Create Monte Carlo simulation object
    MonteCarloSimulation mcSimulation;

    // Price the call option
    double optionPrice = mcSimulation.priceCallOption(option, stock, 10000);

    // Output the estimated option price
    cout << "Estimated Call Option Price: " << optionPrice << endl;

    return 0;
}
