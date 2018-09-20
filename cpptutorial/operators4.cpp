#include <iostream>
using namespace std;
int main(){
    int a,b;
    a = 10; b = 4;
    a = b;
    b = 7;   // a:4, b:7
    //increment and decrement
    ++a;
    a++;
    int x,y;
    x = 3;
    y = ++x; // x:4, y:4
    x = 3;
    y = x++; // x:4, y:3
    //conditional ternary
    int c = 7==5 ? 4:3 ;
    cout << c <<endl;
    //comma operator
    int d = (b=3,b+2);
    //convert type
    float j = 3.145F;
    int k = (int) j;
    int l = int(j); //cpp cant plus string and integer together not like Java
    int m = sizeof (char); // 1
    return 0;
}