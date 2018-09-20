#include <iostream>
#include <sstream>

using namespace std;
int main(){
cout << "Hi" << endl;
cout << "This"<<" is a "<<"statement"<<endl;
cout << "Hello" " World\n"<<endl;
int a,b;
cin >> a >> b; //spacebar is nothing
cout<< a <<":"<<b<<endl;
//getline
string name;
cout<<"What is your full name?"<<endl;
getline(cin,name);//spacebar is in string
cout << name<<"\n";
//stringstream
string mystr ("1204.4");
float myfloat;
stringstream(mystr) >> myfloat;
cout << myfloat << endl;
return 0;
}