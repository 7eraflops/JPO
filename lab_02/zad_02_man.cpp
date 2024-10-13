#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string user_input{};
    cout << "Enter a string: ";
    cin >> user_input;

    // method 2
    size_t n = user_input.size();
    for (size_t i = 0; i < n / 2; i++)
    {
        char temp = user_input[i];
        user_input[i] = user_input[n - i - 1];
        user_input[n - i - 1] = temp;
    }
    cout << "The input string reversed \"manually\": " << user_input << endl
         << endl;
    return 0;
}