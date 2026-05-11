//NAME : MAAZ WAHAB
//REG ID : BF25NWELE0719
//DEPARTMENT : ELECTRICAL ENGINEERING
//SECTION : A
#include <iostream>
using namespace std;

// Function declaration (prototype)
void multiply(int num1, int num2);

int main()
{
    int a, b;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Calling the function and passing arguments
    multiply(a, b);

    return 0;
}

// Function definition
void multiply(int num1, int num2)
{
    int product;

    // Calculating product
    product = num1 * num2;

    // Displaying result
    cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;
}
