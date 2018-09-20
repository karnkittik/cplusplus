#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1,vector<int> &v2,
  int s1, int e1, 
  int s2, int e2)
  {
  vector<int> u1 (v1.begin()+s1,v1.begin()+e1); //1 2 3 4
  vector<int> u2 (v2.begin()+s2,v2.begin()+e2); //6 7
  v2.erase(v2.begin()+s2,v2.begin()+e2); //5 - - 8 9
  v1.erase(v1.begin()+s1,v1.begin()+e1); //0 - - - -
  if(s2<v2.size()){
    v2.insert(v2.begin()+s2,u1.begin(),u1.end());
  }else{
    v2.insert(v2.end(),u1.begin(),u1.end());}
  if(s1<v1.size()){
    v1.insert(v1.begin()+s1,u2.begin(),u2.end());}
  else{
    v1.insert(v1.end(),u2.begin(),u2.end());}
}
int main() {
  //read input
  int n,c;
  vector<int>v1,v2;
  cin >> n; //number of v1
  for (int i = 0;i < n;i++) {
    cin >> c;
    v1.push_back(c);
  }
  cin >> n; //number of v2
  for (int i = 0;i < n;i++) {
    cin >> c;
    v2.push_back(c);
  }
  int s1,e1,s2,e2; //position
  cin >> s1 >> e1 >> s2 >> e2;
  //call the function
  vector_swap(v1,v2,s1,e1,s2,e2);
  //display content of the stack
  cout << "v1 has " << v1.size() << endl;
  for (auto &x : v1) { cout << x << " "; }
  cout << endl;
  //display content of the stack
  cout << "v2 has " << v2.size() << endl;
  for (auto &x : v2) { cout << x << " "; }
  cout << endl;
}