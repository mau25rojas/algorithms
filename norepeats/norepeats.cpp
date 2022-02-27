#include "norepeats.hpp"

void NoRepeats::print(const string& name, const vector<string>& s)
{
    cout << name << ": ";
    copy(s.begin(),
            s.end(),
            ostream_iterator<string>(cout, " "));
    cout << endl;
}

void NoRepeats::print(const string& name, const vector<int>& s)
{
    cout << name << ": ";
    copy(s.begin(),
            s.end(),
            ostream_iterator<int>(cout, " "));
    cout << endl;
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
    m_posiblePermutationsFromInput.clear();
    m_posiblePermutationsFromInput.resize(input.size());

    int i{0};
    for(const auto& element : input){
        for(const auto& number : element){
            auto it = m_internalDict.find(number);
            if (it != m_internalDict.end()){
                m_posiblePermutationsFromInput[i].push_back(it->second);
            } 
        }
        i++;
    }
    return m_posiblePermutationsFromInput;
}

int NoRepeats::permAlone(){

    auto posiblePermutations = findPossiblePermutations();

    auto translatedPermutations = translateBackToString(posiblePermutations);

    auto permutationsWithoutRepeatedConsecutives = extractStringsWithoutRepeatedConsecutives(translatedPermutations);

    print("permutationsWithoutRepeatedConsecutives",permutationsWithoutRepeatedConsecutives);

    return permutationsWithoutRepeatedConsecutives.size();
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
