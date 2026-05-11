#include <iostream>
using namespace std;

// Function declaration (prototype)
int getSquare(int number);

int main()
{
    int num, result;

    // Taking input from user
    cout << "Enter a number: ";
    cin >> num;

    // Calling function and storing returned value
    result = getSquare(num);

    // Displaying the result in main
    cout << "Square of " << num << " is: " << result << endl;

    return 0;
}

// Function definition
int getSquare(int number)
{
    int square;

    // Calculating square
    square = number * number;

    // Returning result to main
    return square;
}