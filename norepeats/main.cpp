#include "norepeats.hpp"

int main(int, char**) {
    std::cout << "No Repeats Please" << endl;

    NoRepeats nrTest{};

    string mystring{"abc"};

    std::sort (mystring.begin(),mystring.end());

    std::cout << "The 3! possible permutations with 3 elements:\n";
    do {
        std::cout << mystring[0] << ' ' << mystring[1] << ' ' << mystring[2] << '\n';
    } while ( std::next_permutation(mystring.begin(),mystring.end()));

    std::cout << "After loop: " << mystring[0] << ' ' << mystring[1] << ' ' << mystring[2] << '\n';

}