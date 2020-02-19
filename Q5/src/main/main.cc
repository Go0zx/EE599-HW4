#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  // Print Hellow world!
  Solution s;
  std::vector<int> vec={3,4,6,9,10,5,1,11,22};
  
  s.heapsort(vec);
  for(const auto & n: vec){
    std::cout<<n<<' ';
  }
  return EXIT_SUCCESS;
}