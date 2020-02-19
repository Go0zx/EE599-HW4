#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Filter, ReturnFilter) {
  Solution s;
  std::vector<int> actual = s.Filter({1, 4, 9, 16, 25, 36, 49});
  std::vector<int> expected = {4, 16, 36};
  EXPECT_EQ(expected, actual);
}

TEST(Map, ReturnMap) {
  Solution s;
  std::vector<int> actual = s.Map({1, 4, 9, 16, 25, 36, 49});
  std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7};
  EXPECT_EQ(expected, actual);
}

TEST(Reduce, ReturnReduce) {
  Solution s;
  int actual = s.Reduce({1, 4, 9, 16, 25, 36, 49});
  int expected = 140;
  EXPECT_EQ(expected, actual);
}