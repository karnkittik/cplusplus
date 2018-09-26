#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void deep_push(const int element, int depth,T &v) {
  //write your code here
  if(depth == 0) {v.push_back(element);}
  else if(depth>v.size()) { v.insert(v.begin(),element);}
  else{v.insert(v.end()-depth,element);}
}
int main(){
    vector<int> v,u,t,w;
    for(int i=0;i<10;i++) v.push_back(i);
    u =v;t=v;w=v;
    deep_push(5,1,u);
    deep_push(5,500,w);
    deep_push(5,-1,t);
    for(auto d : u) cout<<d<<" ";
    for(auto d : w) cout<<d<<" ";
    for(auto d : t) cout<<d<<" ";
}