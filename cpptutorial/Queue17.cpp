#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    for (int i = 0; i < 10; i++)
    {
        q.push(i);
    }
    cout << q.size() << "\n";
    cout << q.front() + 25 << "\n"; //0+25
    cout << q.back() << "\n";
    q.pop();
    cout << q.front() << " " << q.size() << "\n"; //pop front
    while (!q.empty())
    {
        cout << q.front() << "\n";
        q.pop();
    }
    queue<int> y[10];
    for(auto d:y)
    //cout<<d<<",";cannot
    cout<<d.size()<<","; // 0,0,0,0,0,0,0,0,0,0,
}