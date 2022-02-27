#include <gtest/gtest.h>
#include "norepeats.hpp"

// permAlone("aab") should return a number.
// permAlone("aab") should return 2.
TEST(TestNoRepeatsPlease, BasicFunction) {

  NoRepeats nrTest;
  string input{"aab"};

  int result = nrTest.permAlone(input);

  EXPECT_EQ(typeid(int), typeid(result));
  EXPECT_EQ(result, 2);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
