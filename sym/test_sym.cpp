#include <gtest/gtest.h>
#include "sym.hpp"


  //   sym([1, 2, 3], [5, 2, 1, 4]) should return [3, 4, 5]
  // sym([1, 2, 3], [5, 2, 1, 4]) should contain only three elements
TEST(TestSymmetricDifference, BasicFunction) {

  Sym symTest;

  vector<int> array1{1, 2, 3}; vector<int> array2{5, 2, 1, 4};
  set<int> expected{3,4,5};

  symTest.addInputArray(array1);
  symTest.addInputArray(array2);
  set<int> result = symTest.symDiff();
  symTest.print(result);

  EXPECT_EQ(result.size(), 3);
  EXPECT_EQ(result, expected);
}

// sym([1, 2, 3, 3], [5, 2, 1, 4]) should return [3, 4, 5].
// sym([1, 2, 3, 3], [5, 2, 1, 4]) should contain only three elements.
TEST(TestSymmetricDifference1, BasicFunction) {

  Sym symTest;

  vector<int> array1{1, 2, 3, 3}; vector<int> array2{5, 2, 1, 4};
  set<int> expected{3,4,5};

  symTest.addInputArray(array1);
  symTest.addInputArray(array2);
  set<int> result = symTest.symDiff();
  symTest.print(result);

  EXPECT_EQ(result.size(), 3);
  EXPECT_EQ(result, expected);
}
  
// sym([1, 2, 3], [5, 2, 1, 4, 5]) should return [3, 4, 5].
// sym([1, 2, 3], [5, 2, 1, 4, 5]) should contain only three elements.
TEST(TestSymmetricDifference2, BasicFunction) {

  Sym symTest;

  vector<int> array1{1, 2, 3}; vector<int> array2{5, 2, 1, 4, 5};
  set<int> expected{3,4,5};

  symTest.addInputArray(array1);
  symTest.addInputArray(array2);
  set<int> result = symTest.symDiff();
  symTest.print(result);

  EXPECT_EQ(result.size(), 3);
  EXPECT_EQ(result, expected);
} 

// sym([1, 2, 5], [2, 3, 5], [3, 4, 5]) should return [1, 4, 5]
// sym([1, 2, 5], [2, 3, 5], [3, 4, 5]) should contain only three elements.
TEST(TestSymmetricDifference3, BasicFunction) {

  Sym symTest;

  vector<int> array1{1, 2, 5}; vector<int> array2{2, 3, 5}; vector<int> array3{3, 4, 5};
  set<int> expected{1,4,5};

  symTest.addInputArray(array1);
  symTest.addInputArray(array2);
  symTest.addInputArray(array3);
  set<int> result = symTest.symDiff();
  symTest.print(result);

  EXPECT_EQ(result.size(), 3);
  EXPECT_EQ(result, expected);
} 


// sym([1, 1, 2, 5], [2, 2, 3, 5], [3, 4, 5, 5]) should return [1, 4, 5].
// sym([1, 1, 2, 5], [2, 2, 3, 5], [3, 4, 5, 5]) should contain only three elements.
TEST(TestSymmetricDifference4, BasicFunction) {

  Sym symTest;

  vector<int> array1{1, 1, 2, 5}; vector<int> array2{2, 2, 3, 5}; vector<int> array3{3, 4, 5, 5};
  set<int> expected{1,4,5};

  symTest.addInputArray(array1);
  symTest.addInputArray(array2);
  symTest.addInputArray(array3);
  set<int> result = symTest.symDiff();
  symTest.print(result);

  EXPECT_EQ(result.size(), 3);
  EXPECT_EQ(result, expected);
}


// sym([3, 3, 3, 2, 5], [2, 1, 5, 7], [3, 4, 6, 6], [1, 2, 3]) should return [2, 3, 4, 6, 7].
// sym([3, 3, 3, 2, 5], [2, 1, 5, 7], [3, 4, 6, 6], [1, 2, 3]) should contain only five elements.
TEST(TestSymmetricDifference5, BasicFunction) {

  Sym symTest;

  vector<int> array1{3, 3, 3, 2, 5}; vector<int> array2{2, 1, 5, 7}; 
  vector<int> array3{3, 4, 6, 6}; vector<int> array4{1, 2, 3};
  
  set<int> expected{2, 3, 4, 6, 7};

  symTest.addInputArray(array1);
  symTest.addInputArray(array2);
  symTest.addInputArray(array3);
  symTest.addInputArray(array4);
  set<int> result = symTest.symDiff();
  symTest.print(result);

  EXPECT_EQ(result.size(), 5);
  EXPECT_EQ(result, expected);
} 


// sym([3, 3, 3, 2, 5], [2, 1, 5, 7], [3, 4, 6, 6], [1, 2, 3], [5, 3, 9, 8], [1]) should return [1, 2, 4, 5, 6, 7, 8, 9].
// sym([3, 3, 3, 2, 5], [2, 1, 5, 7], [3, 4, 6, 6], [1, 2, 3], [5, 3, 9, 8], [1]) should contain only eight elements.
TEST(TestSymmetricDifference6, BasicFunction) {

  Sym symTest;

  vector<int> array1{3, 3, 3, 2, 5}; vector<int> array2{2, 1, 5, 7}; vector<int> array3{3, 4, 6, 6};
  vector<int> array4{1, 2, 3}; vector<int> array5{5, 3, 9, 8}; vector<int> array6{1};
  set<int> expected{1, 2, 4, 5, 6, 7, 8, 9};

  symTest.addInputArray(array1);
  symTest.addInputArray(array2);
  symTest.addInputArray(array3);
  symTest.addInputArray(array4);
  symTest.addInputArray(array5);
  symTest.addInputArray(array6);
  set<int> result = symTest.symDiff();
  symTest.print(result);

  EXPECT_EQ(result.size(), 8);
  EXPECT_EQ(result, expected);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
