#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(GetParentIndex, ReturnGetParentIndex) {
  MaxHeap m;
  m.push(1);
  m.push(5);
  m.push(10);
  m.push(15);
  m.push(25);
  m.push(11);
  m.push(55);
  int actual = m.GetParentIndex(1);
  int expected = 0;
  EXPECT_EQ(expected, actual);
}
TEST(GetLeftIndex, ReturnGetLeftIndex) {
  MaxHeap m;
  m.push(1);
  m.push(5);
  m.push(10);
  m.push(15);
  m.push(25);
  m.push(11);
  m.push(55);
  int actual = m.GetLeftIndex(1);
  int expected = 3;
  EXPECT_EQ(expected, actual);
}
TEST(GetRightIndex, ReturnGetRightIndex) {
  MaxHeap m;
  m.push(1);
  m.push(5);
  m.push(10);
  m.push(15);
  m.push(25);
  m.push(11);
  m.push(55);
  int actual = m.GetRightIndex(1);
  int expected = 4;
  EXPECT_EQ(expected, actual);
}
TEST(GetLargestChildIndex, ReturnGetLargestChildIndex) {
  MaxHeap m;
  m.push(1);
  m.push(5);
  m.push(10);
  m.push(15);
  m.push(25);
  m.push(11);
  m.push(55);
  int actual = m.GetLargestChildIndex(1);
  int expected = 4;
  EXPECT_EQ(expected, actual);
}
TEST(top, Returntop) {
  MaxHeap m;
  m.push(1);
  m.push(5);
  m.push(10);
  m.push(15);
  m.push(25);
  m.push(11);
  m.push(55);
  int actual = m.top();
  int expected = 55;
  EXPECT_EQ(expected, actual);
}
TEST(push, Returnpush) {
  MaxHeap m;
  m.push(1);
  m.push(5);
  m.push(10);
  m.push(15);
  m.push(25);
  m.push(11);
  int actual = m.top();
  int expected = 25;
  EXPECT_EQ(expected, actual);
}
TEST(pop, Returnpop) {
  MaxHeap m;
  m.push(1);
  m.push(5);
  m.push(10);
  m.push(15);
  m.push(25);
  m.push(11);
  m.push(55);
  m.pop();
  int actual = m.top();
  int expected = 25;
  EXPECT_EQ(expected, actual);
}