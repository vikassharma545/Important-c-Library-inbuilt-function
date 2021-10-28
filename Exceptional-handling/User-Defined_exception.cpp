// using standard exceptions

// we need to put catch block of derived class before the base class. Otherwise, the catch block
// of derived class will never be reached.
#include <iostream>
#include <exception>
using namespace std;

class myexception : public exception
{
public:
    const char *what()
    {
        return "Divided by zero error";
    }
    
} myex;

int main()
{
    int a = 20, b = 0;

    int c;

    try
    {
        if (b == 0)
        {
            throw myex;
        }

        c = a / b;
    }
    catch (myexception e)
    {
        cerr << e.what() << '\n';
    }
}