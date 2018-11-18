#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  iterator it = begin();
  for(;it!=end();it++){
    if(*it==value){
      //iterator tmp = it;
      // erase(tmp);
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;
      delete it.ptr;
      mSize--;
    }
  }
}

#endif
