#ifndef __STUDENT_H_
#define __STUDENT_H_
#include "list.h"
template <typename T>
CP::list<T> CP::list<T>::split(iterator it, size_t pos)
{
  //write your code here
    CP::list<T> result;
    node *p = it.ptr;
    if(it==end()) return result;
    result.mSize = mSize - pos;
    mSize = pos;

    p->prev->next = mHeader;
    mHeader->prev->next = result.mHeader;
    result.mHeader->prev = mHeader->prev;
    mHeader->prev = p->prev;
    result.mHeader->next = p;
    p->prev = result.mHeader;
    return result;
    
}

#endif
