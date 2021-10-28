/*
    The setw() method of iomanip library in C++ is used to set the ios library field width
    based on the width specified as the parameter to this method.

    Syntax: 
    setw(int n)

    Parameters: This method accepts n as a parameter which is the integer argument
    corresponding to which the field width is to be set.

    Return Value: This method does not returns anything. It only acts as stream manipulators.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(10) << left;
    cout << 77 << endl;
    cout << setw(10) << right;
    cout << 77 << endl;

    return 0;
}