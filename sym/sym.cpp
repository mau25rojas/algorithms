#include "sym.hpp"

void Sym::print(set<int> const &s)
{
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
    set<int> outputArray{};

    if (!inputArrays.empty()){
        // include first array als reference
        unordered_set<int> referenceSet(std::begin(inputArrays[0]), std::end(inputArrays[0]));
        
        for (int i=1; i<inputArrays.size(); i++){
            for (auto element : inputArrays[i]){
                // try to insert in the existing set
                auto ret = referenceSet.insert(element);

                // if it not allowed, it means it is part of the sym difference set
                if(ret.second==false) outputArray.insert(element);

            }
        }
    }
    return outputArray;
}
