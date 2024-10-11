#include <iostream>

int main()
{
    auto number{0};
    auto sum{0};
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0)
    {
        std::cout << "Please enter a positive value" << std::endl;
        return 1;
    }

    for (int i = 0; i <= number; ++i)
    {
        std::cout << i << " ";
        sum += i;
    }
    std::cout << std::endl;

    std::cout << "Sum of numbers from 0 to " << number << " is: " << sum << std::endl;

    return 0;
}
