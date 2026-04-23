//NAME:MAAZ WAHAB
//REG ID:BF25NWELE0719
//DEPARTMENT:ELECTRICAL ENGINEERING (POWER)
#include <iostream>
using namespace std;

int main() {
    int rows;

    // Prompt the user for the number of rows
    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop to print asterisks in the current row
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Move to the next line after printing all stars in a row
        cout << endl;
    }

    return 0;
}