#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <sstream>

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

int main()
{
    int n;
    cin >> n;
    map<string, map<string, int>> count;
    for (int k = 0; k < n; ++k)
    {
        vector<string> x = input_split<string>();
        set<string> events(x.begin(), x.end());
        for (auto e1 : events)
        {
            if (count.find(e1) == count.end())
            {
                count[e1] = map<stirng, int>();
                for (auto e2 : events)
                {
                    if (e1 != e2)
                    {
                        if (count.find(e2) == count.end())
                            count[e1][e2] = 0;
                        count[e1][e2] += 1;
                    }
                }
            }
        }
    }
    string event; 
    cin >> event;
    if (count.find(event) == count.end()){
        cout << "Not found";
    } else if (count[event].size() == 0){
        cout << "No suggested event";
    } else {
        vector<pair<int,string>> out;
        for (auto kv : count[event]){
            out.push_back.(make_pair(-kv.second, kv.first));

        }
        sort(out.begin(), out.end());
        for (auto ce:out){
            cout << ce.second << " " << -ce.first;
        }
    }
}