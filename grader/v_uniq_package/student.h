#include <map>
#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  vector<T> u;
  std::map<T,int> m;
  for(size_t i = 0; i <mSize; i++ ){
    if(m[at(i)]<1) u.push_back(at(i));
    m[at(i)]+=1;
    
  }
  for(size_t i = 0; i<u.mSize;i++){
    mData[i] = u[i];
  }
  mSize = u.mSize;

}

#endif
