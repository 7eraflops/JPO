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
    string user_input{};
    cout << "Enter a string: ";
    cin >> user_input;

    // method 1
    reverse(user_input.begin(), user_input.end());
    cout << "The input string reversed using std::reverse: " << user_input << endl
         << endl;
    return 0;
}