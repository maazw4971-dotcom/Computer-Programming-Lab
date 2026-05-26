//NAME : MAAZ WAHAB 
//REG ID : BF25NWELE0719
//DEPARTMENT : ELCTRICAL
//SECTION : A 
#include <iostream> // Header file for input and output
using namespace std; // Allows use of standard names without std::

int main()
{
    int num = 25; // Declare an integer variable and initialize it with 25

    int *ptr; // Declare a pointer variable of integer type

    ptr = &num; // Store the address of num in pointer ptr

    cout << "Value of num: " << num << endl; 
    // Display the value stored in num

    cout << "Address of num: " << &num << endl; 
    // Display the memory address of num

    cout << "Value stored in ptr: " << ptr << endl; 
    // Display the address stored inside pointer ptr

    cout << "Value pointed by ptr: " << *ptr << endl; 
    // Dereference ptr to display the value at that address

    return 0; // Indicate successful program execution
}