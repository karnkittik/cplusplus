#include <iostream>
using namespace std;
class CVector {
public:
    int x,y;
    CVector () {};
    CVector (int a,int b) : x(a), y(b) {} //constuctor
    CVector operator + (const CVector&);
};

CVector CVector::operator+ (const CVector& param) {
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return temp;
}// function that returns a CVector
class Dummy {
  public:
    static int n;
    Dummy () { n++; };
};
int Dummy::n=0;
class MyClass {
  public:
    int x;
    MyClass(int val) : x(val) {}
    int get() {return x;}
};
int main () {
  CVector foo (3,1);
  CVector bar (1,2);
  CVector result;
  result = foo + bar;
  cout << result.x << ',' << result.y << '\n';
  Dummy a;
  Dummy b[5];
  cout << a.n << '\n';
  Dummy * c = new Dummy;
  cout << Dummy::n << '\n';
  delete c;
  
  const MyClass doo(10);
// foo.x = 20;            // not valid: x cannot be modified
  cout << doo.x << '\n';  // ok: data member x can be read
  return 0;
}