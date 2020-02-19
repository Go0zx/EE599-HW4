#include "solution.h"

void Solution::heapsort(std::vector<int> &vec){
  std::priority_queue<int, std::vector<int>, std::greater<int> > p;
  for(const auto &n:vec){
    p.push(n);
  }
  // vec.clear();
  for(int i=0;i<vec.size();i++){
    vec.at(i)=p.top();
    // std::cout<<p.top()<<' ';
    p.pop();
  }
}