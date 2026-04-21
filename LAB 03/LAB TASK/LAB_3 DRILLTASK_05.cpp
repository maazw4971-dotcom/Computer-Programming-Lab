// Name: maaz wahab
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0719
// Section: A

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    float r1, r2;           // resistances
    float Itotal;           // total current
    float I1, I2;           // branch currents

    // Initialize variables
    r1 = 0;
    r2 = 0;
    Itotal = 0;
    I1 = 0;
    I2 = 0;

    // Ask user to enter resistor values
    cout << "Enter value of first resistor (ohms): ";
    cin >> r1;

    cout << "Enter value of second resistor (ohms): ";
    cin >> r2;

    // Ask user to enter total current
    cout << "Enter total current (A): ";
    cin >> Itotal;

    // Calculate branch currents using current division rule
    I1 = Itotal * (r2 / (r1 + r2));
    I2 = Itotal * (r1 / (r1 + r2));

    // Display results
    cout << "\nFirst Resistor: " << r1 << " ohms" << endl;
    cout << "Second Resistor: " << r2 << " ohms" << endl;
    cout << "Total Current: " << Itotal << " A" << endl;

    cout << "Current through Resistor 1: " << I1 << " A" << endl;
    cout << "Current through Resistor 2: " << I2 << " A" << endl;

    return 0;
}


