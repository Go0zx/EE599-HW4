#include "solution.h"

int MaxHeap::GetParentIndex(int i){
  if(i == 0){
    return -1;
  }
  return (i-1)/2;
}          //GT
int MaxHeap::GetLeftIndex(int i){
  if((2*i)+1 >= data_.size()){
    return -1;
  }
  return (2*i)+1;
}            //GT
int MaxHeap::GetRightIndex(int i){
  if((2*i)+2 >= data_.size()){
    return -1;
  }
  return (2*i)+2;
}           //GT
int MaxHeap::GetLargestChildIndex(int i){
  if((2*i)+1 >= data_.size()){
    return -1;
  }
  else{
    if((2*i)+2 >= data_.size()){
      return (2*i)+1;
    }
    else{
      if(data_.at((2*i)+1)>=data_.at((2*i)+2)){
        return (2*i)+1;
      }
      else{
        return (2*i)+2;
      }
    }
  }
}    //GT
int MaxHeap::GetLeft(int i){
  if((2*i)+1 >= data_.size()){
    return -1;
  }
  return data_.at((2*i)+1);
}
int MaxHeap::GetRight(int i){
  if((2*i)+2 >= data_.size()){
    return -1;
  }
  return data_.at((2*i)+2);
}
int MaxHeap::GetParent(int i){
  if(i == 0){
    return -1;
  }
  return data_.at((i-1)/2);
}
int MaxHeap::top(){
  if(data_.size()==0){
    return INT_MAX;
  }
  else{
    return data_.at(0);
  }
}                          //GT
void MaxHeap::TrickleUp(int i){
  while(i!=0 && GetParent(i)< data_.at(i)){
    std::swap(data_.at(i), data_.at(GetParentIndex(i))); 
    i = GetParentIndex(i);
  }
}
void MaxHeap::TrickleDown(int i){
  if(data_.size()==0){ return;}
  while(1<data_.size() && data_.at(GetLargestChildIndex(i))>data_.at(i)){
    std::swap(data_.at(i), data_.at(GetLargestChildIndex(i))); 
    i = GetLargestChildIndex(i);
  }
}
void MaxHeap::push(int v){
  data_.insert(data_.end(),v);
  int i = data_.size()-1;
  TrickleUp(i);
}                   //GT
void MaxHeap::pop(){
  std::swap(data_.at(0), data_.at(data_.size()-1)); 
  data_.erase(data_.end()-1);
  TrickleDown(0);
}                      //GT
