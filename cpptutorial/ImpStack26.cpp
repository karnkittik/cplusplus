#include <iostream>
#ifndef _CP_STACK_INCLUDED_
#define _CP_STACK_INCLUDED_
namespace CP{
template <typename T>
class stack{
    protected:
        T *mData;
        size_t mCap;
        size_t mSize;
    public:
    //-------------constructor-----------
        stack(){
            int cap = 1;
            mData = new T[cap]();
            mCap = cap; mSize = 0;
        }
        stack(const stack<T>& a){
            mData = new T[a.mCap]();
            mCap = a.mCap; mSize = a.mSize;
            for(size_t i = 0; i<mSize;i++){
                mData[i]=a[i];
            }
        }
        ~stack(){
            delete [] mData;
        }
    //-----------capacity func------------
        bool empty() const{
            return mSize==0;
        }
        size_t size() const{
            return mSize;
        }
    //-----------access------------------
        const T& top(){
            if(size() == 0)
                throw std::out_of_range("index out of range");
            return mData[mSize-1];
        }
    //----------modifier-----------------
    protected:
    void expand(size_t capacity) {
      T *arr = new T[capacity]();
      for (size_t i = 0;i < mSize;i++) arr[i] = mData[i];
      delete [] mData;
      mData = arr;  mCap = capacity;
    }
    void ensureCapacity(size_t capacity) {
      if (capacity > mCap) {
        size_t s = (capacity > 2*mCap) ? capacity : 2*mCap;
        expand(s);
      }
    }
    public:
    void push(const T& element) {
      ensureCapacity(mSize + 1);
      mData[mSize] = element;
      mSize++;
    }
        void pop(){
            if(size() == 0)
                throw std::out_of_range("index out of range");
            mSize--;
        }
};
}
#endif