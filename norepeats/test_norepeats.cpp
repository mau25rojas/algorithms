#include <gtest/gtest.h>
#include "norepeats.hpp"

// permAlone("aab") should return a number.
// permAlone("aab") should return 2.
TEST(TestNoRepeatsPlease, BasicFunction) {

  // NoRepeats nrTest;

  // vector<int> array1{1, 2, 3}; vector<int> array2{5, 2, 1, 4};
  // set<int> expected{3,4,5};

  // symTest.addInputArray(array1);
  // symTest.addInputArray(array2);
  // set<int> result = symTest.symDiff();
  // symTest.print(result);

  // EXPECT_EQ(result.size(), 3);
  // EXPECT_EQ(typeid(int), typeid(std::result_of<foo<int>() >::type));

    // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
