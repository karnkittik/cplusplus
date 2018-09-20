#include <iostream>
#include <vector>
#include <sstream>
#include <map>
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
int main() {
    vector<int> v = input_split<int>();
    map<int,int> count;
    for(auto u:v)
        count[u] += 1;
    bool have = false;
    for(auto it:count){
        if(it.second ==1 ){
            cout<<it.first;
            have = true;
            break;
        }
    }
    if (not have)
        cout<<"NONE";
    return 0;
}
