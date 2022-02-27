#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>
#include <unordered_set>

using namespace std;

// Class for calculating the symetric difference between arrays
// There is already a sym difference alg...
// it=std::set_symmetric_difference (first, first+5, second, second+5, v.begin());
// ups...
class Sym
{   
    vector<set<int>> m_inputArrays{};
    set<int> m_intermediateSymDiff{};

    public:

    void print(set<int> const &s);

    // how to convert some input arrays to a vector of vectors that I need for my func sym
    vector<vector<int>> arraysToOneVector(vector<int>& array1, vector<int>& array2);

    void addInputArray(vector<int>& array);

    set<int> symDiff();

    set<int> symDiffTwoSets(set<int>& set1, set<int>& set2);
};
