//NAME:MAAZ WAHAB
//REG ID:BF25NWELE0719
//DEPARTMENT:ELECTRICAL ENGINEERING (POWER)
#include <iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;

    // Prompt the user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the input is positive
    if (n <= 0) {
        cout << "Invalid input. Please enter a number greater than 0." << endl;
        return 1;
    }

    // Use a for loop to calculate the sum from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the calculated sum
    cout << "The sum of all numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
