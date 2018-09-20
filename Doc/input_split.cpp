#include <iostream>
#include <vector>
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
template <class T>
void print(vector<T> v) {
    cout << "[";
    for (auto it=v.begin(); it!=v.end();) {
        cout << *it;
        if (++it != v.end()) cout << ", ";
    }
    cout << "]\n";
}
int main() {
    int a1;
    float a2;
    string a3;
    cin >> a1 >> a2 >> a3;
    cout << a1 << ", " << a2 << ", " << a3 << endl;

    vector<int> v1 = input_split<int>();
    print(v1);
    vector<string> v2 = input_split<string>();
    print(v2);

    return 0;
}
