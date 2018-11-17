#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,int> a;
    for(int i =0 ; i<10;i++)
        a[i]++;
    if(a.find(5)!=a.end())
        cout<<"yes";
    int n=0;
    while(true){
        n++;
        if(n>20) break;
    }
    cout <<n;

}