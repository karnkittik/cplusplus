#include <iostream>
using namespace std;
//template <typename T>
class node{
    public:
        T data;
        node* next;
        node(): data(T()), next(NULL){}
        node(const T& data, node* next):data(T(data)),next(next){}
};
template <typename T>
class list{
    protected:
        node *mHeader;
        size_t mSize;
    public: 
        list() : mHeader(new node()),mSize(0){}
        ~list(){clear();}
        size_t size(){return mSize;}
        void push_front(const T& x){
            mHeader->next = new node(x,mHeader->next);
            mSize++;
        }
};