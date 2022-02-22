#include "sym.hpp"

int main(int, char**) {
    std::cout << "Symtric Difference" << endl;

    Sym sym{};

    // Symtric Difference
    vector<int> array1{1,2,3};
    vector<int> array2{5,2,1,4};

    vector<vector<int>> inFunc = sym.arraysToOneVector(array1, array2);
    
    vector<int> outputSet;
    outputSet = sym.symdiff(inFunc);

    sym.print(outputSet);
}