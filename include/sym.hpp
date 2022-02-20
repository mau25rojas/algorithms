#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>

using namespace std;

struct sym
{
    void print(set<int> const &s);

    // how to convert some input arrays to a vector of vectors that I need for my func sym
    vector<vector<int>> arraysToOneVector(vector<int> array1);
                                            // vector<int> array2={}, 
                                            // vector<int> array3={},
                                            // vector<int> array4={},
                                            // vector<int> array5={},
                                            // vector<int> array6={},
                                            // vector<int> array7={},
                                            // vector<int> array8={});


    set<int> symdiff(const vector<vector<int>>& inputArrays);
};
