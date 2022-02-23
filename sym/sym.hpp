#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>
#include <unordered_set>

using namespace std;

// Class for calculating the symetric difference between arrays
class Sym
{   
    public:

    void print(set<int> const &s);

    // how to convert some input arrays to a vector of vectors that I need for my func sym
    vector<vector<int>> arraysToOneVector(vector<int>& array1, vector<int>& array2);

    set<int> symDiff(const vector<vector<int>>& inputArrays);
};
