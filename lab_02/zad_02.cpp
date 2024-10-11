#include <algorithm>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::reverse;
using std::string;

int main()
{
    string input_string{};
    cout << "Enter a string: ";
    cin >> input_string;
    string input_string_copy(input_string);

    // method 1
    reverse(input_string.begin(), input_string.end());
    cout << "The input string reversed using std::reverse: " << input_string << endl
         << endl;

    // method 2
    size_t n = input_string_copy.size();
    for (size_t i = 0; i < n / 2; i++)
    {
        char temp = input_string_copy[i];
        input_string_copy[i] = input_string_copy[n - i - 1];
        input_string_copy[n - i - 1] = temp;
    }
    cout << "The input string reversed \"manually\": " << input_string_copy << endl
         << endl;
}