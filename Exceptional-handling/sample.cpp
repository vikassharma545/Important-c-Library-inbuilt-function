// In traditional way error handle by if else statement which make code less redable and maintainable
// with try-catch block error handling seperate from normal flow

// all exception inside jpg is handled by base class object 
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0;

    int c;

    try
    {
        if (b==0)
            // throw "Divided by zero error";
            throw invalid_argument("Divided by Zero Error");
        
        c = a / b;
    }
    // catch (const char *e)
    catch(exception &e)  // base class object
    {
        // cout << e << '\n';
        cout << e.what() << '\n';
    }

    return 0;
}