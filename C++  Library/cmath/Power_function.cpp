#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x = 16, y = 3.0;

    cout << "Power         " << x << "^" << y << " : " << pow(x, y) << endl;
    cout << "Squar root of " << x << " : " << sqrt(x) << endl;
    cout << "Cube root of  " << x << " : " << cbrt(x) << endl;

    // hypotenuse = The square root of (x^2+y^2).
    x = 3, y = 4;
    cout << "Hypotenuse of right angle triangle of side " << x << " and " << y << " is : " << hypot(x, y) << endl;
    return 0;
}