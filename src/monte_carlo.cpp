#include "../include/monte_carlo.h"
#include <cmath>
#include <iostream>
#include <random>

using namespace std;

// Monte Carlo simulation for pricing a European call option
double MonteCarloSimulation::priceCallOption(const Option &option, const Stock &stock, int numSimulations) {
    // Initialize random number generator for standard normal distribution
    random_device rd;
    mt19937 gen(rd());
    normal_distribution<double> dist(0.0, 1.0);

    double sumOfPayoffs = 0.0;

    // Perform Monte Carlo simulations
    for (int i = 0; i < numSimulations; i++) {
        // Generate a random sample from the standard normal distribution
        double Z = dist(gen);

        // Simulate stock price at maturity using Geometric Brownian Motion
        double stockPriceAtMaturity = stock.initialPrice * exp(
                                                               (stock.riskFreeRate - 0.5 * pow(stock.volatility, 2)) * option.timeToMaturity +
                                                               stock.volatility * sqrt(option.timeToMaturity) * Z);

        // Calculate payoff for a call option
        double payoff = max(stockPriceAtMaturity - option.strikePrice, 0.0);
        sumOfPayoffs += payoff;
    }

    // Compute the average payoff across all simulations
    double averagePayoff = sumOfPayoffs / numSimulations;

    // Discount the average payoff to present value using risk-free rate
    double finalEstimatedOptionPrice = averagePayoff * exp(-stock.riskFreeRate * option.timeToMaturity);

    // Return the estimated option price
    return finalEstimatedOptionPrice;
}
