#include <iostream>
using namespace std;

int main()
{
    int ch;
    int mem;
    cout << "1.Print Kernel version" << endl;
    cout << "2.Print CPU info" << endl;
    cout << "3.Print Memory info" << endl;
    cout << "Enter your choice : " << endl;
    cin >> ch;

    if (ch == 1)
        system("echo -n 'Kernel Version : ' ; cat /proc/version|awk '{print $1,$2, $3}'");
    else if (ch == 2)
        system("echo 'CPU Type :' ; cat /proc/cpuinfo|awk 'NR==3 || NR==8 || NR==13 || NR==5'"); // CPU family,MHz,Cores
    else if (ch == 3)
        system("echo 'Configured Memory' ; cat /proc/meminfo|awk 'NR==1, NR==3'");
    else
        cout << "Invalid Option !!!" << endl;

    return 0;
}