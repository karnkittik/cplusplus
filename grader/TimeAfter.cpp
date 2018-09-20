#include <iostream>
using namespace std;
int main(){
    int h,m,x;
    cin>>h>>m>>x;
    int a,b;
    a = x%60; //real min
    b = x/60; //real hour
    m += a;
    if (m>59){
        h += (m/60);
        m %= 60;
    }
    h += b;
    if (h>23){
        h %=24;
    }
    if(h<10){
        cout<<0;
    }
    cout<<h<<" ";
    if(m<10){
        cout<<0;
    }
    cout<<m<<endl;
    return 0;

}