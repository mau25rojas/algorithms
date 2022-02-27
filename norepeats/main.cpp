#include "norepeats.hpp"

int main(int, char**) {
    std::cout << "No Repeats Please" << endl;

    NoRepeats nrTest{};

    string mystring{"aab"};

    nrTest.permAlone(mystring);

}