#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>

using namespace std;

// Class for calculating the symetric difference between arrays
class NoRepeats
{   
    vector<set<int>> m_inputArrays{};
    set<int> m_intermediateSymDiff{};

    public:

    void print(set<int> const &s);

    void addInputArray(vector<int>& array);

    set<int> permAlone();

    set<int> symDiffTwoSets(set<int>& set1, set<int>& set2);
};
