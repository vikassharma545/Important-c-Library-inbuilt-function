/*
    The setfill() method of iomaip library in C++ is used to set the ios library fill character 
    based on the character specified as the parameter to this method.

    Syntax:
    setfill(char c)

    Parameters: This method accepts c as a parameter which is the character argument corresponding 
    to which the fill is to be set.

    Return Value: This method does not returns anything. It only acts as stream manipulators.
    
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setfill('x') << setw(10) << left;
    cout << 77 << endl;

    cout << setfill('x') << setw(10) << right;
    cout << 77 << endl;
    return 0;
}