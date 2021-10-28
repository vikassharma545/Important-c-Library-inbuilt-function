/*
    The setiosflags() method of iomanip library in C++ is used to set the ios library format flags 
    specified as the parameter to this method.

    Syntax: 
    setiosflags (ios_base::format_flag)

    Parameters: This method accepts format_flag as a parameter which is the ios library format flag 
    to be set by this method.

    Return Value: This method does not returns anything. It only acts as stream manipulators.



    The resetiosflags() method of iomanip library in C++ is used to reset the ios library format 
    flags specified as the parameter to this method.

    Syntax: 
    resetiosflags (ios_base::format_flag)

    Parameters: This method accepts format_flag as a parameter which is the ios library format 
    flag to be reset by this method.

    Return Value: This method does not returns anything. It only acts as stream manipulators.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << hex << setiosflags(ios::showbase);
    cout << 100 << endl;
    cout << resetiosflags(ios::showbase) << 100 << endl;
    
    return 0;
}