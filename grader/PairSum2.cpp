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
    set<int> s;
    for(auto u:v)
    s.insert(u);
    int want; cin>>want;
    int count =0;
    for(auto c:s){
        if (s.count(want-c)>0)
        count+=1;
    }
    cout<<count/2;
}