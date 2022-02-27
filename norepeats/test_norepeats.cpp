#include <gtest/gtest.h>
#include "norepeats.hpp"

// permAlone("aab") should return a number.
// permAlone("aab") should return 2.
TEST(TestNoRepeatsPlease, BasicFunction) {

  // NoRepeats nrTest;
  string input{"aab"};

  // EXPECT_EQ(result.size(), 3);
  // EXPECT_EQ(typeid(int), typeid(std::result_of<permAlone()>::type));

    // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}


// int main(int argc, char **argv) {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }
