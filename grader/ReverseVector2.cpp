#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v, vector<int>::iterator a, vector<int>::iterator b)
{   //v = 0 1 2 3 4 5 6  a = 2 b = 5
    vector<int> k(a,b);
    b--; //b = 4
    for(int i=0;i< k.size()-1 ;i++){
        v.insert(a, *b); // 0 1 4 2 3 4 5 6
        v.erase(++b); //   0 1 4 2 3 5 6
        a++;
        b--;
    }
       
}
int main()
{
    //read input
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    //call function
    reverse(v, v.begin() + a, v.begin() + b + 1);
    //display content of the vector
    for (auto &x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}