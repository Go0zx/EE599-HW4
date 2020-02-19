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
  BST(std::vector<int> initial_values){
    root_=nullptr;
    for(auto n: initial_values){
      push(n);
    }
  };
  ~BST(){delete root_;};
  void insert(TreeNode *&root, int v);
  void push(int key); 
  bool find(int key); 
  bool erase(int key);
// private:
  TreeNode *root_; 
};

#endif