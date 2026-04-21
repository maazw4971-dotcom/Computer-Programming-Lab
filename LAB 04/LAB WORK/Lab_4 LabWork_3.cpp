// Name: maaz wahab
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0719
// Section: A
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double value, result;

    cout << "UNIT CONVERTER" << endl;
    cout << "1 ->  Kilometers to Meters" << endl;
    cout << "2 ->  Meters to Centimeters" << endl;
    cout << "3 ->  Kilograms to Grams" << endl;
    cout << "4 ->  Celsius to Fahrenheit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter Kilometers Value: ";
            cin >> value;
            result = value * 1000;
            cout << "Result: " << result << " meters" << endl;
            break;

        case 2:
            cout << "Enter Meters value: ";
            cin >> value;
            result = value * 100;
            cout << "Result: " << result << " centimeters" << endl;
            break;

        case 3:
            cout << "Enter Kilograms value: ";
            cin >> value;
            result = value * 1000;
            cout << "Result: " << result << " grams" << endl;
            break;

        case 4:
            cout << "Enter Celsius value: ";
            cin >> value;
            result = (value * 9/5) + 32;
            cout << "Result: " << result << " Fahrenheit" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}

