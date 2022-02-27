#include <gtest/gtest.h>
#include "norepeats.hpp"

// test translation working
TEST(TestNoRepeatsPlease, Translation) {

    NoRepeats nrTest{};

    string inputString{"abc"};

    nrTest.addInput(inputString);
    /* internal dict will be
    dict: 
    0: a
    1: b
    2: c
    */

    vector<int> v1{1,2,0}; vector<int> v2{0,2,0}; vector<int> v3{1,1,1};
    vector<vector<int>> exampleVec{};
    exampleVec.push_back(v1);
    exampleVec.push_back(v2);
    exampleVec.push_back(v3);

    vector<string> expected{"bca","aca", "bbb"};

    auto result = nrTest.translateBackToString(exampleVec);

  EXPECT_EQ(result.size(), 3);
  EXPECT_EQ(result, expected);
}

// permAlone("aab") should return a number.
// permAlone("aab") should return 2.
TEST(TestNoRepeatsPlease, BasicFunction) {

  NoRepeats nrTest;
  string s{"aab"};

  nrTest.addInput(s);
  int result = nrTest.permAlone();

  EXPECT_EQ(typeid(int), typeid(result));
  EXPECT_EQ(result, 2);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
