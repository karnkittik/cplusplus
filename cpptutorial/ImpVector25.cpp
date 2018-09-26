#include <iostream>
using namespace std;
#ifndef _CP_VECTOR_INCLUDED_
#define _CP_VECTOR_INCLUDED_
namespace CP {
template <typename T>
class vector{
    protected:
    T *mData;
    size_t mCap;
    size_t mSize; 
    public:
    vector(size_t cap){
        mData = new T[cap](); //new array of T
        mCap = cap;
        mSize = cap;
    }
    vector(){
        int cap = 1;
        mData = new T[cap]();
        mCap = cap;
        mSize = 0;
    }
    vector(const vector<T>&a){
        mData = new T[a.capacity()]();
        mCap = a.capacity();
        mSize = a.size();
        for(size_t i = 0; i<a.size();i++){
            mData[i] = a[i];
        }
    }
    ~vector(){
        //clear();
        delete [] mData;
    }
};
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
    CP::V<CP::Q> v(3);
    CP::Q q;

}