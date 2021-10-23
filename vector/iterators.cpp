/*
***Iterators*** 
An iterator is an object (like a pointer) that points to an element inside the container. 

1. begin() –    Returns an iterator pointing to the first element in the vector

2. end() –      Returns an iterator pointing to the theoretical element that follows the last
                element in the vector

3. rbegin() –   Returns a reverse iterator pointing to the last element in the vector
                (reverse beginning). It moves from last to first element

4. rend() –     Returns a reverse iterator pointing to the theoretical element preceding
                the first element in the vector (considered as reverse end)

5. cbegin() –   Returns a constant iterator pointing to the first element in the vector.

  
6. cend() –     Returns a constant iterator pointing to the theoretical element that follows
                the last element in the vector.

7. crbegin() –  Returns a constant reverse iterator pointing to the last element in the vector
                (reverse beginning). It moves from last to first element

8. crend() –    Returns a constant reverse iterator pointing to the theoretical element preceding
                the first element in the vector (considered as reverse end)

*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";

    return 0;
}