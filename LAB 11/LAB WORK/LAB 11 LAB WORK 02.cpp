//NAME : MAAZ WAHAB 
//REG ID : BF25NWELE0719
//DEPARTMENT : ELCTRICAL
//SECTION : A 
// Header file for input and output operations
#include <iostream>

// Header file for string functions
#include <cstring>

// Used to avoid writing std:: repeatedly
using namespace std;

// Main function
int main()
{
    // Declare and initialize first name
    char firstName[20] = "Maaz";

    // Declare and initialize last name
    char lastName[20] = "Wahab";

    // Declare a string to store full name
    char fullName[50];

    // Copy firstName into fullName
    strcpy(fullName, firstName);

    // Add a space after first name
    strcat(fullName, " ");

    // Concatenate lastName with fullName
    strcat(fullName, lastName);

    // Display the complete full name
    cout << "Full Name: " << fullName << endl;

    // Return 0 for successful execution
    return 0;
}