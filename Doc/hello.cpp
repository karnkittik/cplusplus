#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> freq;
    int input;
    cin >> input; 
    while (input != -1){
        freq.push_back((int) input);
        cin >> input;
    } //0 1 2 3 4 4 5 6 7
    sort(freq.begin(),freq.end());
    int m = freq[freq.size()/2];
    int count = 0;
    for (int e: freq){
        if (e == m)
            count ++;
    }
    if (count > freq.size()/2)
        cout<< m <<endl;
    else
        cout<<"Not found";
    return 0;

}