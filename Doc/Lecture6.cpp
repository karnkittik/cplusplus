#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(3);
    s.push(21);
    s.push(34);
    s.push(23);
    int a = s.size();
    for(int i=0;i<a;i++){
        cout<< s.top()<<" " <<s.size() <<endl;
        s.pop();
    }
}