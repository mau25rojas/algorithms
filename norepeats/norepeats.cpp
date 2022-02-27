#include "norepeats.hpp"

void NoRepeats::print(const string& name, const vector<string>& s)
{
    cout << name << ": ";
    copy(s.begin(),
            s.end(),
            ostream_iterator<string>(cout, " "));
    cout << endl;
}


int NoRepeats::permAlone(const string& input){

    string copiedInput(input);
    vector<string> permutations{};
    vector<string> permutationsWithoutRepeatedConsecutives{};

    permutations = findPossiblePermutations(copiedInput);
    print("permutations", permutations);
    permutationsWithoutRepeatedConsecutives = extractStringsWithoutRepeatedConsecutives(permutations);
    print("permutationsWithoutRepeatedConsecutives",permutationsWithoutRepeatedConsecutives);

    return permutationsWithoutRepeatedConsecutives.size();
}

vector<string> NoRepeats::findPossiblePermutations(string& inputToPermutate){

    // we need to sort first, because it searches the next possible
    std::sort (inputToPermutate.begin(),inputToPermutate.end());

    vector<string> outputPermutations{};
    do {
        outputPermutations.push_back(inputToPermutate);
    } while ( std::next_permutation(inputToPermutate.begin(),inputToPermutate.end()));

    return outputPermutations;
}

vector<string> NoRepeats::extractStringsWithoutRepeatedConsecutives(const vector<string>& inputWithPermutations){
    
    vector<string> outputWithoutRepeatedConsecutives{};
    
    for(const auto& one_string : inputWithPermutations){
        auto it = one_string.begin();
        // using default comparison:
        it = std::adjacent_find (one_string.begin(), one_string.end());
        if (it==one_string.end()){ // if we don't found some adjacent letters, add it to the output
            outputWithoutRepeatedConsecutives.push_back(one_string);
        }
    }

    return outputWithoutRepeatedConsecutives;
}
