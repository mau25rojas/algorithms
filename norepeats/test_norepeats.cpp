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


// permAlone("aaa") should return 0.
TEST(TestNoRepeatsPlease_AllEquals0, BasicFunction) {

  NoRepeats nrTest;
  string s{"aaa"};

  nrTest.addInput(s);
  int result = nrTest.permAlone();

  EXPECT_EQ(result, 0);
}

// permAlone("aabb") should return 8.
TEST(TestNoRepeatsPlease_RepeatTwoTwice, BasicFunction) {

  NoRepeats nrTest;
  string s{"aabb"};

  nrTest.addInput(s);
  int result = nrTest.permAlone();

  EXPECT_EQ(result, 8);
}

// permAlone("abcdefa") should return 3600.
TEST(TestNoRepeatsPlease_AllDifferenteButOne, BasicFunction) {

  NoRepeats nrTest;
  string s{"abcdefa"};

  nrTest.addInput(s);
  int result = nrTest.permAlone();

  EXPECT_EQ(result, 3600);
}

// permAlone("abfdefa") should return 2640.
TEST(TestNoRepeatsPlease_AllDifferenteButTwo, BasicFunction) {

  NoRepeats nrTest;
  string s{"abfdefa"};

  nrTest.addInput(s);
  int result = nrTest.permAlone();

  EXPECT_EQ(result, 2640);
}

// permAlone("zzzzzzzz") should return 0.
TEST(TestNoRepeatsPlease_AllEquals, BasicFunction) {

  NoRepeats nrTest;
  string s{"zzzzzzzz"};

  nrTest.addInput(s);
  int result = nrTest.permAlone();

  EXPECT_EQ(result, 0);
}

// permAlone("a") should return 1.
TEST(TestNoRepeatsPlease_OnlyOneChar, BasicFunction) {

  NoRepeats nrTest;
  string s{"a"};

  nrTest.addInput(s);
  int result = nrTest.permAlone();

  EXPECT_EQ(result, 1);
}

// permAlone("aaab") should return 0.
TEST(TestNoRepeatsPlease_ThreeEqualsOneDiff, BasicFunction) {

  NoRepeats nrTest;
  string s{"aaab"};

  nrTest.addInput(s);
  int result = nrTest.permAlone();

  EXPECT_EQ(result, 0);
}

// permAlone("aaabb") should return 12.
TEST(TestNoRepeatsPlease_ThreeEqualsTwoDiff, BasicFunction) {

  NoRepeats nrTest;
  string s{"aaabb"};

  nrTest.addInput(s);
  int result = nrTest.permAlone();

  EXPECT_EQ(result, 12);
}

// int main(int argc, char **argv) {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }
