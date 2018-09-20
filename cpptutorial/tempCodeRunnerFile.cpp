#include <iostream>
#include <queue>
using namespace std;
int getDigit(int v,int k){ //return the kth digit of v
    int i;
    for(i=0;i<k;i++) v/=10;
    return v%10;
}
void radixSort(int data[], int n,int d){
    //d = #digits
    int base = 10;
    queue<int> q[base];
    for(int k=0;k<d;k++){
        for(int i=0;i<n;i++)
            q[getDigit(data[i],k)].push(data[i]);
        for(int i=0,j =0;i<base;i++){
            while(!q[i].empty()){
                data[j++] = q[i].front();
                q[i].pop();
            }
        }

    }
}
int main(){
    int data[]= {15,123,43,658,97,45};
    radixSort(data,6,0);
    for(auto d:data){
        cout<<d<<".";
    }
}