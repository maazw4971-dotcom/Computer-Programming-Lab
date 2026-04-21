#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float base, perpendicular, hypotenuse;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter perpendicular: ";
    cin >> perpendicular;

    hypotenuse = sqrt(base*base + perpendicular*perpendicular);

    cout << "Hypotenuse = " << hypotenuse << endl;

    return 0;
}

