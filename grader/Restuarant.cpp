#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m; // 3 10
    int q[n];
    for(int i=0;i<n;i++)
        { int a;cin>>a; q[i]=a;}
    //for(auto i:q) cout<<i;
    int mint = 0;
    int pr = 0;
    while(true){
       for(auto i:q){
            //if(i!=0 and i>mint) continue;
            if(i==0|| mint%i==0){
                cout<<mint<<"\n";
                pr+=1;
                if(pr==m) 
                {break;}
            }
        if(pr==m) 
                {break;}
        }
    if(pr==m) 
                {break;}
    ++mint;
    }
    return 0;
}
