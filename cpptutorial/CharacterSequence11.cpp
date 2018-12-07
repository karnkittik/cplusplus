#include <iostream>
#include <string>
using namespace std;
int main(){
    char myword[] = "Hello";
    // {'H','e','l','l','o','\0'}
    //myword[5] = '\0'
    //cout << myword <<endl;
    string mystr = myword;
    cout << mystr.length(); //5
   // cout << mystr.c_str();
    cout << mystr;
    return 0;
}