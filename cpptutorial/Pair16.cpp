#include <iostream>
#include <utility>
using namespace std;
int main(){
    pair<int,int> foo;
    pair<int,int> bar;
    foo = make_pair(10,20);
    bar = make_pair(10.5,'A'); //'A' is 65
    cout<<"foo: "<<foo.first<<", "<<foo.second<<endl;
    cout<<"bar: "<<bar.first<<", "<<bar.second<<endl;
    return 0;
}