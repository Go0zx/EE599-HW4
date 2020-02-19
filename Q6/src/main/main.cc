#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  // Print Hellow world!
  Solution s;
  
  std::cout<<s.kthlargest({0,2,1,5,6,3}, 2)<<std::endl;
  std::cout<<s.kthlargest({-2,3,-1,2,5,6,10}, 3)<<std::endl;
  std::cout<<s.kthlargest({5,9,3,1,7}, 2)<<std::endl;

  return EXIT_SUCCESS;
}