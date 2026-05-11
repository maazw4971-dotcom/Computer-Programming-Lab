#include <iostream>
using namespace std;

// Function prototype
int calculateSum(int arr[], int size);

int main()
{
    int numbers[10];   // 1D array of size 10
    int sum;
    float average;

    // Taking input from user
    cout << "Enter 10 integers:" << endl;
    for(int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    // Function call to calculate sum
    sum = calculateSum(numbers, 10);

    // Calculating average
    average = sum / 10.0;

    // Display results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

// Function definition
int calculateSum(int arr[], int size)
{
    int sum = 0;

    // Loop to calculate sum
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;   // returning sum
}