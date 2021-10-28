// If both base and derived classes are caught as exceptions then catch block of derived
// class must appear before the base class. If we put base class first then the derived
// class catch block will never be reached. In Java, catching a base class exception before
// derived is not allowed by the compiler itself. In C++, compiler might give warning about
// it, but compiles the code.

#include <iostream>
using namespace std;

class Base
{
};
class Derived : public Base
{
};
int main()
{
    Derived d;
    try
    {
        throw d;
    }
    catch (Base b)
    {
        cout << "Caught Base Exception" << endl;
    }
    catch (Derived d)
    {
        cout << "Caught Derived Exception" << endl;
    }

    // or

    // try
    // {
    //     int *n = new int[9999999];
    // }
    // catch (bad_alloc &e)
    // {
    //     cout << "Not enough memory" << endl;
    // }
    // catch (exception &e)    // if it before the bad_alloc then it excute itself only
    // {                       // and not reach to self generated message of (not enough memory)
    //     cout << "Exception: " << e.what() << endl;
    // }
    return 0;
}