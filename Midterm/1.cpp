#include <iostream>
#include <vector>
using namespace std;
vector<int> removeAll(vector<int>& v1, int x){
    for(auto it = v1.end()-1;it>=v1.begin();it--){
        if(*it == x){
            v1.erase(it);
        }
    }
    return v1;
}
int main(){
    vector<int> a;
    for(int i=0;i<10;i++)
        a.push_back(i/2);
    removeAll(a,2);
    for(auto i:a) 
        cout << i<<" ";
}