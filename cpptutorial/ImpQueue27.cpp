#include <iostream>
#ifndef _CP_QUEUE_INCLUDED_
#define _CP_QUEUE_INCLUDED_
namespace CP{
template <typename T>
class queue{
    protected:
        T* mData;
        size_t mCap;
        size_t mSize;
        size_t mFront;
    public:
    //----------constructor---------
        queue(){
            int cap =1;
            mData = new T[cap]();
            mCap = cap;
            mSize = 0; mFront = 0;
        }
        queue(const queue<T> &a){
            mData = new T[a.mCap]();
            mCap = a.mCap;
            mSize = a.mSize;
            for(size_t i=0;i<mSize;i++){
                mData[i] = a[i];
            }
            mFront = a.mFront;
        }
        ~queue(){
            delete [] mData;
        }
    //----------capacity func----------
        bool empty(){
            return mSize == 0;
        }
        size_t size(){
            return mSize;
        }
    //-----------access---------------
        const T& front(){
            if(size()==0)
                throw std::out_of_range("index out of range");
            return mData[mFront];
        }
        const T& back(){
            if(size()==0)
                throw std::out_of_range("index out of range");
            return mData[(mFront+mSize-1) % mCap];
        }
    //------------modifier-----------
    protected:
        void expand(size_t capacity){
            T *arr = new T[capacity]();
            for (size_t i = 0; i < mSize; i++) {
                arr[i] = mData[(mFront + i) % mCap];
            }
            delete [] mData;
            mData = arr;  mCap = capacity;  mFront = 0;
        }
        void ensureCapacity(size_t capacity) {
            if (capacity > mCap) {
                size_t s = (capacity > 2*mCap) ? capacity : 2*mCap;
                expand(s);
            }
         }
    public:
        void pop(){
            if(size()==0)
                throw std::out_of_range("index out of range");
            mFront = (mFront+1)%mCap;
            mSize--;
        }  
        void push(const T& e){
            ensureCapacity(mSize+1);
            mData[(mFront + mSize)%mCap] = e;
            mSize++;
        }
};
}
#endif