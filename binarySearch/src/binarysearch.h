#pragma once

#include <iostream>
#include <algorithm>
#include <math.h>
#include <iterator>
#include <vector>
#include <map>

using namespace std;

/*
Return the number of total permutations of the provided string that don't have repeated consecutive letters. 
Binary search is an O(log(n)) efficiency algorithm for searching a sorted array to find an element. It operates using the following steps:

Find the middle value of a sorted array. If value == target return (found it!).
If middle value < target, search right half of array in next compare.
If middle value > target, search left half of array in next compare.

For this challenge, we want you to show your work - how you got to the target value... the path you took!

For example, binarySearch([1,2,3,4,5,6,7], 5) would return [4,6,5].

For this challenge, when halving, you MUST use Math.floor() when doing division: Math.floor(x/2). This will give a consistent, testable path.
*/

class BinarySearch
{   
    private:
        vector<int> m_smallerSearchVector{};
    
    public:
        vector<int> binarySearch(const vector<int>& searchVector, const int target);

};
