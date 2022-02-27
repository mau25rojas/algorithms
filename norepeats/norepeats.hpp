#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

// Class for calculating the symetric difference between arrays
class NoRepeats
{   
    public:

    void print(const vector<string>& s);

    int permAlone(const string& input);

    vector<string> findPossiblePermutations(string& inputToPermutate);

    vector<string> extractStringsWithoutRepeatedConsecutives(const vector<string>& inputWithPermutations);
};
