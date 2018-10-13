#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator==(const vector<T> &other) const {
  //write your code only in this function
  if(other.mSize!=this->mSize) return false;
  for(size_t i=0;i<other.size();i++){
    if(other.at(i)!=this->at(i)){
      return false;
    }
  }
  return true;

}

#endif
