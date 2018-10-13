#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  int n = last-first;
  int p = position - begin();
  resize(mSize+n);
  for(int i = mSize-1;i-n>=p;i--){
    mData[i] = mData[i-n];
  }
  for(int j = p;j < p+n;j++){
    mData[j] = *(first++);
  }
}

#endif
