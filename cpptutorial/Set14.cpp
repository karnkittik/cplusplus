#include <iostream>
#include <set>
using namespace std;
class reverseComp {

public:

bool operator() (const int& lhs, const int& rhs) const {

return rhs < lhs;

}

};

template <class Iterator>

void print(Iterator it, Iterator end) {

for(; it!=end; ++it) { cout << *it << ","; } cout << endl;

}

int main() {

set<int> s1;

set<int,reverseComp> s2;

for (int i=0; i<7; i++) {

s1.insert(i); s1.insert(i); s2.insert(i); s2.insert(i);

}

print(s1.begin(), s1.end()); print(s2.begin(), s2.end());

cout << "erase 5, erase(find(3))" << endl;

s1.erase(5); s1.erase(s1.find(3));

cout << "find 4: " << (s1.find(4)!=s1.end()) << endl;

cout << "find 5: " << (s1.find(5)!=s1.end()) << endl;

cout << "count 3: " << s1.count(3) << endl;

print(s1.begin(), s1.end());

return 0;}
int main()
{
    int a[] = {2, 1, 3, 4, 5, 6, 7};
    set<int> s;
    s.insert(4);
    s.insert(a, a + 2);
    for (auto r : s)
        cout << r << "-";
    cout << "\n";
    int b = s.size();
    cout << b << endl;
    s.erase(s.begin());
    cout << s.size() << endl;
    s.erase(s.begin(), s.end());
    cout << s.size() << endl;
    s.insert(a, a + 7);
    cout << s.size() << endl;
    auto p = s.begin(); //iterator
    ++p;
    ++p;
    ++p;
    //p = --(s.end());
    p = s.end();
    cout << *p << endl;
    for (auto o : s)
        cout << o << ".";
    cout << "" << endl;
    s.erase(s.begin());
    int t = find(s.begin(), s.end(), 2) != s.end() ? 4 : 5;
    cout << t << endl;
    set<int> myset;

    // set some initial values:
    for (int i = 1; i < 5; ++i)
        myset.insert(i * 3); // set: 3 6 9 12

    for (int i = 0; i < 10; ++i)
    {
        std::cout << i;
        if (myset.count(i) != 0)
            std::cout << " is an element of myset.\n";
        else
            std::cout << " is not an element of myset.\n";
    }
    
    return 0;
}