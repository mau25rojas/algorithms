#include "norepeats.hpp"

int main(int, char**) {
    std::cout << "No Repeats Please" << endl;

    NoRepeats nrTest{};

    string inputString{"aab"};

    auto result = nrTest.permAlone2(inputString);

    cout << "result for " << inputString << ": " << result << endl;
}