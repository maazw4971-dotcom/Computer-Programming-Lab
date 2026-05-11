//NAME : MAAZ WAHAB
//REG ID : BF25NWELE0719
//DEPARTMENT: ELECTRICAL ENGINERRING POWER 
//SECTION : A 
#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize a character array (string)
    char message[] = "HELLO";

    // Loop through each character until null character '\0'
    for(int i = 0; message[i] != '\0'; i++)
    {
        // Print each character on a new line
        cout << message[i] << endl;
    }

    return 0;
}