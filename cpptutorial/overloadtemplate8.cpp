#include <iostream>
using namespace std;
//overloaded function
int op(int a,int b){
    return (a+b);
}
int op(double a, double b){
    return a*b;
}
//====================
//template
template <class Kris> //create common class for all type to sum up overloaded function
Kris sum(Kris a,Kris b){
    return a+b;
}
// template arguments
template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}
int main(){
    cout << op(3,5)<<endl;
    cout << op(3.0,5.0)<<endl;
    cout << sum(4,5)<<endl;
    cout << sum<int>(4.5,5.0)<<endl;
    cout << fixed_multiply<int,2>(10) << '\n';
    return 0;
}