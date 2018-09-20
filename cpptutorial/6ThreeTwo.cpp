#include <iostream>
#include <map>
#include <queue>
using namespace std;
//     0  1  2  3  4  5 6 7 8 9 ... 27
//prev 1 -1  0  1  9  0 0 0 0 3 ... 9    v=27
void showSolution(int v, map<int,int> &prev){ 
    string out = "";
    while(prev[v] != -1){
        if(prev[v]*3 == v){
            out = "x3"+out;
        }else{
            out = "/2"+out;
        }
        v = prev[v];
    }
    out = "1"+out;
    cout<<out<<endl;
}
void m3d2(int target){
    map<int,int> prev;
    queue<int> q;
    int v = 1; //target = 27
    q.push(1); prev[1] = -1;
    while(!q.empty()){
        v = q.front(); q.pop(); //1  /2/0 /3/3 /4/1 /5/9
        if(v == target) break;// v=27 break
        int v2 = v/2; //0 //3/1 /5/4
        int v3 = v*3; //3 //3/9 /5/27
        if(prev[v2] == 0){q.push(v2); prev[v2]=v;}//prev[0]=1 /2/- /3/- /4/- /5/prev[4]=9
        if(prev[v3] == 0){q.push(v3); prev[v3]=v;}//prev[3]=1 /2/- /3/prev[9]=3 /4/- /5/prev[27]=9
    }//q 0 3/ 3 /1 9/9 /27
    if (v==target) showSolution(v, prev);
}//    0  1  2  3  4  5 6 7 8 9 ... 27
//prev 1 -1  0  1  9  0 0 0 0 3 ... 9
int main(){
    cout<<"target:"; 
    int a ;
    cin >> a;
    m3d2(a);
}