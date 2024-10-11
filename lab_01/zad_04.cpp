#include <iomanip>
#include <iostream>

void fahrenheit_to_celsius(double *temp_fahrenheit, double *temp_celsius)
{
    *temp_celsius = (*temp_fahrenheit - 32.0) * 5.0 / 9.0;
}

int main()
{
    double temp_fahrenheit{0};
    double temp_celsius{0};

    std::cout << "Enter the temperature in degrees fahrenheit: ";
    std::cin >> temp_fahrenheit;

    fahrenheit_to_celsius(&temp_fahrenheit, &temp_celsius);

    std::cout << std::fixed << std::setprecision(1) << temp_fahrenheit << " degrees fahrenheit is " << temp_celsius << " degrees celsius" << std::endl;
    return 0;
}