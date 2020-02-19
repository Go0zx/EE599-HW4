#include "solution.h"

std::string Solution::PrintHelloWorld() { return "**** Hello World ****"; }

Person *Solution::ReturnInvalidPointer() {
  Person *p = nullptr;
  p->first_name = "Ari";

  return p;
};

// Calculates the Nth Fibonacci number
int Solution::fib(int N) {
  if (N == 0) {
    return 0;
  }

  if (N == 1) {
    return 1;
  }

  return fib(N - 1) + fib(N - 2);
}


std::vector<int> Solution::Filter(std::vector<int> vec){
  std::vector<int> vec_n (vec.size());

  auto it = std::copy_if (vec.begin(), vec.end(), vec_n.begin(), [](int i){return (i%2==0);} );
  vec_n.resize(std::distance(vec_n.begin(),it));  
  return vec_n;
}
std::vector<int> Solution::Map(std::vector<int> vec){
  std::vector<int> vec_n (vec.size());
  std::transform(vec.begin(), vec.end(), vec_n.begin(), [](int i){return sqrt(i);});
  return vec_n;
}
int Solution::Reduce(std::vector<int> vec){
  return std::accumulate(vec.begin(), vec.end(),0);
}
void Solution::print(std::vector<int> vec){
  for(const auto & n: vec){
    std::cout<<n<<' ';
  }
  std::cout<<std::endl;
}