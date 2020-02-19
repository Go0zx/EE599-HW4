#include "solution.h"

int Solution::kthlargest(std::vector<int> vec, int th){
  make_heap(vec.begin(),vec.end());
  while(--th){
    pop_heap(vec.begin(), vec.end()); 
    vec.pop_back();
    
  }
  return vec.front();
}