#include <gtest/gtest.h>
#include "binarysearch.h"

// test translation working
// TEST(TestNoRepeatsPlease, Translation) {

//     NoRepeats nrTest{};

//     string inputString{"abc"};

//     nrTest.addInput(inputString);
//     /* internal dict will be
//     dict: 
//     0: a
//     1: b
//     2: c
//     */

//     vector<int> v1{1,2,0}; vector<int> v2{0,2,0}; vector<int> v3{1,1,1};
//     vector<vector<int>> exampleVec{};
//     exampleVec.push_back(v1);
//     exampleVec.push_back(v2);
//     exampleVec.push_back(v3);

//     vector<string> expected{"bca","aca", "bbb"};

//     auto result = nrTest.translateBackToString(exampleVec);

//   EXPECT_EQ(result.size(), 3);
//   EXPECT_EQ(result, expected);
// }

// binarySearch should be a function.

// binarySearch(testArray, 0) should return [13, 5, 2, 0].

// binarySearch(testArray, 1) should return [13, 5, 2, 0, 1].

// binarySearch(testArray, 2) should return [13, 5, 2].

// binarySearch(testArray, 6) should return the string Value Not Found.

// binarySearch(testArray, 11) should return [13, 5, 10, 11].

// binarySearch(testArray, 13) should return [13].

// binarySearch(testArray, 70) should return [13, 19, 22, 49, 70].


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
