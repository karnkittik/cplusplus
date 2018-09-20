#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n;i++)
        cin>>a[i];
    for(int i=0; i<m;i++)
        cin>>b[i];
    vector<int> c (a,a+n); vector<int> d (b,b+m);
    set<int> y (a,a+n);
    /////////////////////////
    for(auto p:d){
        string can = "NO";
        for(vector<int>::iterator e=c.begin();e!=c.end();e++){
            if(y.count(p-*e)>0)
                {can = "YES";
                break;}
        }
        cout<<can<<endl;
    }
    return 0;
}