#ifndef __STUDENT_H_
#define __STUDENT_H_
#include "map_bst.h"
template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node* it(mRoot);
  node* prev,less,more;
  prev = it;
  if(it->data.first<val){
      it = it->right;
      prev->right = NULL;
      result.mRoot = it;
      less = find_max_node(prev);
  }else{
      it = it->left;
      prev->left = NULL;
      result.mRoot = prev;
      more = find_min_node(prev);
  }
  while(true){
    if(it->data.first<val){
      it = it->right;
      prev->right = NULL;
      less->right = prev;
      less = find_max_node(prev);
  }else{
      it = it->left;
      prev->left = NULL;
      more->left = prev;
      more = find_max_node(prev);
  }
  if(it->left==NULL && it->right==NULL) break;
  }
  return result;
}

#endif
