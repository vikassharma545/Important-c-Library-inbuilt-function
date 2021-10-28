// When an exception is thrown, all objects created inside the enclosing try block are
// destructed before the control is transferred to catch block.
#include <iostream>
using namespace std;

class Test
{
    static int count;
    int id;

public:
    Test()
    {
        count++;
        id = count;
        cout << "Constructing object number " << id << endl;
        if (id == 4)
            throw 4;
    }
    ~Test() { cout << "Destructing object number " << id << endl; }
};

int Test::count = 0;

int main()
{
    try
    {
        Test array[5];
    }
    catch (int i)
    {
        cout << "Caught " << i << endl;
    }
}

// The destructors are called in reverse order of constructors. Also, after the try block, 
// the destructors are called only for completely constructed objects.