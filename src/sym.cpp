#include "sym.hpp"

void sym::print(set<int> const &s)
{
    copy(s.begin(),
            s.end(),
            ostream_iterator<int>(cout, " "));
    cout << endl;
}

// how to convert some input arrays to a vector of vectors that I need for my func sym
vector<vector<int>> sym::arraysToOneVector(vector<int> array1) 
                                        // vector<int> array2={}, 
                                        // vector<int> array3={},
                                        // vector<int> array4={},
                                        // vector<int> array5={},
                                        // vector<int> array6={},
                                        // vector<int> array7={},
                                        // vector<int> array8={})
{
    vector<vector<int>> output;
    output.push_back(array1);
    // output.push_back(array2);
    // output.push_back(array3);
    // output.push_back(array4);
    // output.push_back(array5);
    // output.push_back(array6);
    // output.push_back(array7);
    // output.push_back(array8);

    return output;
}


set<int> sym::symdiff(const vector<vector<int>>& inputArrays){
    set<int> outputArray{};
    for (auto& array : inputArrays){
        for (auto element : array){
            outputArray.insert(element);
        }
    }

    return outputArray;
}

// int main(int, char**) {
//     std::cout << "Symtric Difference" << endl;

//     // Symtric Difference
//     vector<int> array1{1,2,3};
//     vector<int> array2{5,2,1,4};

//     vector<vector<int>> inFunc = arraysToOneVector(array1, array2);
    
//     set<int> outputSet;
//     outputSet = sym(inFunc);

//     print(outputSet);
// }