#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)

// The typedef is used to give data type a new name only
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define PI 3.14
#define Area(a) a *a

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a = 5;
    cout << Area(a++) << endl; // here argument pass is a++ not a , so Area = a++ * a++
    cout << a << endl;

    cout << PI << endl;
#undef PI
    // cout << PI << endl;  -----> giving error because we undefine PI


// #error // ----> show error in program


#define trigger // you can use it to execute different code on different machine (linux or window)
// #undef trigger

#ifdef trigger // if trigger is define execute it otherwise leave code
    cout << "Trigger is defined " << endl;
#endif

    return 0;
}