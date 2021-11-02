/*

Properties of a Set in C++

1. Uniqueness – All elements inside a C++ Set are unique.
2. Sorted – The elements inside a Set are always in a sorted manner.
3. Immutable – Any element inside the Set cannot be changed. It can only be inserted or deleted.
4. Unindexed – The STL Set does not support indexing.
5. Internal Implementation – The Sets in STL are internally implemented by BSTs (Binary Search Trees).

*/

#include <iostream>
#include <set>

using namespace std;

int main()
{

    // Empty Set - Increasing Order (Default)
    set<int> s1;
    // s1 = {}

    // Empty Set - Decreasing Order
    set<int, greater<int>> s2;
    // s2 = {}

    // Set with values
    set<int, greater<int>> s3 = {6, 10, 5, 1};
    // s3 = {10, 6, 5, 1}

    // Initialize Set using other set
    set<int, greater<int>> s4(s3);
    // s4 = {10, 6, 5, 1}

    // Initializing a set from array
    int arr[] = {10, 4, 5, 61};
    set<int> s5(arr, arr + 2); // Only two elements
    // s5 = {4, 10}

    return 1;
}