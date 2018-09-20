#include <iostream>
using namespace std;
//type name (parameter1, parameter2)
int addition(int a, int b)
{
    return a + b;
}
//function with no type
void printmess(){
    cout<<"I'm a function!"<<endl;
}
//argument passed by value and reference
void duplicate(int &a,int &b,int &c){
    a*=2;
    b*=2;
    c*=2;
}
//default value
int divide(int a, int b=2){
    return a/b;
}
int main()
{
    cout<< addition(3,4)<<endl;
    printmess();
    int x=1,y=3,z=7;
    duplicate(x,y,z); //no return but change values of x y z
    cout << divide(20)<<endl;
    cout << divide(20,4)<<endl;
    return 0;
}