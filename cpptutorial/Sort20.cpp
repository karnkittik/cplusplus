#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main(){
    int a[] = {3,1,4,2};
    sort(a,a+4);
    for(auto i:a)
        cout<<i<<" ";
    cout<<"\n";
    //////////
    vector<int> b (a,a+4);
    ///////use for map
    set<int> pr (b.begin(),b.end());
    map<int, vector<int>, greater<int> > g;
    sort(b.begin(),b.end());
     for(auto i:a)
        cout<<i<<" ";
    cout<<"\n";
    //////////
    //sort( iterator1, iterator2, function ); เรียก function
    //sort( iterator1, iterator2, comparator-object ); เรียก method opertor() of comparator object
    /*class Comparator{
        public: 
            bool operator()(const T& e1, const T&e2) const{
                ...
            }
    }
    */
    return 0;
}