#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
class Province{
    public:
    Province(string filename){
        ifstream fi (filename);
        string name,th,eng;
        while(fi>>name>>th>>eng){
            names[name].first = th;
            names[name].second = eng;
        }
        fi.close();
    }
    string abbrTH(string name) {return names[name].first;}
    string abbrEN(string name) {return names[name].second;}
private:
map<string, pair<string,string> > names;
};
int main()
{
    map<int, string> m;
    m[5] = "five"; //similar to Array
    string h[] = {"hello", "hello", "bye", "dog"};
    map<string, int> wordFreq;
    for (auto i : h)
    {
        wordFreq[i] += 1;
    }
    map<string, int>::iterator it;
    for (it = wordFreq.begin(); it != wordFreq.end(); ++it)
    {
        if (it->second > 1)
        { 
            cout << it->first << ", " << it->second << endl;
        }
    }
    auto p = wordFreq.find("hello");
    //wordFreq.erase(p);
    wordFreq.erase("f");
    cout << wordFreq.size() << endl;
    cout << m.size() << endl;
    wordFreq.erase(p, wordFreq.end()); // delete by range
    std::map<char, int> mymap;
    char c;
    mymap['a'] = 101;
    mymap['c'] = 202;
    mymap['f'] = 303;
    for (c = 'a'; c < 'h'; c++)
    {
        std::cout << c;
        if (mymap.count(c) > 0)
            std::cout << " is an element of mymap.\n";
        else
            std::cout << " is not an element of mymap.\n";
    }
    Province y;
    cout<<y.abbrTH("ตราด") <<", "<< y.abbrEN("Trat")<<endl;
    return 0;
}