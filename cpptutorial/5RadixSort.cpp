#include <iostream>
#include <queue>
using namespace std;
int getDigit(int v,int k){ //return the kth digit of v
    int i;
    for(i=0;i<k;i++) v/=10;
    return v%10;
    //15 0 -> 5
}
int getDigit2(int v, int k) { //return the kth digit of v
  static int powersof10[] = {1, 10, 100, 1000, 1000};
  return (v / powersof10[k]) % 10;
}

void radixSort(int data[], int n,int d){ //8 3
    //d = #digits
    int base = 10; //data = {21,11,15,123,43,658,97,45} สมมติ 15
    queue<int> q[base]; //   /0 /0/ 0/ 0/ 0/ 0/ 0/ 0/ 0/ 0/    มีqueue 
    for(int k=0;k<d;k++){
        for(int i=0;i<n;i++) //  /0/ 0/ 0/ 0 / 0 /0 / 0 /0 /0/ 0/
            q[getDigit(data[i],k)].push(data[i]); //ให้ q =ช่องที่ get.. = data[i] 
            //0/ 11/ 0/ 123 43/ 0 /15 45/ 21 /97 /658/ 0/
        for(int i=0,j =0;i<base;i++){
            while(!q[i].empty()){ //0/ 11 21/ 0/ 123 43/ 0 /15 45/ 21/97 /658/ 0/ i=1,j=0
                data[j++] = q[i].front(); //data[0] = q[1].front()   /11 21/.front data = {21,11,15,123,43,658,97,45}
                q[i].pop(); //0/ 21/ 0/ 123 43/ 0 /15 45/ 21/97 /658/ 0/
            }
        }

    }
}
int main(){
    int data[]= {21,11,15,123,43,658,97,45};
    radixSort(data,8,3);
    for(auto d:data){
        cout<<d<<".";
    }
}