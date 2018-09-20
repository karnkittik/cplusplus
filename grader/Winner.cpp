#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
/* 
5
Chelsea Liverpool
ManU Liverpool
Liverpool ManU
Chelsea Arsenal
Everton ManCity
*/
int main(){
    int n;
    set<string> win, lose;
    vector<string> winner;
    cin>>n;
    for (int i = 0; i<n;i++){
        string a,b;
        cin>>a>>b;
        win.insert(a);
        lose.insert(b);
    }
    for (auto u: win){
        if(not(count(lose.begin(),lose.end(),u)>0)){
            winner.push_back(u);
        }
    }
    //sort(winner.begin(),winner.end());
    cout<<"[";
    for(vector<string>::iterator it=winner.begin();it!=winner.end();it++){
        if(it==winner.begin()+winner.size()-1){
            cout<<"'"<<*it<<"'";
            break;
        }
        cout<<"'"<<*it<<"', ";
    }
    cout<<"]";
    
    return 0;
}