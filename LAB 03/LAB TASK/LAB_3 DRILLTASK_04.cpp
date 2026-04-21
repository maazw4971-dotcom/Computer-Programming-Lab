// Name: maaz wahab
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0719
// Section: A

#include <iostream>
using namespace std;

int main()
{
    // Declare variables for two resistors and net resistance
    float r1, r2, netResistance;

    // Initialize variables
    r1 = 0;
    r2 = 0;
    netResistance = 0;

    // Ask user to enter values
    cout << "Enter value of first resistor: ";
    cin >> r1;

    cout << "Enter value of second resistor: ";
    cin >> r2;

    // Calculate net resistance using parallel formula
    netResistance = (r1 * r2) / (r1 + r2);

    // Display results
    cout << "First Resistor: " << r1 << " ohms" << endl;
    cout << "Second Resistor: " << r2 << " ohms" << endl;
    cout << "Net Parallel Resistance: " << netResistance << " ohms" << endl;

    return 0;
}


