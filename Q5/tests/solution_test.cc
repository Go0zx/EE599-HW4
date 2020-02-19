#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(heapsort, Returnheapsort1) {
  Solution solution;
  std::vector<int> actual = {3,4,6,9,10,5,1,11,22};
  solution.heapsort(actual);
  std::vector<int> expected = {1,3,4,5,6,9,10,11,22};
  EXPECT_EQ(expected, actual);
}
TEST(heapsort, Returnheapsort2) {
  Solution solution;
  std::vector<int> actual = {5, 9, 3, 1, 7};
  solution.heapsort(actual);
  std::vector<int> expected = {1, 3, 5, 7, 9};
  EXPECT_EQ(expected, actual);
}