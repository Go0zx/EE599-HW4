#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>

// Person class is defined for demonstration
struct Person {
  std::string first_name;
  std::string last_name;
  int age;
};

class Solution {
public:
  int kthlargest(std::vector<int> vec, int th);
};

#endif