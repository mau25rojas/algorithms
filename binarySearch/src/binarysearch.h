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

class BinarySearch
{   
    private:
        string m_inputString{};
        map<int,char> m_internalDict{};
        vector<int> m_internalPermutationVector{};
        vector<string> m_possiblePermutationsFromInput{};

};
