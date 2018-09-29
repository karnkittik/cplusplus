#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
string infix2postfix(string &infix){
    int n = infix.length();
    string postfix = "";
    stack<char> s;
    for(int i=0;i<n;i++){
        char token = infix[i];
        if(token is operand){
            postfix += token;
        }else{
            while(????){
                postfix += s.top();
                s.pop();
            }
            s.push(token);
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }
    return postfix;
}
int main(){

}