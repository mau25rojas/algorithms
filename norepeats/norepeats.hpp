#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <map>

using namespace std;

/*
Return the number of total permutations of the provided string that don't have repeated consecutive letters. 
Assume that all characters in the provided string are each unique.
For example, aab should return 2 because it has 6 total permutations (aab, aab, aba, aba, baa, baa), 
but only 2 of them (aba and aba) don't have the same letter (in this case a) repeating.
*/

class NoRepeats
{   
    private:
        string m_inputString{};
        map<int,char> m_internalDict{};
        vector<int> m_internalPermutationVector{};
        vector<string> m_posiblePermutationsFromInput{};

    public:

    void print(const string& name, const vector<string>& s);
    void print(const string& name, const vector<int>& s);
    void print(const string& name, const map<int,char>& s);
    void print(const string& name, const vector<vector<int>>& s);

    int permAlone();

    // Find permutations of internal vector of int m_internalPermutationVector
    vector<vector<int>> findPossiblePermutations();

    vector<string> extractStringsWithoutRepeatedConsecutives(const vector<string>& inputWithPermutations);

    // add an string as an input to the object. Will be translate to a dict, which is used for the permutation algorithm
    void addInput(const string& input);

    vector<string> translateBackToString(const vector<vector<int>>& input);
};
