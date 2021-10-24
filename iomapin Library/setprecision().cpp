/*
    The setprecision() method of iomaip library in C++ is used to set the ios library floating
    point precision based on the precision specified as the parameter to this method.

    Syntax:
    setprecision(int n)

    Parameters: This method accepts n as a parameter which is the integer argument corresponding 
    to which the floating-point precision is to be set.

    Return Value: This method does not return anything. It only acts as stream manipulators.

*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double f = 315.1475967;
    cout << setprecision(5) << f << endl;   // digit count with include non decimal part 
    cout << setprecision(7) << f << endl;   
    cout << setprecision(9) << f << endl;

    cout << fixed;      // fixed decimal digit only if not then zero added

    cout << setprecision(2) << f << endl;
    cout << setprecision(7) << f << endl;
    cout << setprecision(9) << f << endl;
    return 0;
}