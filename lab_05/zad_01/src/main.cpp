#include "Complex_number.hpp"

int main()
{
    // Test with float type
    mc::jpo::Complex_number<float> c1(3.0f, 4.0f);
    mc::jpo::Complex_number<float> c2(1.0f, 2.0f);

    std::cout << "Complex number c1: " << c1 << std::endl;
    std::cout << "Complex number c2: " << c2 << std::endl;

    // Test addition
    auto c3 = c1 + c2;
    std::cout << "c1 + c2 = " << c3 << std::endl;

    // Test addition with a scalar
    auto c4 = c1 + 5.0f;
    std::cout << "c1 + 5 = " << c4 << std::endl;

    // Test compound addition
    c1 += c2;
    std::cout << "c1 += c2 -> " << c1 << std::endl;

    // Test subtraction
    auto c5 = c1 - c2;
    std::cout << "c1 - c2 = " << c5 << std::endl;

    // Test subtraction with a scalar
    auto c6 = c1 - 2.0f;
    std::cout << "c1 - 2 = " << c6 << std::endl;

    // Test compound subtraction
    c1 -= c2;
    std::cout << "c1 -= c2 -> " << c1 << std::endl;

    // Test multiplication
    auto c7 = c1 * c2;
    std::cout << "c1 * c2 = " << c7 << std::endl;

    // Test compound multiplication
    c1 *= c2;
    std::cout << "c1 *= c2 -> " << c1 << std::endl;

    // Test division
    auto c8 = c1 / c2;
    std::cout << "c1 / c2 = " << c8 << std::endl;

    // Test compound division
    c1 /= c2;
    std::cout << "c1 /= c2 -> " << c1 << std::endl;

    // Test equality operator
    std::cout << "c1 == c2: " << (c1 == c2 ? "True" : "False") << std::endl;

    // Test inequality operator
    std::cout << "c1 != c2: " << (c1 != c2 ? "True" : "False") << std::endl;

    // Test normalization
    std::cout << "c1 before normalization: " << c1 << std::endl
              << "c1 after normalization (approximately): " << c1.normalize() << std::endl;

    // Test with double type
    mc::jpo::Complex_number<double> d1(3.0, 4.0);
    mc::jpo::Complex_number<double> d2(1.0, 2.0);

    std::cout << "\nTesting with double type:\n";
    std::cout << "Complex number d1: " << d1 << std::endl;
    std::cout << "Complex number d2: " << d2 << std::endl;

    auto d3 = d1 + d2;
    std::cout << "d1 + d2 = " << d3 << std::endl;

    auto d4 = d1 + 5.0;
    std::cout << "d1 + 5 = " << d4 << std::endl;

    d1 += d2;
    std::cout << "d1 += d2 -> " << d1 << std::endl;

    auto d5 = d1 - d2;
    std::cout << "d1 - d2 = " << d5 << std::endl;

    auto d6 = d1 - 2.0;
    std::cout << "d1 - 2 = " << d6 << std::endl;

    d1 -= d2;
    std::cout << "d1 -= d2 -> " << d1 << std::endl;

    auto d7 = d1 * d2;
    std::cout << "d1 * d2 = " << d7 << std::endl;

    d1 *= d2;
    std::cout << "d1 *= d2 -> " << d1 << std::endl;

    auto d8 = d1 / d2;
    std::cout << "d1 / d2 = " << d8 << std::endl;

    d1 /= d2;
    std::cout << "d1 /= d2 -> " << d1 << std::endl;

    std::cout << "d1 == d2: " << (d1 == d2 ? "True" : "False") << std::endl;
    std::cout << "d1 != d2: " << (d1 != d2 ? "True" : "False") << std::endl;

    return 0;
}