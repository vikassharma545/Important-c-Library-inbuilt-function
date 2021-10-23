#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x = 1.411, y = 1.500, z = 1.711;
    double a = -1.411, b = -1.500, c = -1.611;

    cout << floor(x) << endl; // closest integer less then given value
    cout << floor(y) << endl;
    cout << floor(z) << endl;

    cout << floor(a) << endl;
    cout << floor(b) << endl;
    cout << floor(c) << endl;

    cout << ceil(x) << endl; // closest integer greater then given value
    cout << ceil(y) << endl;
    cout << ceil(z) << endl;

    cout << ceil(a) << endl;
    cout << ceil(b) << endl;
    cout << ceil(c) << endl;

    cout << trunc(x) << endl; // remove decimal digits
    cout << trunc(y) << endl;
    cout << trunc(z) << endl;

    cout << trunc(a) << endl;
    cout << trunc(b) << endl;
    cout << trunc(c) << endl;

    cout << round(x) << endl; // round of and remove decimal
    cout << round(y) << endl;
    cout << round(z) << endl;

    cout << round(a) << endl;
    cout << round(b) << endl;
    cout << round(c) << endl;

    x = 7.5, y = 2.13;
    double result = fmod(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;
    result = remainder(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;

    return 0;
}