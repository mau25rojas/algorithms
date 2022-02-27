#include "norepeats.hpp"

int main(int, char**) {
    std::cout << "No Repeats Please" << endl;

    NoRepeats nrTest{};

    vector<int> permute{1,1,3};

    std::sort (permute.begin(),permute.end());

    vector<int> outputPermutations{};
    do {
        for (int i = 0; i < permute.size(); i++) {
        cout << permute[i] << "  ";
        }
        cout << endl;
    } while ( std::next_permutation(permute.begin(),permute.end()));

}