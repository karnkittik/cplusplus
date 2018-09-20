#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;
bool myveccomp(vector<string> e1, vector<string> e2){
    double a,b;
    stringstream (e1[1]) >>a;
    stringstream (e2[1]) >>b;
    return a>b;
}
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
template <class T>
void print(vector<T> v) {
    cout << "[";
    for (auto it=v.begin(); it!=v.end();) {
        cout << *it;
        if (++it != v.end()) cout << ", ";
    }
    cout << "]\n";
}
int main(){
    int n;
    map<string,int> depart;
    cin>>n;
    for(int i=0;i<n;i++){
        string a; int b;
        cin>>a>>b;
        depart[a]=b;
    }
    int m;
    vector<vector<string> > student;
    cin>>m;
    for(int i=0;i<m;i++){
        vector<string> inp = input_split<string>();
        student.push_back(inp);
    }
    vector<vector<string> > result;
    sort(student.begin(),student.end(),myveccomp);
    for(auto u:student){
        int j=2;
        while(true){
        if(depart[u[j]]>0){
            vector<string> k;
            k.push_back(u[0]);
            k.push_back(u[j]);
            result.push_back(k);
            depart[u[j]]-=1;
            break;
        }
        else{
            ++j;
        }
    }
    }
    sort(result.begin(),result.end());
    for(auto h:result){
        cout<<h[0]<<" "<<h[1]<<"\n";
    }
}
