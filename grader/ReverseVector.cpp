#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v, int a, int b)
{
    int i = 0, j = 1;
    vector<int> k;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (i > a && i <= b)
        {
            k.insert(k.end() - j, *it);
            j++;
        }
        else
            k.push_back(*it);
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
    cin >> a >> b;
    //call function
    reverse(v, a, b);
    //display content of the vector
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}