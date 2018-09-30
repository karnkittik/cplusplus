// #include <iostream>
// #include <map>
// using namespace std;
// int main(){
//     map<string,int> d;
//     d["a"] = 20;
//     cout<<d["a"];
// }
#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
vector<string> split(const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;
    while (getline(ss, item, delim)) {
        result.push_back(item);
    }
    return result;
}


vector<string> splits(const string &s,char delim){
    vector<string> a;
    string item;
    stringstream ss (s);
    while(getline(ss,item,delim)){
        a.push_back(item);
    }
    return a;
}

int main() {
    string str = "adsf+qwer+poui+fdgh";
    vector<string> v = splits(str, '+');
    for (auto i : v) cout << i << endl;
    return 0;
}
