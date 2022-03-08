#include "binarysearch.h"

vector<int> BinarySearch::binarySearch(const vector<int>& searchVector, const int target){

    vector<int> output{};

    auto i = 0;
    int currentItem{0};
    auto it_searchBegin = searchVector.begin();
    auto it_searchEnd = searchVector.end();
    auto middle = floor(distance(searchVector.begin(),searchVector.end()) / 2);

    // max number of possible iterations
    auto iterations = floor(searchVector.size()/2);
    while (i <  iterations){
        i++;
        currentItem = *(it_searchBegin+middle);
        output.push_back(currentItem);
        cout << "currentItem: " << currentItem << endl;

        if(currentItem == target){
            // found it!
            cout << "found it!" << endl;
            break;
        } else if (currentItem < target){
            // search the target on the right side
            it_searchBegin = it_searchBegin+middle;
            it_searchEnd = it_searchEnd;
            middle = floor(distance(it_searchBegin, it_searchEnd) / 2);

        } else {
            // search the target on the left side
            it_searchBegin = it_searchBegin;
            it_searchEnd = it_searchEnd - middle - 1;
            middle = floor(distance(it_searchBegin, it_searchEnd) / 2);
        }
    }
    
    return output;
}