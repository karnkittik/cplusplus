#include <iostream>
#include <vector>
#include <algorithm> //use only sort function
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> c, d, k;
    for (int i = 0; i < a; i++)
    {   int j;
        cin >> j;
        c.push_back(j);
    }
    for (int i = 0; i < b; i++)
    {   int j;
        cin >> j;
        d.push_back(j);
    }
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    // 1 2 3 4
    // 2 6 5 4
    for (auto itc = c.begin(); itc != c.end(); itc++)
        {   for (auto itd = d.begin(); itd != d.end(); itd++)
            {   //if (*itc == *itd && find(c.begin(),c.end(),*itc)!= itc)
                if(*itc == *itd){
                    if(itc==c.begin()){
                        k.push_back(*itc);
                        break;}
                    if(*itc!=*(itc-1)){
                        k.push_back(*itc);
                        break;
                    }

                }
            }
        }
    for(auto u:k)
        cout<<u<<" ";
    
}