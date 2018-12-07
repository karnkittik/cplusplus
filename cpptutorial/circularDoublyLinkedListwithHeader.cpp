#include <iostream>
//using namespace std;
//template <typename T>
namespace CP{
template <typename T>
class list
{
  protected:
    class node
    {
        friend class list;

      protected:
        T data;
        node *prev;
        node *next;
        node() : data(T()), prev(this), next(this) {}
        node(const T &data, node *prev, node *next) : data(T(data)), prev(prev), next(next) {}
    };
    class list_iterator
    {
        friend class list;

      protected:
        node *ptr;

      public:
        list_iterator() : ptr(NULL) {}
        list_iterator(node *p) : ptr(p) {}
        list_iterator &operator++()
        {
            ptr = ptr->next;
            return *this;
        }
        list_iterator &operator++(int)
        {
            list_iterator tmp(*this);
            operator++();
            return tmp;
        }
        list_iterator &operator--()
        {
            ptr = ptr->prev;
            return *this;
        }
        list_iterator &operator--(int)
        {
            list_iterator tmp(*this);
            operator--();
            return tmp;
        }
        T &operator*() { return ptr->data; }
        T *operator->() { return &(ptr->data); }
        bool operator==(const list_iterator &other)
        {
            return other.ptr == ptr;
        }
        bool operator!=(const list_iterator &other)
        {
            return other.ptr != ptr;
        }
    };
    node *mHeader;
    size_t mSize;
  public:
    list() : mHeader(new node()), mSize(0) {}
    list(list<T> &a) : mHeader(new node()), mSize(0)
    {
        for (auto &x : a)
            push_back(x);
    }
    list<T>& operator=(list<T> other)
    {
        std::swap(this->mHeader, other.mHeader);
        std::swap(this->mSize, other.mSize);
        return *this;
    }
    ~list()
    {
       // clear();
        delete mHeader;
    }
    bool empty() { return mSize == 0; }
    size_t size() { return mSize; }
    T &front() { return mHeader->next->data; }
    T &back() { return mHeader->prev->data; }
    void push_back(const T &element)
    {
        insert(mHeader, element);
    }
    void push_back(const T &element)
    {
        insert(mHeader->next, element);
    }
    void pop_back()
    {
        erase(mHeader->prev);
    }
    void pop_front()
    {
        erase(mHeader->next);
    }
    typedef list_iterator iterator;
    iterator insert(iterator it, const T &element)
    {
        node *n = new node(element, it.ptr->prev, it.ptr);
        it.ptr->prev->next = n;
        it->ptr->prev = n;
        mSize++;
        return iterator(n);
    }
    iterator erase(iterator it)
    {
        iterator tmp(it.ptr->next);
        it.ptr->prev->next = it.ptr->next;
        it.ptr->next->prev = it.ptr->prev;
        delete it.ptr;
        mSize--;
       }
    void reverse(){
        node* f = mHeader->next;
        node* b = mHeader->back;
        while(f->next!=b->prev){
            std::swap(f->data,b->data);
            f = f->next;
            b = b->prev;
        }
    }
};
}
using namespace std;
int main(){
    CP::list<int> a;
    for(int i=0;i<10;i++){
        a.push_back(i);
    }
    for(auto e: a){
        cout<<e<<" ";
    }
}