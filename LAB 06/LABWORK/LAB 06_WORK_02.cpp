//NAME:MAAZ WAHAB
//REG ID:BF25NWELE0719
//DEPARTMENT:ELECTRICAL ENGINEERING (POWER)
#include <iostream>

using namespace std;

int main() {
    // Outer loop for the multiplier (1 to 10)
    for (int i = 1; i <= 10; i++) {
        
        // Inner loop for the multiplicand (1 to 10)
        for (int j = 1; j <= 10; j++) {
            // Display format: i * j = result
            // We use "\t" (tab) to give space between columns
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        
        // Move to the next line after finishing one row
        cout << endl;
    }

    return 0;
}