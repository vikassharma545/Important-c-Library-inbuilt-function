// A virtual function is a member function which is declared within a base class and is
// re-defined(Overridden) by a derived class.

// When you refer to a derived class object  using a pointer or a reference to the base
// class, you can call a virtual function for that object and execute the derived class’s
// version of the function.

// They are mainly used to achieve Runtime polymorphism.

// working of Virtual Functions
#include <iostream>
using namespace std;

class base
{
public:
    void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    virtual void fun_3() { cout << "base-3\n"; }
    virtual void fun_4() { cout << "base-4\n"; }
};

class derived : public base
{
public:
    void fun_1() { cout << "derived-1\n"; }
    void fun_2() { cout << "derived-2\n"; }
    void fun_4(int x) { cout << "derived-4\n"; }
};

int main()
{
    base *p;    // pointer of base class
    derived obj1;   // object of derived class

    p = &obj1;  // assign pointer of base class to object of derived class

    // Early binding because fun1() is non-virtual in base class (resolve at Compile time)
    p->fun_1();

    // Late binding (RTP)   (resolve at runtime)
    p->fun_2();

    // Late binding (RTP)   (resolve at runtime)
    p->fun_3();

    // Late binding (RTP)   (resolve at runtime)
    p->fun_4();

    // Early binding but this function call is
    // illegal(produces error) because pointer
    // is of base type and function is of
    // derived class
    // p->fun_4(5);
}