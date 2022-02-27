#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

/*
Return the number of total permutations of the provided string that don't have repeated consecutive letters. Assume that all characters in the provided string are each unique.

For example, aab should return 2 because it has 6 total permutations (aab, aab, aba, aba, baa, baa), but only 2 of them (aba and aba) don't have the same letter (in this case a) repeating.
*/

class NoRepeats
{   
    public:

    void print(const string& name, const vector<string>& s);

    int permAlone(const string& input);

    vector<string> findPossiblePermutations(string& inputToPermutate);

    vector<string> extractStringsWithoutRepeatedConsecutives(const vector<string>& inputWithPermutations);
};
