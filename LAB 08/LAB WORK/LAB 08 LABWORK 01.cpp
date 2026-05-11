//NAME : MAAZ WAHAB
//REG ID : BF25NWELE0719
//DEPARTMENT : ELECTRICAL ENGINEERING
//SECTION : A
#include <iostream>
using namespace std;

int main()
{
    // Declaring and initializing a 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Displaying matrix elements using nested loops
    cout << "Matrix Elements are:\n";

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << " ";
        }

        // Move to next line after each row
        cout << endl;
    }

    return 0;
}