/*
    The setbase() method of iomaip library in C++ is used to set the ios library basefield 
    flag based on the argument specified as the parameter to this method.

    Syntax:
    setbase (int base)

    Parameters: This method accepts base as a parameter which is the integer argument 
    corresponding to which the base is to be set. 10 stands for dec, 16 stands for hex,
    8 stands for oct, and any other value stands for 0 (reset).

    Return Value: This method does not returns anything. It only acts as stream manipulators.
    
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setbase(16);
    cout << 1100 << endl;

    cout << setbase(10);
    cout << 1100 << endl;

    cout << setbase(8);
    cout << 1100 << endl;

    cout << setbase(4);
    cout << 1100 << endl;
    return 0;
}