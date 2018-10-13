#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  if(K > mSize) K=mSize;
  for(size_t i=0;i<K;i++){
   pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  std::stack<T> a,b;
  if(K > mSize) K=mSize;
  for(size_t i=0;i<K;i++){
    a.push(top());
    pop();
  }
  while(!a.empty()){
    b.push(a.top());
    a.pop();
  }

  //don't forget to return an std::stack
  return b;
}

#endif
