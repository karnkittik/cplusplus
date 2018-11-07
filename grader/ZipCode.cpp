#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
class Letter
{
  public:
    string name;
    string address;
    string province;
    string district;
    int zip;
    bool operator<(const Letter &other) const {
        if(other.zip!=zip)
            return zip<other.zip;
        if(other.address!=address)
            return address<other.address;
        return name<other.name;
        //**Begin Insert**
        //**End Insert** }
    }
    };
class ZipInfo
    {
      public:
        int zip;
        string province;
        string district;
    };
void correctZipAndSortLetters(vector<ZipInfo> &zipinfo, vector<Letter> &letters)
    { 
        map< pair<string,string>, int > data;
        for(auto z : zipinfo){
            data[make_pair(z.province,z.district)] = z.zip;
        }
        for(auto l=letters.begin();l!=letters.end();l++){
            l->zip = data[make_pair(l->province,l->district)];
        }
        sort(letters.begin(),letters.end());
        //**Begin Insert**
        //**End Insert** }
    }
int main()
        {
            int nzip;
            cin >> nzip;
            vector<ZipInfo> zipinfo;
            for (int i = 0; i < nzip; i++)
            {
                ZipInfo z;
                cin >> z.zip >> z.district >> z.province;
                zipinfo.push_back(z);
            }
            int n;
            cin >> n;
            vector<Letter> letters;
            for (int i = 0; i < n; i++)
            {
                Letter l;
                cin >> l.name >> l.address >> l.district >> l.province >> l.zip;
                letters.push_back(l);
            }
            correctZipAndSortLetters(zipinfo, letters);
            for (auto &l : letters)
            {
                cout << l.name << " " << l.address << " " << l.district << " " << l.province << " " << l.zip << endl;
            }
}

