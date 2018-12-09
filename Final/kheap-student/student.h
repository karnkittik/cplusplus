#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {

    T tmp = mData[idx];
    while(idx>0){
        size_t p = (idx -1)/4;
        if(mLess(tmp,mData[p])) break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;

}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    size_t  c,maxd;
    while((c = 4 * idx + 1) < mSize){
        maxd = c;
        for(int i=1;i<4;i++){ // 1 2 3
            if( c+1 >= mSize) break;
            if(mLess(mData[maxd],mData[c + 1])){
                maxd = c+1;
              
            }  c++;  
        }
        if ( mLess(mData[maxd],tmp) ) break;
        mData[idx] = mData[maxd];
        idx = maxd;      
    }
    mData[idx] = tmp;
}

#endif

