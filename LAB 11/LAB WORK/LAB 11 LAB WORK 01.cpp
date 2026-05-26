//NAME : MAAZ WAHAB 
//REG ID : BF25NWELE0719
//DEPARTMENT : ELCTRICAL
//SECTION : A 
// Header file for input and output operations
#include <iostream>

// Header file for string handling functions
#include <cstring>

// Used to avoid writing std:: again and again
using namespace std;

// Main function where program execution starts
int main()
{
    // Declare and initialize a character string
    char message[] = "Welcome to Computer Programming Lab";

    // strlen() function calculates the length of the string
    int length = strlen(message);

    // Display the original string
    cout << "Message: " << message << endl;

    // Display the length of the string
    cout << "Length of string: " << length << endl;

    // Return 0 indicates successful execution
    return 0;
}