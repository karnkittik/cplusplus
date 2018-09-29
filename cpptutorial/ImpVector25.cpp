#include <iostream>
using namespace std;
#ifndef _CP_VECTOR_INCLUDED_
#define _CP_VECTOR_INCLUDED_
namespace CP{
template <typename T>
class vector{
    protected:
        T *mData; //pointer to array of T
        size_t mCap; //reserved space
        size_t mSize; //real used
    public:
    //------------constuctor----------
        vector(){
            int cap =1;
            mData = new T[cap]();
            mCap = cap;
            mSize = 0;
        }
        vector(size_t cap){
            mData = new T[cap]();
            mCap = cap;
            mSize = cap;
        }
        vector(const vector<T> &a){
            mData = new T[a.capacity()]();
            mCap = a.capacity();
            mSize = a.size();
            //copy daya
            for(size_t i = 0;i<a.size();i++){
                mData[i] = a[i];
            }
        }
        ~vector(){
            clear();//i dont know
            delete [] mData;
        }
    //----------capacity func---------
        bool empty(){
            return (mSize == 0);
        }
        size_t size(){
            return mSize;
        }
        size_t capacity(){
            return mCap;
        }
        void resize(size_t n){
            if(n>mCap){
                T *arr = new T[n];
                for(size_t i=0;i<mSize;i++){
                    arr[i] = mData[i];
                }
                delete [] mData;
                mData = arr;
                mCap = n;
            }
            mSize = n; //different from expand
        }
    //----------special---------------
    protected:
        void expand(size_t capacity){
            T *arr = new T[capacity]();
            for(size_t i=0;i<mSize;i++){
                arr[i] = mData[i];
            }
            delete [] mData;
            mData = arr;
            mCap = capacity;
        }
        void ensureCapacity(size_t capacity){
            if(capacity>mCap){
                size_t s  = (capacity >2*mCap) ? capacity : 2*mCap;
                expand(s);
            }
        }
    //---------iterator---------------
    public:
    typedef T *iterator;
        iterator begin(){
            return mData; //return mData[0]
        }
        iterator end(){
            return mData + mSize; //return after the last of mData
        }
    //----------access------------------
    public:
        T& at(int i){
            if(i<0|| (size_t)i >= mSize){
                throw std::out_of_range("index out of range");
            }
            return mData[i];
        }
        T& operator[](int i){
            return mData[i];
        }
    //-------------modifier-------------
        void push_back(const T &a){
            insert(end(),a);
        }
        void pop_back(){
            mSize--;
        }
        void clear(){
            mSize = 0;
        }
        void erase(iterator it){
            while( (it+1) != end()){
                *it = *(it+1);
                it++;
            }
            mSize--;
        }
        void insert(iterator it, const T&e){
            size_t pos = it - begin();
            ensureCapacity(mSize+1);
            for(size_t i = mSize;i>pos;i--){
                mData[i] = mData[i-1];
            }
            mData[pos] = e;
            mSize++;
        }
};
}


namespace PC{
template <typename T>
class V{
    protected:
    T *mData;
    public:
    V(int c){
        cout <<"V()"<<endl;
        mData = new T[c];
    }
    ~V(){
        cout<<"~V()"<<endl;
        delete [] mData;
    }
};
class Q {
    public: 
    Q(){
        cout<<"\tQ()"<<endl;
    }
    ~Q(){
        cout<<"\t~Q()"<<endl;
    }
};
}
#endif

int main(){
    PC::V<PC::Q> v(3);
    PC::Q q;

}