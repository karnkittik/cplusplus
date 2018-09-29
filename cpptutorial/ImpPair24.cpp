#include <iostream>
#ifndef _CP_PAIR_INCLUDED_
#define _CP_PAIR_INCLUDED_
namespace CP{
template <typename T1,typename T2>
class pair{
public:
T1 first;
T2 second;
//----------------- constructor -------------
pair()
{ first = 0; second = "Kris";}

pair(pair<T1,T2> &other)
{ first = other.first; second = other.second; }

pair(T1 _first,T2 _second)
{first = _first; second = _second; }

//----------------- operator -----------------

pair<T1,T2>& operator=(const pair<T1,T2>& other) {
first = other.first;
second = other.second;
return *this; // this คือ pointer
}
bool operator==(const pair<T1,T2> &other)
{return (first == other.first && 
         second == other.second);}

bool operator<(const pair<T1,T2> &other) const
{return ((first < other.first) ||(first == other.first &&
second < other.second)); }
T1 operator+(const pair& q){
    return q.first + first;
}
};
} 
#endif
int main(){
    CP::pair<int,std::string> a(10,"Katy");
    CP::pair<int,std::string> b(a);
    //use equality operator
    CP::pair<int,std::string> c(999,"asdf");
    // use assignment operator
    c = a;
    std::cout << "a == c? " << (a == c ? "YES" : "NO") << "\n";
    c.second = "abc";
    std::cout << "a == c? " << (a == c ? "YES" : "NO") << "\n";
}