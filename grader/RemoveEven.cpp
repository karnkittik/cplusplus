#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v, int a, int b)
{
    int i = 0;
    vector<int> k;
    for (auto it = v.begin(); it!=v.end(); ++it)
    {   
        if (not(i>=a && i<=b && i%2==0)) {
            k.push_back(*it);
        }
        i++;
    }
    v = k;
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
    //cout<<"."<<"\n";
    cin >> a >> b;
    //call function
    
    remove_even(v, a, b);
    //display content of the vector
    for (auto &x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}