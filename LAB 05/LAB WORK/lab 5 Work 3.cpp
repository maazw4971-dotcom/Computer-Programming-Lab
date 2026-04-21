#include <iostream>        // Library used for input and output
using namespace std;       // Allows using cout without writing std::

int main()                 // Main function where program starts
{
    int i = 1;             // Initialize counter variable with 1
    int sum = 0;           // Variable to store the sum

    while (i <= 10)        // While loop runs until i becomes greater than 10
    {
        sum = sum + i;     // Add the current value of i to sum
        i++;               // Increase i by 1
    }

    cout << "The sum of numbers from 1 to 10 is: " << sum << endl;  // Display the result

    return 0;              // End of program
}