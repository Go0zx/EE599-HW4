#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  // Print Hellow world!
  Solution s;
  
  std::vector<int> v = {1, 4, 9, 16, 25, 36, 49};
  
  s.print(v);
  s.print(s.Filter(v));
  s.print(s.Map(v));
  std::cout<<s.Reduce(v)<<std::endl;

  return EXIT_SUCCESS;
}