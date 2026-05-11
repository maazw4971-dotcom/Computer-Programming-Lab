//NAME : MAAZ WAHAB
//REG ID : BF25NWELE0719
//DEPARTMENT : ELECTRICAL ENGINEERING
//SECTION : A#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    // Declaring and initializing a 3x3 matrix
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };

    int totalSum = 0;

    // Calculating row sums
    cout << "Sum of each row:\n";

    for (int row = 0; row < 3; row++)
    {
        int rowSum = 0;

        for (int col = 0; col < 3; col++)
        {
            rowSum = rowSum + matrix[row][col];
        }

        cout << "Row " << row + 1 << " Sum = " << rowSum << endl;

        totalSum = totalSum + rowSum;
    }

    cout << endl;

    // Calculating column sums
    cout << "Sum of each column:\n";

    for (int col = 0; col < 3; col++)
    {
        int colSum = 0;

        for (int row = 0; row < 3; row++)
        {
            colSum = colSum + matrix[row][col];
        }

        cout << "Column " << col + 1 << " Sum = " << colSum << endl;
    }

    cout << endl;

    // Displaying total sum of all elements
    cout << "Total Sum of all elements = " << totalSum << endl;

    return 0;
}
