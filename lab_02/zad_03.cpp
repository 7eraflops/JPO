#include <algorithm>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool is_pallindrome(const string* input)
{
    string reverse_input(*input);
    std::reverse(reverse_input.begin(), reverse_input.end());
    return reverse_input == (*input);
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