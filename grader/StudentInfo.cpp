#include <iostream>
#include <vector>
#include <sstream>
#include <set>
#include <algorithm>
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
template <class T>
void print(vector<T> v) {
    //cout << "[";
    for (auto it=v.begin(); it!=v.end();) {
        cout << *it;
        if (++it != v.end()) cout << " ";
    }
    cout << "\n";
}
template <class T>
int intersection(vector<T> & a,vector<T> & b){
    vector<T> result;
    set<T> c (a.begin()+1,a.end());
    set<T> d (b.begin(),b.end());
    set_intersection(c.begin(),c.end(),d.begin(),d.end(),back_inserter(result));
    return result.size();
}
int main() {
    int n;
    vector< vector<string> > students;
    cin>>n;
    for(int i =0;i<n;i++){
        vector<string> str = input_split<string>();
        students.push_back(str);
    }
    vector<string> search = input_split<string>();
    vector<vector<string> > found;
    for(auto it = students.begin();it!=students.end();++it){
        if (intersection(*it,search) == search.size()){
            found.push_back(*it);
        }
    }
    sort(found.begin(),found.end());
    //cout<<"##################"<<"\n";
    for(auto u:found){
        print(u);
    }
    if(found.size()==0)
        cout<<"Not Found";
    return 0;
}
