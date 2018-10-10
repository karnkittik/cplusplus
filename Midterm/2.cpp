#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> q;
    priority_queue< int,vector<int>, greater<int> > r;
    vector<int> v;
    for(int i=0;i<10;i++){ v.push_back(i); q.push(i);r.push(i);}
    sort(v.begin(),v.end(),greater<int>() );
    for(auto y :v) cout<<y;
    cout<<q.top(); cout<<r.top();
}