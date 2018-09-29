#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string,int> count;
    int m=0; string s="";    string a;  
    int n; cin>>n;
    for(int i=0;i<n;i++){
     cin>>a;
        count[a]+=1;
        if((count[a]>m)||(count[a]==m && a>s)){
            s=a;
            m=count[a];
        }
    }
        cout<<s<<" "<<m;
}
// int main(){
//     int n,k=0;
//     string a,r;
//     map<string,int> m;
//     cin>>n;
//     for(n;n--;){
//         cin>>a;
//         m[a]++;
//         if(m[a]>k||(m[a]==k&&a>r)){
//             k=m[a];r=a;
//         }
//     }
//     cout<<r<<" "<<k<<endl;
// }