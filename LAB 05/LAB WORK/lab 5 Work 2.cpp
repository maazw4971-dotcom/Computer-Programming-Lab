#include <iostream>   // Library used for input and output
using namespace std;  // Allows using cout without writing std::

int main()            // Main function where execution starts
{
    int i = 1;        // Declare variable i and initialize it with 1

    do                // do-while loop starts
    {
        cout << i << endl;  // Display the value of i
        i++;                // Increase the value of i by 1
    }
    while (i <= 10);  // Loop continues while i is less than or equal to 10

    return 0;         // End the program
}