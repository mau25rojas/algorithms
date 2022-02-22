#include <gtest/gtest.h>
#include "sym.hpp"


TEST(TestSymmetricDifference, BasicFunction) {

  Sym symTest;
  std::cout << "Symtric Difference Test" << endl;

  //   sym([1, 2, 3], [5, 2, 1, 4]) should return [3, 4, 5].
  vector<int> array1{1, 2, 3}; vector<int> array2{5, 2, 1, 4};
  vector<int> expected{3,4,5};

  // vector<vector<int>> input = symTest.arraysToOneVector(array1, array2);
  // vector<int> result = symTest.symdiff(input);

  // EXPECT_EQ(result.size(), expected.size());
  // for (int i = 0; i < result.size(); ++i) {
  //  EXPECT_EQ(result[i],expected[i]) << "Vectors x and y differ at index " << i;
  // }
  
//   sym([1, 2, 3], [5, 2, 1, 4]) should return [3, 4, 5].

// sym([1, 2, 3], [5, 2, 1, 4]) should contain only three elements.

// sym([1, 2, 3, 3], [5, 2, 1, 4]) should return [3, 4, 5].

// sym([1, 2, 3, 3], [5, 2, 1, 4]) should contain only three elements.

// sym([1, 2, 3], [5, 2, 1, 4, 5]) should return [3, 4, 5].

// sym([1, 2, 3], [5, 2, 1, 4, 5]) should contain only three elements.

// sym([1, 2, 5], [2, 3, 5], [3, 4, 5]) should return [1, 4, 5]

// sym([1, 2, 5], [2, 3, 5], [3, 4, 5]) should contain only three elements.

// sym([1, 1, 2, 5], [2, 2, 3, 5], [3, 4, 5, 5]) should return [1, 4, 5].

// sym([1, 1, 2, 5], [2, 2, 3, 5], [3, 4, 5, 5]) should contain only three elements.

// sym([3, 3, 3, 2, 5], [2, 1, 5, 7], [3, 4, 6, 6], [1, 2, 3]) should return [2, 3, 4, 6, 7].

// sym([3, 3, 3, 2, 5], [2, 1, 5, 7], [3, 4, 6, 6], [1, 2, 3]) should contain only five elements.

// sym([3, 3, 3, 2, 5], [2, 1, 5, 7], [3, 4, 6, 6], [1, 2, 3], [5, 3, 9, 8], [1]) should return [1, 2, 4, 5, 6, 7, 8, 9].

// sym([3, 3, 3, 2, 5], [2, 1, 5, 7], [3, 4, 6, 6], [1, 2, 3], [5, 3, 9, 8], [1]) should contain only eight elements.

  
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
