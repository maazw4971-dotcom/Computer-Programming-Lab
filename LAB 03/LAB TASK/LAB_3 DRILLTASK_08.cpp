#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, root1, root2, D;

    cout << "Enter coefficient a: ";
    cin >> a;

    cout << "Enter coefficient b: ";
    cin >> b;

    cout << "Enter coefficient c: ";
    cin >> c;

    D = b*b - 4*a*c;

    root1 = (-b + sqrt(D)) / (2*a);
    root2 = (-b - sqrt(D)) / (2*a);

    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2 << endl;

    return 0;
}


