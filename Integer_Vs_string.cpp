#include <iostream>
using namespace std;

int main()
{
    // Convert numbers to string
    int i = 10;
    float f = 34.6;
    double d = 5.67644;

    string int_S = to_string(i);
    string float_S = to_string(f);
    string double_S = to_string(d);

    cout << i << " " << f << " " << d << endl;
    cout << int_S << " " << float_S << " " << double_S << endl;


    // convert string into other data type (int,float,double) 
    int a = stoi(int_S);
    float b = stof(float_S);
    double c = stod(double_S);

    cout << a << " " << b << " " << c << endl;

    
    return 0;
}