#include <algorithm>  // For std::for_each
#include <iostream>
#include <numeric>  // For std::accumulate
#include <vector>

int main()
{
    auto number{0};
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0)
    {
        std::cout << "Please enter a positive value" << std::endl;
        return 1;
    }

    std::vector<int> numbers(number + 1);
    auto first = numbers.begin();
    auto last = numbers.end();

    std::iota(first, last, 0);
    std::for_each(first, last, [](int n)
                  { std::cout << n << " "; });

    std::cout << std::endl;

    auto sum = std::accumulate(first, last, 0);
    std::cout << "Sum of numbers from 0 to " << number << " is: " << sum << std::endl;

    return 0;
}