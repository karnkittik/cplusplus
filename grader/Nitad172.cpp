#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <sstream>
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
bool mycomp(const pair<int, string> &a, const pair<int, string> &b)
{
    return a.first > b.first;
}
int main()
{
    int n;
    cin >> n;
    vector<set<string> > data;
    for (int i = 0; i < n; i++)
    {
        vector<string> v = input_split<string>();
        set<string> s;
        for (auto u : v)
        {
            s.insert(u);
        }
        data.push_back(s);
    }
    string want;
    bool found = false, exist = false;
    cin >> want;
    map<string, int> count;
    for (auto u : data)
    {
        if (u.count(want) > 0)
        {
            found = true;
            for (auto c : u)
            {
                if (c != want)
                {
                    exist = true;
                    count[c] += 1;
                }
            }
        }
    }
    vector<pair<int, string> > result;
    for (auto u : count)
    {
        result.push_back(make_pair(u.second, u.first));
    }
    sort(result.begin(), result.end(), mycomp);
    if (not found)
    {
        cout << "Not Found";
    }
    else if (not exist)
    {
        cout << "No suggested event";
    }
    else
    {
        for (auto u : result)
        {
            cout << u.second << " " << u.first << "\n";
        }
    }
}