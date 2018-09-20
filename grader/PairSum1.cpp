#include <iostream>
#include <vector>
#include <sstream>
#include <set>
using namespace std;
template <class T>
vector<T> input_split() {
    cin >> ws;
    string line;
    getline(cin, line);
    stringstream ss(line);
    T buf;
    vector<T> tokens;
    while (ss >> buf)
        tokens.push_back(buf);
    return tokens;
}
int main(){
    vector<int> v = input_split<int>();
    vector<int> k = v;
    int n; cin>>n;
    //cout<<n;
    int count=0;
    set<pair<int,int> > result;
    int j=0;
    for(auto u:v){
        j++;
        int i = 0;
        for(auto p:k){
            i++;
            if(n-u==p){
                if(not (result.count(make_pair(i,j))>0) && i!=j)
                    result.insert(make_pair(j,i));
            }
        }
    }
    //for(auto c:result)
    cout<<result.size();
    //cout<<c.first<<","<<c.second<<" ";
}