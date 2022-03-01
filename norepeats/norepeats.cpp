#include "norepeats.hpp"
#include <regex>

void NoRepeats::print(const string& name, const vector<string>& s)
{
    if(s.size() > 12){
        cout << "too long, not printing" << endl;
    } else {
        cout << name << ": ";
        copy(s.begin(),
                s.end(),
                ostream_iterator<string>(cout, " "));
        cout << endl;
    }
}

void NoRepeats::print(const string& name, const vector<int>& s)
{
    if(s.size() > 12){
        cout << "too long, not printing" << endl;
    } else {
        cout << name << ": ";
        copy(s.begin(),
                s.end(),
                ostream_iterator<int>(cout, " "));
        cout << endl;
    }
}

void NoRepeats::print(const string& name, const vector<vector<int>>& s)
{
    cout << name << ": " << endl;

    for(const auto& row : s)
    {
        for(const auto& element : row){
            std::cout << element << " ";
        }
        cout << endl;
    }
}

void NoRepeats::print(const string& name, const map<int,char>& s)
{
    cout << name << ": " << endl;

    for(const auto& elem : s)
    {
        std::cout << elem.first << ": " << elem.second << endl;
    }
}


void NoRepeats::addInput(const string& s)
{
    m_inputString = s;
    m_internalPermutationVector.clear();
    // create dict with elements
    for(int i=0; i<m_inputString.size(); i++){
        m_internalDict.insert(std::pair<int,char>(i, m_inputString[i]));
        m_internalPermutationVector.push_back(i);
    }
    // print("dict", m_internalDict);
}

vector<string> NoRepeats::translateBackToString(const vector<vector<int>>& input)
{
    m_possiblePermutationsFromInput.clear();
    m_possiblePermutationsFromInput.resize(input.size());

    int i{0};
    for(const auto& element : input){
        for(const auto& number : element){
            auto it = m_internalDict.find(number);
            if (it != m_internalDict.end()){
                m_possiblePermutationsFromInput[i].push_back(it->second);
            } 
        }
        i++;
    }
    return m_possiblePermutationsFromInput;
}

int NoRepeats::permAlone(){

    auto possiblePermutations = findPossiblePermutations();

    auto translatedPermutations = translateBackToString(possiblePermutations);

    auto permutationsWithoutRepeatedConsecutive = extractStringsWithoutRepeatedConsecutive(translatedPermutations);

    print("permutationsWithoutRepeatedConsecutive",permutationsWithoutRepeatedConsecutive);

    return permutationsWithoutRepeatedConsecutive.size();
}

vector<vector<int>> NoRepeats::findPossiblePermutations(){

    if(m_internalPermutationVector.empty()) {
        cout << "No input added, run NoRepeats::addInput" << endl;
        return(vector<vector<int>>{});

    } else {
        // we need to sort first, because it searches the next possible
        std::sort (m_internalPermutationVector.begin(),m_internalPermutationVector.end());

        vector<vector<int>> outputPermutations{};
        do {
            outputPermutations.push_back(m_internalPermutationVector);
        } while ( std::next_permutation(m_internalPermutationVector.begin(),m_internalPermutationVector.end()));

        return outputPermutations;
    }
}

vector<string> NoRepeats::extractStringsWithoutRepeatedConsecutive(const vector<string>& inputWithPermutations){
    
    vector<string> outputWithoutRepeatedConsecutive{};
    
    for(const auto& one_string : inputWithPermutations){
        auto it = one_string.begin();
        // using default comparison:
        it = std::adjacent_find (one_string.begin(), one_string.end());
        if (it==one_string.end()){ // if we don't found some adjacent letters, add it to the output
            outputWithoutRepeatedConsecutive.push_back(one_string);
        }
    }

    return outputWithoutRepeatedConsecutive;
}

int NoRepeats::permAlone2(const string& input) {
  // Create a regex to match repeated consecutive characters.
  auto regex_rule = regex("/(.)\1+/");

  // Return 0 if str contains same character.
  if (regex_match(input, regex_rule) != false /*&& str.match(regex)[0] === str*/) return 0;

  string arr = input;
  vector<string> permutations{};

  // Function to swap variables' content.
  auto swap = [&arr](int index1, int index2) {
    auto tmp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = tmp;
  };

  // Generate arrays of permutations using the algorithm.
  std::function<void(int)> generate;
  generate = [&](int j) {
    if (j == 1) {
      // Make sure to join the characters as we create  the permutation arrays
      permutations.push_back(arr);
    } else {
      for (auto i = 0; i != j; ++i) {
        generate(j - 1);
        swap(j % 2 ? 0 : i, j - 1);
      }
    }
  };

  generate(arr.size());

  // Filter the array of repeated permutations.
  auto filtered = [&](string s) {
    return !regex_match(s, regex_rule);
  };

  std::remove_if(permutations.begin(), permutations.end(), filtered);

  print("permAlone2 permutation+filtering output", permutations);

  // Return how many have no repetitions.
  return permutations.size();
}
