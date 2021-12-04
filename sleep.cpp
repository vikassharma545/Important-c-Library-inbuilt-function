#include <bits/stdc++.h>
#include <thread>
#include <chrono>

// or

#include <unistd.h>

using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;
    a += 10;
    cout << "waiting..." << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << a << endl;

    // or we can  use directly sleep with including <unistd.h>
    // but only work in second
    a += 10;
    cout << a << endl;
    a += 10;
    cout << "Waiting..." << endl;
    sleep(4);
    cout << a << endl;
    return 0;
}