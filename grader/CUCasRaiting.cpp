#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;
int main(){
    cout<<std::fixed<<std::setprecision(2);
    long int n;cin>>n;
    map<string,int> count,point;
    for(long int i = 0;i<n;i++){
        string a,b;int c;
        cin>>a>>b>>c;
        count[a]+=1; count[b]+=1;
        point[a]+=c; point[b]+=c;
    }
    for(auto c:point){
        cout<<c.first<<" "<< (c.second+0.0)/count[c.first]<<"\n";
    }
}