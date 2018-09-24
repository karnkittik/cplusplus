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
{ first = 0; second = 'f';}

pair(pair<T1,T2> &other)
{ first = other.first(); second = other.second(); }

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

bool operator<(const pair<T1,T2> &other)
{ ((first < other.first) ||(first == other.first &&
second < other.second)); }
T1 operator+(const pair& q){
    return q.first + first;
}
};
} 
#endif