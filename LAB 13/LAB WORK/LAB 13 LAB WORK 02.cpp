//NAME : MAAZ WAHAB 
//REG ID : BF25NWELE0719
//DEPARTMENT : ELCTRICAL
//SECTION : A 
#include <iostream> // Header file for input and output
#include <string>   // Header file for string data type
using namespace std; // Use standard namespace

// Declare structure named Student
struct Student
{
    string name; // Structure member for student name
    int age;     // Structure member for student age
    char grade;  // Structure member for student grade
};

int main()
{
    // Declare structure variable student1
    Student student1;

    // Initialize structure members
    student1.name = "Ahmed Raza"; // Assign student name
    student1.age = 20;            // Assign student age
    student1.grade = 'A';         // Assign student grade

    // Display student information
    cout << "Student Information" << endl;          // Display heading
    cout << "Name: " << student1.name << endl;      // Display name
    cout << "Age: " << student1.age << endl;        // Display age
    cout << "Grade: " << student1.grade << endl;    // Display grade

    return 0; // End program successfully
}