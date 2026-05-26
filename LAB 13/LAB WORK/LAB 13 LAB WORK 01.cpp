//NAME : MAAZ WAHAB 
//REG ID : BF25NWELE0719
//DEPARTMENT : ELCTRICAL
//SECTION : A 
#include <iostream> // Header file for input and output functions
#include <string>   // Header file for using string data type
using namespace std; // Allows use of standard names without std::

// Declare a structure named Person
struct Person
{
    string name;     // Structure member to store person's name
    int age;         // Structure member to store person's age
    string address;  // Structure member to store person's address
};

int main()
{
    // Declare and initialize structure variable person1
    Person person1;

    // Assign values to structure members
    person1.name = "Ali Hassan";          // Store name in structure
    person1.age = 21;                     // Store age in structure
    person1.address = "Lahore, Pakistan"; // Store address in structure

    // Display structure member values
    cout << "Person Information" << endl;          // Display heading
    cout << "Name: " << person1.name << endl;      // Display name
    cout << "Age: " << person1.age << endl;        // Display age
    cout << "Address: " << person1.address << endl; // Display address

    return 0; // End of program
}