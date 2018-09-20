#include <iostream>
#include <vector>
#include <sstream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
template <class T>
vector<T> input_split()
{
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
void print(vector<T> v)
{
    cout << "[";
    for (auto it = v.begin(); it != v.end();)
    {
        cout << *it;
        if (++it != v.end())
            cout << ", ";
    }
    cout << "]\n";
}
bool mycomp(pair<int,string> a,pair<int,string> b){
    if (a.first == b.first)
        return a.second< b.second;
    return a.first > b.first;
}
int main(){
    int n;
    cin>>n;
    vector<set<string> > data;
    for(int i = 0; i<n;i++){
        vector<string> v = input_split<string>();
        set<string> s;
        for(auto y:v)
            s.insert(y);
        data.push_back(s);
    }
    string want;
    cin>>want;
    map<string,int> count;
    bool found = false,exist = false;
    for(auto u:data){
        if (u.count(want)!=0){
            found = true;
            for(auto t:u){
                if(t!=want){
                    exist = true;
                    count[t] += 1;
                }
            }
        }
    }
    vector<pair<int,string> > rcount;
    for(auto it:count){
        rcount.push_back(make_pair(it.second,it.first));
    }
    sort(rcount.begin(),rcount.end(),mycomp);
    if (not found)
        cout<<"Not Found";
    else if (not exist)
        cout<<"No suggested event";
    else{
        cout<<rcount[0].second<<"\n";
        cout<<rcount[0].first<<"\n";
    }       
}