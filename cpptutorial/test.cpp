#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,int> a;
    for(int i =0 ; i<10;i++)
        a[i]++;
    if(a.find(5)!=a.end())
        cout<<"yes";
    int n=0;int i=0;
    for(int n=0;n<20;n++) 
    {++i;cout<<i;}
    cout <<i;
    cout<< 6%4<<" "<<-6%4;
    int o=3;
    int k = 1;
    for(int i=0;i<o;i++) k*=2;
    k-=1;
    int mid = k/2+1;
    cout<<k<<mid;

}