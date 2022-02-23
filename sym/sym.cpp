#include "sym.hpp"

void Sym::print(set<int> const &s)
{
    cout << "sym set: ";
    copy(s.begin(),
            s.end(),
            ostream_iterator<int>(cout, " "));
    cout << endl;
}

// how to convert some input arrays to a vector of vectors that I need for my func sym
vector<vector<int>> Sym::arraysToOneVector(vector<int>& array1,vector<int>& array2)
{
    vector<vector<int>> output;
    output.push_back(array1);
    output.push_back(array2);

    return output;
}


set<int> Sym::symDiff(const vector<vector<int>>& inputArrays){
    // hold all numbers which repeat in the input
    unordered_set<int> gatherAllEquals{};
    set<int> outputArray{};

    if (!inputArrays.empty()){       
        // create a reference for compare with the next sets
        unordered_set<int> referenceSet{};
        
        for (auto array : inputArrays){
            for (auto element : array){
                // try to insert in the existing set
                auto ret = referenceSet.insert(element);
                // if it not allowed, it means it was present in the set
                if(ret.second==false) gatherAllEquals.insert(element);
            }
        }

        for (auto array : inputArrays){
            for (auto element : array){
                // compare again all elements with our found ones, insert the ones which are not found
                if (gatherAllEquals.find(element) != gatherAllEquals.end()) {
                } else {
                    outputArray.insert(element);
                }
            }
        }
    }

    return outputArray;
}
