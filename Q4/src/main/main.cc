#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  // Print Hellow world!
  std::vector<int>vec={8,3,2,5,4,7,10,14,12};
  BST b(vec);
  // b.erase(8);
  // std::cout<<b.find(18)<<std::endl;
  std::cout<<b.find(8)<<std::endl;
  std::cout<<b.find(3)<<std::endl;
  std::cout<<b.find(2)<<std::endl;
  std::cout<<b.find(5)<<std::endl;
  std::cout<<b.find(4)<<std::endl;
  std::cout<<b.find(7)<<std::endl;
  std::cout<<b.find(10)<<std::endl;
  std::cout<<b.find(14)<<std::endl;
  std::cout<<b.find(12)<<std::endl;
  std::cout<<std::endl;
  std::cout<<b.root_->val<<std::endl;
  std::cout<<b.root_->left->val<<std::endl;
  std::cout<<b.root_->left->right->val<<std::endl;
  std::cout<<b.root_->left->right->left->val<<std::endl;
  // std::cout<<b.root_->right->right->left->val<<std::endl;
  // std::cout<<b.root_->right->right->right->val<<std::endl;
  vec=b.traverse();
  for(auto n: vec){
    std::cout<<n<<' ';
  }
  return EXIT_SUCCESS;
}