#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> vect; // 2D vector

    vect[1].push_back(5); // --> access second row of vector 
    // vect[1][2]   ---> access row and column element
    return 0;
}