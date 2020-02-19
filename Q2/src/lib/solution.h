#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <algorithm>


class MaxHeap{
  public:
    MaxHeap(){};
    int GetParentIndex(int i);          //GT
    int GetLeftIndex(int i);            //GT
    int GetRightIndex(int i);           //GT
    int GetLargestChildIndex(int i);    //GT

    int GetLeft(int i);
    int GetRight(int i);
    int GetParent(int i);

    int top();                          //GT
    void push(int v);                   //GT
    void pop();                         //GT
    void TrickleUp(int i);
    void TrickleDown(int i);
    
  private:
    std::vector<int> data_;
};

#endif