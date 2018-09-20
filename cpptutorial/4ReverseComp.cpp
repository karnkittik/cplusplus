#include <iostream>
#include <set>
using namespace std;
class reverseComp
{
  public:
    bool operator()(const int &lhs, const int &rhs) const
    {
         return rhs < lhs;
    }
};

template <class Iterator>

void print(Iterator it, Iterator end)
{
    for (; it != end; ++it)
    {
        cout << *it << ",";
    }
    cout << endl;
}

int main()
{
    set<int> s1;

    set<int, reverseComp> s2;

    for (int i = 0; i < 7; i++)
    {

        s1.insert(i);
        s1.insert(i);
        s2.insert(i);
        s2.insert(i);
    }

    print(s1.begin(), s1.end());
    print(s2.begin(), s2.end());

    cout << "erase 5, erase(find(3))" << endl;

    s1.erase(5);
    s1.erase(s1.find(3));

    cout << "find 4: " << (s1.find(4) != s1.end()) << endl;

    cout << "find 5: " << (s1.find(5) != s1.end()) << endl;

    cout << "count 3: " << s1.count(3) << endl;

    print(s1.begin(), s1.end());

    return 0;
}