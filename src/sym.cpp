#include "sym.hpp"

void Sym::print(vector<int> const &s)
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


vector<int> Sym::symdiff(const vector<vector<int>>& inputArrays){
    vector<int> outputArray{};
    // for (auto& array : inputArrays){
    //     for (auto element : array){
    //         outputArray.insert(element);
    //     }
    // }

    return outputArray;
}
