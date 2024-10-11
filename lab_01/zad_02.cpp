#include <iostream>

int main()
{
    int numbers[5]{0};
    std::cout << "Enter 5 numbers, each in a new line: " << std::endl;
    for (size_t i = 0; i < 5; i++)
    {
        std::cin >> numbers[i];
    }
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << numbers[i];
    }
    return 0;
}