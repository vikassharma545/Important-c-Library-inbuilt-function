/*

Properties of Unordered Sets

1. Uniqueness – Every element inside an unordered set is unique.
2. Unindexed – The elements in an unordered set can not be indexed by position, like in 
   vectors and maps.
3. Immutable – We cannot modify or change the elements in unordered sets. A set only 
   supports the addition and deletion of its elements.
4. Internal Implementation – We use hash tables to implement unordered sets

*/

// For the usage of unordered set
#include<unordered_set>
 
// For input output
#include<iostream>
using namespace std;
 
 
int main(){
 
    // Method - 1
    // An empty unordered set of integers
    unordered_set<int> s1;
 
    // Method - 2   
    // Hard-coded unordered set
    unordered_set<int> s2 = {1, 4, 8, 3, 2};
 
    // Method - 3
    // Initializing an unordered set using another unordered set
    unordered_set<int> s4(s2);
    // s4 = {1, 4, 8, 3, 2}
 
    // Method - 4
    // Initializing an unordered set using arrays
    int arr[] = {6, 2, 4, 5, 1};
    unordered_set<int> s5(arr, arr+3);
    // s4 = {4, 2, 6}
 
}