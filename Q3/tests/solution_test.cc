#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(push, Returnpush) {
  std::vector<int> vec={2,1,3};
  BST b(vec);
  int n1=b.root_->val;
  int n2=b.root_->left->val;
  int n3=b.root_->right->val;
  EXPECT_EQ(n1, 2);
  EXPECT_EQ(n2, 1);
  EXPECT_EQ(n3, 3);
}

TEST(find, Returnfind) {
  std::vector<int> vec={2,1,3};
  BST b(vec);
  EXPECT_EQ(b.find(1), true);
  EXPECT_EQ(b.find(2), true);
  EXPECT_EQ(b.find(3), true);
  EXPECT_EQ(b.find(4), false);
}

TEST(erase, Returnerase) {
  std::vector<int> vec={2,1,3};
  BST b(vec);
  b.erase(2);
  EXPECT_EQ(b.find(1), true);
  EXPECT_EQ(b.find(2), false);
  EXPECT_EQ(b.find(3), true);
}