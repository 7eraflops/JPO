#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool is_pallindrome(const string* input)
{
    size_t n = input->length();
    for (size_t i = 0; i < n / 2; i++)
    {
        if (input->at(i) != input->at(n - i - 1))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string user_input{};
    cout << "Enter a string to check, whether it's a pallindrome: ";
    cin >> user_input;

    if (is_pallindrome(&user_input))
    {
        cout << "The string \"" << user_input << "\" is a pallindrome" << endl;
    }
    else
    {
        cout << "The string \"" << user_input << "\" is not a pallindrome" << endl;
    }
}