#include <bits/stdc++.h>

class RandomNumberGenerator
{
public:
    RandomNumberGenerator(int seed) : state(seed) {}

    // Generate a random float in the range [min, max]
    double randomFloatNumberGenerator(double min, double max)
    {
        // Ensure the range is valid
        if (min > max)
        {
            std::swap(min, max);
        }

        // Constants for random number generation
        constexpr uint64_t multiplier = 6364136223846793005u;
        constexpr uint64_t increment = 1;

        // Update the state
        state = multiplier * state + increment;

        // Calculate the random float within the specified range
        double range = max - min;
        double randomValue = (static_cast<double>(state) / static_cast<double>(UINT64_MAX)) * range + min;

        return randomValue;
    }

private:
    uint64_t state;
};

int main()
{
    RandomNumberGenerator rng(time(0)); // Seed the generator with an initial value
    double amount = 100.0;

    // Store the initial amount in a separate variable
    double initialAmount = amount;

    // Generate and print random float values
    for (int i = 1; i <= 10; i++)
    {
        double randomChange = rng.randomFloatNumberGenerator(-1.0, 1.0);

        double current = amount + (amount * randomChange / 100.0);
        amount = current;

        std::cout << "Change: " << randomChange << "%, Current: $" << std::fixed << amount << ", Earned: " << (amount - initialAmount) << std::endl;
    }

    return 0;
}
