#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a = 25;
    auto foo = &a;
    int baz = *foo;
    cout << "foo: " << foo << endl;
    cout << "a: " << a << endl;
    cout << "baz: " << baz << endl;
    int fv, sv;
    int *mypointer;
    mypointer = &fv;
    *mypointer = 10;
    mypointer = &sv;
    *mypointer = 20;
    cout << "firstvalue is " << fv << '\n';
    cout << "secondvalue is " << sv << '\n';
    int firstvalue = 5, secondvalue = 15;
    int *p1, *p2;

    p1 = &firstvalue;
    p2 = &secondvalue;
    *p1 = 10;
    cout << "fv" << firstvalue << endl;
    cout << "sv" << secondvalue << endl;
    *p2 = *p1;
    cout << "sv" << secondvalue << endl;
    cout << p1 << endl;
    p1 = p2;
    cout << p1 << endl;
    cout << "fv" << firstvalue << endl;
    *p1 = 20;
    cout << "fv" << firstvalue << endl;
    cout << "sv" << secondvalue << endl;
    cout << M_PI;
    int numbers[5];
    int *p;
    p = numbers;
    *p = 10;
    p++;
    *p = 20;
    p = &numbers[2];
    *p = 30;
    p = numbers + 3;
    *p = 40;
    p = numbers;
    *(p + 4) = 50;
    for (int n = 0; n < 5; n++)
        cout << numbers[n] << ", ";

    return 0;
}
