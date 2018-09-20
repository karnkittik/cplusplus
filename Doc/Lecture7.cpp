 #include <iostream>
 #include <vector>
 #include <algorithm>
 using namespace std;
 int main(){
    vector<int> v;
    for (int i = 12;i>0;i--)
        v.push_back(i);
    sort(v.begin(),v.end());
    for(auto c:v){
        cout<<c<<" ";
    }

 }