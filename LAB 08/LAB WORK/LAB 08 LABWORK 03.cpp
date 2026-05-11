//NAME : MAAZ WAHAB
//REG ID : BF25NWELE0719
//DEPARTMENT : ELECTRICAL ENGINEERING
//SECTION : A#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    // Declaring and initializing a 4x4 matrix
    int matrix[4][4] = {
        {12, 5, 9, 3},
        {7, 25, 14, 6},
        {18, 11, 4, 20},
        {2, 30, 8, 15}
    };

    // Assume first element is maximum initially
    int maxValue = matrix[0][0];

    // Finding maximum value using nested loops
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (matrix[row][col] > maxValue)
            {
                maxValue = matrix[row][col];
            }
        }
    }

    // Displaying the maximum value
    cout << "Maximum Value in the Matrix = " << maxValue << endl;

    return 0;
}
