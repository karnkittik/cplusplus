#ifndef __STUDENT_H_
#define __STUDENT_H_
#include "list.h"
template <typename T>
void CP::list<T>::remove_all(const T& value) {
  for(iterator it = begin();it!=end();it++){
    if(*it==value){
      erase(it);
    }
  } 
}

#endif
