#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>
#define min(a,b) (a<b? a:b)

template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  k = min(mSize,k); res.resize(k);
  for(size_t i=0;i<k;i++){
    res[i]=mData[(mFront+i)%mCap];
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  mCap = to-from;
  mData = new T[mCap]();
  mSize = 0;
  mFront = 0;
  for(auto it=from;it!=to;it++){
    mData[mSize++]=*it;
  }
  
}

#endif
