//NAME : MAAZ WAHAB
//REG ID : BF25NWELE0719
//DEPARTMENT: ELECTRICAL ENGINERRING POWER 
//SECTION : A 
#include <iostream>
using namespace std;

int main()
{
    // Declare two arrays
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];

    // Copy elements from source to destination
    for(int i = 0; i < 5; i++)
    {
        destination[i] = source[i];
    }

    // Display source array
    cout << "Source Array: ";
    for(int i = 0; i < 5; i++)
    {
        cout << source[i] << " ";
    }

    cout << endl;

    // Display destination array
    cout << "Destination Array: ";
    for(int i = 0; i < 5; i++)
    {
        cout << destination[i] << " ";
    }

    return 0;
}