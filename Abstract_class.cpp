/*
    Abstract Class is a class which contains atleast one Pure Virtual function in it. Abstract 
    classes are used to provide an Interface for its sub classes. Classes inheriting an Abstract 
    Class must provide definition to the pure virtual function, otherwise they will also become 
    abstract class.


    Characteristics of Abstract Class

    1.  Abstract class cannot be instantiated, but pointers and refrences of Abstract class type 
        can be created.

    2.  Abstract class can have normal functions and variables along with a pure virtual function.

    3.  Abstract classes are mainly used for Upcasting, so that its derived classes can use its 
        interface.

    4.  Classes inheriting an Abstract Class must implement all pure virtual functions, or else 
        they will become Abstract too i.e no object can created .

*/

#include <iostream>
using namespace std;

//Abstract base class
class Base
{
public:
// protected:
    virtual void show() = 0; // Pure Virtual Function
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Implementation of Virtual Function in Derived class\n";
    }
};

int main()
{
    // Base obj; //Compile Time Error
    Base *b;
    Derived d;
    b = &d;
    b->show();

    /*
       if we use protected virtual function only derived class object can access
       Derived d;
       d.show();
    */
}
