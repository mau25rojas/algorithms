#include "sym.hpp"

int main(int, char**) {
    std::cout << "Symtric Difference" << endl;

    sym Sym{};

    // Symtric Difference
    vector<int> array1{1,2,3};
    vector<int> array2{5,2,1,4};

    vector<vector<int>> inFunc = Sym.arraysToOneVector(array1);
    
    set<int> outputSet;
    outputSet = Sym.symdiff(inFunc);

    Sym.print(outputSet);
}