/*
    A pure virtual function (or abstract function) in C++ is a virtual function for which we 
    don’t have an implementation, we only declare it. A pure virtual function is declared by 
    assigning 0 in the declaration.

    virtual<func_type><func_name>() = 0;
*/

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show() = 0;    // ----> pure virtual function
};

class Derived : public Base
{
public:
    void show() { cout << "In Derived \n"; }
};

int main(void)
{
    Base *bp = new Derived();
    bp->show();
    return 0;
}
