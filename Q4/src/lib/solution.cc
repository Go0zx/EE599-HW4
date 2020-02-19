#include "solution.h"

void BST::push(int key){
  TreeNode *next;
  TreeNode *pre;
  int flag;
  next=root_;
  if(root_==nullptr){
    root_ = new TreeNode(key);
    return;
  }
  while(next!=nullptr){
    if(key < next->val){
      pre=next;
      next=next->left;
      flag=0;
    }
    else if(key > next->val){
      pre=next;
      next=next->right;
      flag=1;
    }
  } 
  if(flag==0) {pre->left=new TreeNode(key);}
  if(flag==1) {pre->right=new TreeNode(key);}
  
}
bool BST::find(int key){
  TreeNode *next; 
  next=root_;
  if(root_==nullptr){
    return false;
  }
 
  while(next!=nullptr){
    
    if(key==next->val) {return true;}
    else if(key < next->val){
      next=next->left;
    }
    else if(key > next->val){
      next=next->right;
    }
  } 
  
  return false;
}
bool BST::erase(int key){
  TreeNode *next; 
  TreeNode *temp; 
  TreeNode *pre; 
  int flag;

  next=root_;
  pre=root_;
  if(find(key)==false) {return false;}
  else{
    while(next!=nullptr){
      if(key==next->val) break;
      else if(key < next->val){
        pre=next;
        next=next->left;
        flag=0;
      }
      else if(key > next->val){
        pre=next;
        next=next->right;
        flag=1;
      }
    }
    if(next==root_){ 
      temp=root_;
      while(temp!=nullptr){
        if(temp->right!=nullptr){
          pre=temp;
          flag=1;
          temp->val=temp->right->val;
          std::cout<<temp->right->val<<std::endl;
          temp=temp->right;
          
        }
        else if(temp->right==nullptr && temp->left!=nullptr){
          pre->left=temp;
          pre=temp;
          flag=0;
          std::cout<<temp->left->val<<std::endl;
          temp->val=temp->left->val;
          std::cout<<temp->val<<std::endl;
          temp=temp->left;
        }
        else if(temp->right==nullptr && temp->left==nullptr){
          if(flag==0)  { pre->left=nullptr;}
          if(flag==1)  { pre->right=nullptr;}
          return true;
        }
      }
    }
    else if(next->left==nullptr && next->right==nullptr) {
      if(flag==0) {pre->left=next->left;}
      if(flag==1) {pre->right=next->left;}
      return true;
    }
    else if(next->left!=nullptr && next->right==nullptr){
      if(flag==0) {pre->left=next->left;}
      if(flag==1) {pre->right=next->left;}
      return true;
    }
    else if(next->left==nullptr && next->right!=nullptr){
      if(flag==0) {pre->left=next->left;}
      if(flag==1) {pre->right=next->left;}
      return true;
    }
    else if(next->left!=nullptr && next->right!=nullptr){
      temp=next;
      while(temp!=nullptr){
        if(temp->right!=nullptr){
          pre=temp;
          temp->val=temp->right->val;
          temp=temp->right;
          flag=1;
        }
        else if(temp->right==nullptr && temp->left!=nullptr){
        
          pre=temp;
          flag=0;
          temp->val=temp->left->val;
          temp=temp->left;
        }
        else if(temp->right==nullptr && temp->left==nullptr){
          if(flag==0) {pre->left=nullptr;}
          if(flag==1) {pre->right=nullptr;}
          return true;
        }
      }
    }    
  }
  return false;
}


std::vector<int> BST::traverse(){
    if (root_ == nullptr)  return{}; 
    std::queue<TreeNode*> q; 
    std::vector<int> vec; 
    q.push(root_); 
    while (!q.empty()) { 
        TreeNode* node = q.front();
        vec.insert(vec.end(),q.front()->val);
        q.pop(); 
        if (node->left != NULL) 
            q.push(node->left); 
        if (node->right != NULL) 
            q.push(node->right); 
    } 
    return vec;
} 