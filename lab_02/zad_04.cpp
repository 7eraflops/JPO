#include <cctype>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string sentence{};
    char char_to_check{};

    cout << "Input a sentence: ";
    std::getline(cin, sentence);

    cout << "Input a character to count (case-insensitive): ";
    cin >> char_to_check;

    char_to_check = std::tolower(char_to_check);

    int count = 0;
    for (char c : sentence)
    {
        if (tolower(c) == char_to_check)
        {
            count++;
        }
    }

    cout << "The character '" << char_to_check << "' appears " << count << " times in the sentence." << endl;
    return 0;
}