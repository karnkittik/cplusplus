#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//function
bool my_cmp(int e1, int e2)
{   return e1 > e2;
}
//comparator object (functor)
class MyComparator {
public:
bool operator()(const int & lhs, const int & rhs) const {
return lhs > rhs;} };
//class
class Student {
public:
string id;
string name;
float gpax;
bool operator<(const Student& rhs) const {
return id < rhs.id;
}

};
//greater
int main()
{   int a[] =  {3, 1, 4, 2};
    vector<int> v (a,a+4);
    vector<int> u = v;
    sort(v.begin(), v.end(), my_cmp);
    for (int e : v)
         cout << e << " ";
    cout << endl;
    sort(u.begin(), u.end(), MyComparator());
    for (int e: u)
        cout << e << " ";
    cout << endl;
    //greater
    sort(u.begin(), u.end(), greater<int>() ); //default is less<int>()
    for (int e: u)
        cout << e << " ";
    cout << endl;
    return 0;
}
