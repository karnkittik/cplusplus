#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  CP::priority_queue<T,Comp> a =*this,b=other;
  if(a.size()!=b.size()) return false;
  while(!a.empty()){
    if(a.top()!=b.top()) return false;
    else{
      a.pop();b.pop();
    }
  }
  return true; // you can change this line
}

#endif