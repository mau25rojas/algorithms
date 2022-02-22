#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>

using namespace std;

struct Sym
{
    void print(vector<int> const &s);

    // how to convert some input arrays to a vector of vectors that I need for my func sym
    vector<vector<int>> arraysToOneVector(vector<int>& array1, vector<int>& array2);

    vector<int> symdiff(const vector<vector<int>>& inputArrays);
};
