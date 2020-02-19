#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(kthlargest, Returnkthlargest1) {
  Solution solution;
  int actual = solution.kthlargest({0,2,1,5,6,3}, 2);
  int expected = 5;
  EXPECT_EQ(expected, actual);
}
TEST(kthlargest, Returnkthlargest2) {
  Solution solution;
  int actual = solution.kthlargest({-2,3,-1,2,5,6,10}, 3);
  int expected = 5;
  EXPECT_EQ(expected, actual);
}
TEST(kthlargest, Returnkthlargest3) {
  Solution solution;
  int actual = solution.kthlargest({-2,3,-1,2,5,6,10}, 2);
  int expected = 6;
  EXPECT_EQ(expected, actual);
}
TEST(kthlargest, Returnkthlargest4) {
  Solution solution;
  int actual = solution.kthlargest({5,9,3,1,7}, 2);
  int expected = 7;
  EXPECT_EQ(expected, actual);
}
