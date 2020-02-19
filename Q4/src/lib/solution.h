#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <queue>

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BST { 
public:
BST(){};
  BST(std::vector<int> initial_values){
    root_=nullptr;
    for(const auto &n: initial_values){
      push(n);
    }
  };
  void insert(TreeNode *root, int v);
  void push(int key); 
  bool find(int key); 
  bool erase(int key);
  std::vector<int> traverse();
// private:
  TreeNode *root_; 
};

#endif