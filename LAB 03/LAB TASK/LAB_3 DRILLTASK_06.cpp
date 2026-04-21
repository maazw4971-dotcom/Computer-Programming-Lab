// Name: maaz wahab
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0719
// Section: A

#include <iostream>
using namespace std;

int main()
{
    // Declare star and delta resistance variables
    float R1, R2, R3;
    float Rab, Rbc, Rca;
    float sum;

    // Initialize variables
    R1 = 0;
    R2 = 0;
    R3 = 0;
    Rab = 0;
    Rbc = 0;
    Rca = 0;

    // Prompt user to enter star resistances
    cout << "Enter Star Resistance R1: ";
    cin >> R1;

    cout << "Enter Star Resistance R2: ";
    cin >> R2;

    cout << "Enter Star Resistance R3: ";
    cin >> R3;

    // Calculate common numerator
    sum = (R1 * R2) + (R2 * R3) + (R3 * R1);

    // Calculate Delta resistances
    Rab = sum / R3;
    Rbc = sum / R1;
    Rca = sum / R2;

    // Display results
    cout << "\nStar Resistances:" << endl;
    cout << "R1 = " << R1 << " ohms" << endl;
    cout << "R2 = " << R2 << " ohms" << endl;
    cout << "R3 = " << R3 << " ohms" << endl;

    cout << "\nEquivalent Delta Resistances:" << endl;
    cout << "Rab = " << Rab << " ohms" << endl;
    cout << "Rbc = " << Rbc << " ohms" << endl;
    cout << "Rca = " << Rca << " ohms" << endl;

    return 0;
}



