#include <gtest/gtest.h>
#include "sym.hpp"


TEST(TestSymmetricDifference, BasicFunction) {

  sym SymTest;
  std::cout << "Symtric Difference Test" << endl;
  // arraysToOneVector([1, 2, 3], [5, 2, 1, 4]);

  
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
