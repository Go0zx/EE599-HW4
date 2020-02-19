#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  MaxHeap m;
  m.push(1);
  m.push(5);
  m.push(10);
  m.push(15);
  m.push(25);
  m.push(11);
  m.push(55);
  std::cout<<m.top()<<std::endl;
  std::cout<<m.GetParentIndex(1)<<std::endl;
  std::cout<<m.GetLeftIndex(1)<<std::endl;
  std::cout<<m.GetRightIndex(1)<<std::endl;
  std::cout<<m.GetLargestChildIndex(1)<<std::endl;
  std::cout<<m.GetLeft(1)<<std::endl;
  std::cout<<m.GetRight(1)<<std::endl;
  std::cout<<m.GetParent(1)<<std::endl;
  return EXIT_SUCCESS;
}