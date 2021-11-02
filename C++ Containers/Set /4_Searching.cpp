#include <iostream>
#include <set>

using namespace std;

int main()
{

    // Set with values
    set<int, greater<int>> s1 = {6, 10, 5, 1};
    // s1 = {10, 6, 5, 1}

    // The value to be searched
    int val = 5;

    // Check if the iterator returned is not the ending of set
    if (s1.find(val) != s1.end())
        cout << "The set contains " << val << endl;
    else
        cout << "The set does not contains " << val << endl;

    // The value to be searched
    val = 11;

    // Check if the iterator returned is not the ending of set
    if (s1.find(val) != s1.end())
        cout << "The set contains " << val << endl;
    else
        cout << "The set does not contains " << val << endl;
}