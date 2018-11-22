#ifndef __STUDENT_H_
#define __STUDENT_H_
#include "list.h"
template <typename T>
CP::list<T> CP::list<T>::split(iterator it, size_t pos)
{
  //write your code here
    CP::list<T> result;
    node* p = it.ptr;
    if(it==end()) return result;
    int s = mSize;
    mSize = pos;
    result.mSize = s-pos;
    result.mHeader->prev = mHeader->prev;
    mHeader->prev->next = result.mHeader;
    mHeader->prev = p->prev;
    p->prev->next = mHeader;
    p->prev = result.mHeader;
    result.mHeader->next = p;

    return result;
    
}

#endif
