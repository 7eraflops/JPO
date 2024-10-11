#include <iomanip>
#include <iostream>

void Fahrenheit_to_Celsius(double *temp_Fahrenheit, double *temp_Celsius)
{
    *temp_Celsius = (*temp_Fahrenheit - 32) * 5.0 / 9.0;
}

int main()
{
    double temp_Fahrenheit{0};
    double temp_Celsius{0};

    std::cout << "Enter the temperature in degrees Fahrenheit: ";
    std::cin >> temp_Fahrenheit;

    Fahrenheit_to_Celsius(&temp_Fahrenheit, &temp_Celsius);

    std::cout << std::fixed << std::setprecision(1) << temp_Fahrenheit << " degrees Fahrenheit is " << temp_Celsius << " degrees Celsius" << std::endl;
    return 0;
}