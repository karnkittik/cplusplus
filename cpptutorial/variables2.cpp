#include <iostream>
using namespace std;
int main(){
    int a = 9;
    a = a+1;
    cout<< a<<endl;
    //declaration
    float mynumber;//type identifier = initial_value
    int b (3); //type identifier (initial_value);
    cout << b<<endl;
    int foo = 0;
    auto bar = foo; // the same as: int bar = foo;
    decltype(foo) t;// the same as: int bar;
    // auto y;  error
    cout<<bar<<endl;
    //String
    string mystring = "Hello";
    cout << mystring<<endl;
    return 0;
}