#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(traverse, Returntraverse) {
  std::vector<int>vec={8,10,14,13,3,1,6,7,4};
  BST b(vec);
  std::vector<int>actual=b.traverse();
  std::vector<int>expected={8,3,10,1,6,14,4,7,13};
  EXPECT_EQ(actual, expected);

}
