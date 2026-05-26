//NAME : MAAZ WAHAB 
//REG ID : BF25NWELE0719
//DEPARTMENT : ELCTRICAL
//SECTION : A 
#include <iostream> // Header file for input and output
using namespace std; // Allows use of standard names without std::

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50}; 
    // Declare and initialize an integer array

    int *ptr; // Declare a pointer variable of integer type

    ptr = numbers; 
    // Pointer points to the first element of the array

    cout << "Array elements using pointer arithmetic:" << endl;

    // Access array elements using pointer arithmetic
    cout << *(ptr + 0) << endl; 
    // Access first element

    cout << *(ptr + 1) << endl; 
    // Access second element

    cout << *(ptr + 2) << endl; 
    // Access third element

    cout << *(ptr + 3) << endl; 
    // Access fourth element

    cout << *(ptr + 4) << endl; 
    // Access fifth element

    return 0; // Indicate successful program execution
}