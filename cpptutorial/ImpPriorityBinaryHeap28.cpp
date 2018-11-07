#include <iostream>
#ifndef _CP_QUEUE_INCLUDED_
#define _CP_QUEUE_INCLUDED_
namespace CP{
    template <typename T, typename Comp = std::less<T> >
    class priority_queue {
        protected:
            T* mData;
            size_t mCap;
            size_t mSize;
            Comp mLess;
        public:
            // priority_queue(const Comp&c = Comp()){
            //     mCap =1;
            //     mData = new T[mCap]();
            //     mSize = 0;
            //     mLess = c;
            // }
            priority_queue(const Comp& c = Comp()) : 
                mData(new T[1]()), mCap(1), mSize(0), mLess(c){}

            // priority_queue(const priority_queue<T,Comp> &a){
            //     mCap = a.mCap;
            //     mData = new T[mCap]();
            //     for(size_t i=0;i<a.mCap;i++){
            //         mData[i] = a.mData[i];
            //     }
            //     mSize = a.mSize;
            //     mLess = a.mLess;
            // }
            priority_queue(const priority_queue<T,Comp>& a) :
                mData(new T[a.mCap]()), mCap(a.mCap), mSize(a.mSize), mLess(a.mLess){
                    for(size_t i=0; i<a.mCap;i++) mData[i] = a.mData[i];
                }

            ~priority_queue(){
                delete [] mData;
            }
    };
}
#endif