// For the usage of unordered set
#include <unordered_set>

// For input output
#include <iostream>
using namespace std;

int main()
{

    // Hard-coded unordered set
    unordered_set<int> s1 = {1, 4, 8, 3, 2};

    // Inserting elements in the set
    // s1.insert(5);
    // s1.insert(10);
    // s1.insert(4);

    // // Deleting elements from the set
    // s1.erase(8);
    // s1.erase(1);
    // s1.erase(5);

    // // Erasing upto not get 6
    // s1.erase(s1.begin(),s1.find(6));
    // // s1 = {6, 5, 3} 

    // Initializing an iterator for unordered set
    unordered_set<int>::iterator it;

    // Printing each element
    for (it = s1.begin(); it != s1.end(); it++)
        cout << *it << " ";

    cout << endl;
}