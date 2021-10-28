// In these cases,
// we have the possibility that an internal catch block forwards the exception to its external
// level or skip execution rest try-catch block below the code. This is done with the 
// expression throw; with no arguments. For example:

#include <iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch (int n)
        {
            cout << "Handle Partially " << endl;
            throw; // Re-throwing an exception
        }
        catch (...)
        {
            cout << "Default" << endl;
        }

        try
        {
            throw "second try block";
        }
        catch(const char * e)
        {
            cout << e << '\n';
        }
        
    }
    catch (int n)
    {
        cout << "Handle remaining " << endl;
    }
    return 0;
}