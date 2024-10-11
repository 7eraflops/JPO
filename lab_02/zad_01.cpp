#include <iostream>
#include <random>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print_matrix(vector<vector<int>>* matrix)
{
    for (const auto& row : *matrix)
    {
        for (const auto& elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main()
{
    size_t rows{}, columns{};
    int sum{};
    cout << "Enter the number of rows, then columns for the matrix: " << std::endl;
    cin >> rows >> columns;

    vector<vector<int>> matrix(rows, vector<int>(columns, 0));

    std::random_device rnd;
    std::mt19937 gen(rnd());
    std::uniform_int_distribution<> dist(0, 9);

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            matrix[i][j] = dist(gen);
        }
    }

    cout << "The generated random Matrix: " << endl;
    print_matrix(&matrix);
    cout << endl;

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            if (i % 2 != 0 || j % 2 == 0)
            {
                sum += matrix[i][j];
                matrix[i][j] = 1; // changing values to show which entries are being summed
            }
            else
            {
                matrix[i][j] = 0; // see line 54
            }
        }
    }

    cout << "The sum of the matrix entries either in even columns or odd rows is: " << sum << endl
         << endl
         << "For reference, these entries are being summed: " << endl;
    print_matrix(&matrix);

    return 0;
}