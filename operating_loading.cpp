#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

/*
    returnType operator symbol (arguments) {
           ... .. ...
       } 

    symbol is the operator -> +, <, -, ++, etc.
*/

//    ------------------------------------------------------->  return complex object 
//    |      
//    |             ----------------------------------------->  operator sign  --> +
//    |             |
//    |             |           -----------------------------> object after sign i.e --> c2
//    |             |           |
    Complex operator+(Complex const &obj)   // class default real and imag are fullfill role of c1
    {                                       // if we create this fuction outside class then we need 
        Complex res;                        // one more argument for c1
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void print() { cout << real << " + i" << imag << endl; }
};



int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
}