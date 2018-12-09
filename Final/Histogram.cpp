#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    map<string,int> words;
    cin >> n;
    for(int i=0;i<n;i++){
        string word;
        cin >> word;
        words[word] += 1;
    }
    for(map<string,int>::iterator it= words.begin();it!=words.end();++it){
        if(it->second>1)
        cout<<it->first<<" "<<it->second<<endl;
    }
}