#include <iostream>
#include <set>

using namespace std;

int main()
{

    // Set with values
    set<int, greater<int>> s1 = {6, 10, 5, 1};
    // s1 = {10, 6, 5, 1}

    // Inserting elements in the set
    s1.insert(12);
    s1.insert(20);
    s1.insert(3);
    // s1 = {20, 12, 10, 6, 5, 3, 1}

    // Erasing element value = 1
    s1.erase(1);
    // s1 = {20, 12, 10, 6, 5, 3}
    

    // Erasing the first element
    s1.erase(s1.begin());
    // s1 = {12, 10, 6, 5, 3}
    
    // Erasing upto not get 6
    s1.erase(s1.begin(),s1.find(6));
    // s1 = {6, 5, 3}    

    // Iterator for the set
    set<int>::iterator it;

    // Print the elements of the set
    for (it = s1.begin(); it != s1.end(); it++)
        cout << *it << " ";
    cout << endl;
}