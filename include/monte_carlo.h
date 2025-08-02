#pragma once

// A struct to hold the option's contract terms
struct Option {
    double strikePrice;
    double timeToMaturity;
};

// A struct to hold the stock's financial properties
struct Stock {
    double initialPrice;
    double riskFreeRate;
    double volatility;
};

// Class Declaration
/**
 * @class MonteCarloSimulation
 * @brief Provides functionality to price financial derivatives using Monte Carlo simulation techniques.
 *
 * This class implements methods to estimate the price of options and other financial instruments
 * by simulating the underlying asset's price paths and calculating expected payoffs.
 */

/**
 * @brief Estimates the price of a European call option using Monte Carlo simulation.
 *
 * Simulates multiple price paths for the underlying stock and computes the average payoff
 * of the call option at expiration, discounted to present value.
 *
 * @param option The option contract containing parameters such as strike price and expiry.
 * @param stock The underlying stock with relevant market data.
 * @param numSimulations The number of simulated price paths to generate for the estimation.
 * @return The estimated price of the call option.
 */
class MonteCarloSimulation {
public:
    double priceCallOption(const Option &option, const Stock &stock, int numSimulations);
};
