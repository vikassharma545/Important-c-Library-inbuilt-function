#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // take parametre in float or int
    // calculate return value is in float

    double d = 10;
    cout << "The logarithm value(base-e) of " << d<< " is " << log(d) << endl;
    cout << "The logarithm value(base-2) of " << d<< " is " << log2(d) << endl;
    cout << "The logarithm value(base-10) of " << d<< " is " << log10(d) << endl;
    cout << "The logarithm value(base-e) of 1 + " << d<< " is " << log1p(d) << endl;


    d = 3;
    cout << "The exponential value(base-e) of " << d<< " is " << exp(d) << endl;
    cout << "The exponential value(base-2) of " << d<< " is " << exp2(d) << endl;
    cout << "The exponential value(base-10) of " << d<< " is " << exp10(d) << endl;


    return 0;
}