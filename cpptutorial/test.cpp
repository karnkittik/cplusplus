#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,int> a;
    for(int i =0 ; i<10;i++)
        a[i]++;
    if(a.find(5)!=a.end())
        cout<<"yes";

}