#include <iostream>
using namespace std;
int far; //global variable
void func1()
{
    int bar;
    bar = 0; //local variable
}
void func2()
{
    far = 1; //ok: foo is a global variable
    //bar =2; //wrong: bar is not visible from this func
}
//namespace
namespace foo
{
int value() { return 5; }
} // namespace foo

namespace bar
{
const double pi = 3.1416;
double value() { return 2 * pi; }
} // namespace bar
//using
namespace first
{
int x = 5;
int y = 10;
} // namespace first

namespace second
{
double x = 3.1416;
double y = 2.7183;
} // namespace second
//inner scope
int main()
{
    int x = 10;
    int y = 20;
    {
        int x;  //ok, inner scope
        x = 50; //set value to inner x
        y = 50; //set value to outer y
        cout << x << endl;
        cout << y << endl;
    }
    cout << x << endl;
    cout << y << endl;
    //namespace
    cout << foo::value() << '\n';
    cout << bar::value() << '\n';
    cout << bar::pi << '\n';
    //using
    using first::x;
    using second::y;
    cout << first::y << '\n';
    cout << second::x << '\n';
}