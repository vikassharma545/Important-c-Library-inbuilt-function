#include <unordered_set>

// For input output
#include <iostream>
using namespace std;

int main()
{

    // Hard-coded unordered set
    unordered_set<int> s1 = {1, 4, 8, 3, 2};

    int value = 8;

    // Searching 'value' in the unordered set
    if (s1.find(value) != s1.end())
        cout << value << " is present in the set" << endl;
    else
        cout << value << " is not present in the set" << endl;

    value = 7;

    // Searching 'value' in the unordered set
    if (s1.find(value) != s1.end())
        cout << value << " is present in the set" << endl;
    else
        cout << value << " is not present in the set" << endl;
}