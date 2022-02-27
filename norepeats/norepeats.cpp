#include "norepeats.hpp"

void NoRepeats::print(set<int> const &s)
{
    cout << "sym set: ";
    copy(s.begin(),
            s.end(),
            ostream_iterator<int>(cout, " "));
    cout << endl;
}

void NoRepeats::addInputArray(vector<int>& array)
{
    set<int> tempSet(array.begin(), array.end());
    m_inputArrays.push_back(tempSet);
}

int NoRepeats::permAlone(string input){
    // set<int> outputSymDiff{};

    if (!m_inputArrays.empty()){       
        for (auto it=m_inputArrays.begin();it!=m_inputArrays.end();++it){
            auto temp = symDiffTwoSets(m_intermediateSymDiff, *it);
            m_intermediateSymDiff.clear();
            m_intermediateSymDiff.insert(temp.begin(),temp.end());
        }

    } else {
        cout << "error: no input to process" << endl;
    }

    return m_intermediateSymDiff;
}

set<int> NoRepeats::symDiffTwoSets(set<int>& set1, set<int>& set2){

    set<int> commonNumbers{}; // hold all numbers which repeat in the input
    set<int> outputArray{};
    set<int> referenceSet(set1);

    for (auto element : set2){
        // try to insert in the existing set
        auto ret = referenceSet.insert(element);
        // if it not allowed, it means it was present in the set
        if(ret.second==false) commonNumbers.insert(element);
    }

    auto addIfNotFound = [&commonNumbers, &outputArray](set<int> set){
        for (auto element : set){
            // compare again all elements with our found ones, insert the ones which were not found
            if (commonNumbers.find(element) != commonNumbers.end()) {
            } else {
                outputArray.insert(element);
            }
        }
    };

    addIfNotFound(set1);
    addIfNotFound(set2);

    return outputArray;
}