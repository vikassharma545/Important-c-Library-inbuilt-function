
/**
 * flush” function is used to ensure that the output gets displayed according to our requirements
 *
 *  noted:- Reading cin flushes cout so we don’t need an explicit flush to do this.
 */
#include <iostream>
#include <thread>
#include <chrono>
#include <unistd.h>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        // cout << i << " ";          // this give output at once
        cout << i << " " << flush; // this give output at one by one

        sleep(1);
    }
    return 0;
}