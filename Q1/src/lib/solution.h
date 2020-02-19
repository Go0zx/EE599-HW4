#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <math.h>

// Person class is defined for demonstration
struct Person {
  std::string first_name;
  std::string last_name;
  int age;
};

class Solution {
public:
  std::string PrintHelloWorld();
  Person *ReturnInvalidPointer();
  int fib(int N);

  std::vector<int> Filter(std::vector<int> vec);
  std::vector<int> Map(std::vector<int> vec);
  int Reduce(std::vector<int> vec);
  void print(std::vector<int> vec);
private:
  std::map<int, int> _m;
};

#endif