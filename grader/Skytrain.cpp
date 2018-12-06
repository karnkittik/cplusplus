#include <iostream>
#include <vector>
#include <sstream>
#include <set>
#include <map>
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
int main()
{
    map<string, set<string> > data;
    string now;
    while (true)
    {
        vector<string> inp = input_split<string>();
        if (inp.size() == 1)
        {
            now = inp[0];
            break;
        }
        string a = inp[0], b = inp[1];
        data[a].insert(b);
        data[b].insert(a);
    }
    set<string> result;
    result.insert(now);
    for (auto u : data[now]) //1 2 3 4 5 6 7 8
    {
        result.insert(u);
        for (auto e : data[u])
            result.insert(e);
    }
    for (auto p : result)
        cout << p << "\n";
}