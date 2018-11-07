#include <functional>
#include <iostream>
using namespace std;
int main(){
    hash<string> hStr;
    hash<float> hFloat;
    hash<int> hInt;

    cout<< hStr("Kris") << endl;
    cout<< hFloat(4.00f) << endl;
    cout<< hInt(25) << endl;

    cout<< hash<string>()("Kris") << endl;
    cout<< hash<float>()(4.00f) << endl;
    cout<< hash<int>()(25) << endl;
    return 0;
}