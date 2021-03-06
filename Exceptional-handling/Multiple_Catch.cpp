#include <iostream>
using namespace std;

int main()
{
    int a;

    try
    {
        cin >> a;

        if (a < 0)
            throw "less then zero error";
        if (a > 0)
            throw a;

        throw exception();
    }
    catch (const char *e) // catch exception which return char stream
    {
        cout << "Char : " << e << endl;
    }
    catch (int e) // catch exception which return integer
    {
        cout << "int : " << e << endl;
    }
    catch (...) // catch all exception
    {
        cout << "Default error" << endl;
    }
    // compiler show error to put catch all block before any other catch. 
    // The catch(...) must be the last catch block.
    return 0;
}