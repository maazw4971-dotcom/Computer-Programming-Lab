//NAME : MAAZ WAHAB
//REG ID : BF25NWELE0719
//DEPARTMENT: ELECTRICAL ENGINERRING POWER 
//SECTION : A 
#include <iostream>
using namespace std;

int main()
{
    // Declare array and variables
    int numbers[5];
    int sum = 0;

    // Take input from user
    cout << "Enter 5 numbers: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    // Calculate sum of array elements
    for(int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }

    // Display the sum
    cout << "Sum of numbers = " << sum << endl;

    return 0;
}