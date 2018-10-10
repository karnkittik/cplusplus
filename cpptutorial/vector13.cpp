#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reset(vector<int> u) // call by value /copy vector r to u/r is not u
{
    for (auto &e : u)
    {
        e = 0;
    }
}
/*ฃฃvoid reset(vector<int> &u) // call by reference /u is reference of r / u is r
{
    for (auto &e : u)
    {
        e = 0;
    }
}*/
void foo2()
{
    vector<int> *v = new vector<int>(); //construct new obj
    //...
    delete v; //manually delete new obj
}
int main()
{
    vector<int> x;
    x.push_back(1);
    x.push_back(2);
    x.pop_back();
    x.insert(x.begin() + 1, 9);
    int t = x.size();
    x[1] += 10;
    int d[] = {3, 4, 5};     //v=[3,4,5]
    vector<int> v(d, d + 3); //int c (5);

    int b = v.size();

    x.insert(x.end(), v.begin(), v.end());         //x+=v
    x.insert(x.end(), v.begin() + 1, v.end() - 1); //v+= v[1:-1]
    cout<<x.size();
    x.erase(x.begin() + 2);
    x.erase(x.end()-1);
    cout<<x.size();
    for (int e : x)
        cout << e << endl;
    //iterator
    vector<int> r;
    for (int i = 2; i < 15; i++) //2-14
        r.push_back(i);
    vector<int>::iterator itr = r.begin(); //2
    ++itr;                                 //3
    int a = *(itr - 1) + *itr + *(itr + 3);
    cout << *(itr - 1) << endl; //2
    cout << *itr << endl;       //3
    cout << *(itr + 3) << endl; //6
    cout << a << endl;
    //v[i]//v.at[i]
    // reset(r); //r->vector of zero
    //cout<<r[0]<<endl; //2
    // reset(&r);
    //cout<<r[0]<<endl;//0
    int u[] = {113435, 2, 3, 4, 50987716};
    vector<int> i (u,u+5);
    cout << i.back()<<endl; cout << i.front()<<endl;
    vector<int>::iterator it = find(v.begin(), v.end(), 5);
    if (it != v.end())
        cout << 9 << endl;
    int sum = 0;
    for (auto p = i.begin(); p != i.end(); ++p)
    {
        sum += *p; // p คือต าแหน่ง *p คือตัวข ้อมูล
    }
    cout << sum << endl;
    sort(v.begin(), v.end());
    for (auto y : v)
        cout << y << "-";
    cout << "\n";
    vector<int> c(3, 100);
    vector<int> e(5, 200);
    c.swap(e);
    for (auto i : c)
        cout << i << "-";
    cout << "\n";
    for (auto i : e)
        cout << i << "-";
    cout << "\n";

    vector<int> j;
    j.push_back(23);
    vector<int>::iterator itr4;
    itr4 = j.begin();
    *itr4 = 99;
    cout << j[0] << endl;

    int q[] = {1,2,3,4,5,6};
    vector<int> ee (q,q+6);
    ee.erase(ee.begin()+1,ee.begin()+4);
    for(auto p :ee)
        cout<<p<<" ";

    return 0;
}