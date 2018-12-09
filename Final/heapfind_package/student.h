#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <math.h>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for(int i=0;i<mSize;i++){
    if(mData[i]==k) return true;
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  int found = -1;
  for(int i=0;i<mSize;i++){
    if(mData[i]==k) found = i;
  }
  if(found == -1) return -1;
  return floor(log2(found+1));
}

#endif

