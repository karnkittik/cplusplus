#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    priority_queue<int> q; //priority_queue<int, vector<int>, less<int>> q;
    //default คือออโต้เรียงจากน้อยไปมาก
    int a[] = {30,40,1,35};
    for(int e: a)
        q.push(e);
    cout<<q.top()<<endl;//ได้มากสุดออกก่่อน //40
    q.pop();
    cout<<q.top()<<endl;//35
    priority_queue<int, vector<int>, greater<int> > r;
    priority_queue<int, vector<int>, less<int> > l; 
    for(int e: a)
        r.push(e);    
    cout<<r.top()<<endl;//ได้น้อยสุดออกก่่อน //1
    r.pop(); 
    cout<<r.top()<<endl;//30
    //kth sort
    int n, k, d;
    cin >> n >> k;
    int x[n];
    for (int i = 0; i < n; ++i)
    {   cin >> x[i];
    }
    sort(x, x + n);
    cout << x[n - k] << endl;
    //kth min-priority queue
    priority_queue<int, vector<int>, greater<int> > g;
    int m, u, y;
    cin >> m >> u;
    for (int i = 0; i < u; ++i)
    {   cin >> y;
        g.push(y);
    }
    for (int i = u; i < m; ++i)
    {   cin >> y;
        if (y > g.top())
        {   g.pop();
            g.push(y);
        }
    }cout << g.top() << endl;
    //remark ใช้ฟังก์ชันสร้างไพร คิวมา เก็บค่าเข้า แล้วเปลี่ยนค่าของเดิมจากอาเรย์ที่รับไป
    //ก็จะได้เรียงจากมากไปน้อยแล้ว
    //ดูโจทย์ simulation เพิ่มเติมใน slide
    return 0;


}