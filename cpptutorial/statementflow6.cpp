#include <iostream>
using namespace std;
int main()
{
    //selection
    int x = 7;
    if (x == 100)
        cout << "x is 100" << endl;
    else if (x>0)
        cout << "x is " << x << endl;
    else 
        cout << "error" <<endl;
    //iteration (loops)
    //while loop
    int n = 10;
    while (n>0){
        cout << n <<", ";
        --n;
    }
    //do while loop
    //do at least once
    string str;
    do {
        cout <<"enter text"<<endl;
        getline(cin, str);
        cout << "You entered: "<<str<<endl;
    }while (str != "goodbye"); //dont forget ;
    //for loop
    for (int i = 0; i<7;++i)
    cout << i << "-";
    int o,p;
    for (o=0,p=100;o!=p;++o,--p)
    cout<<o<<":"<<p<<" ";
    //range based for loop
    string u = "Hello";
    for (char e : u)
    cout<<e<<" ";
    cout<<'\n';
    //break continue
    //switch
    int y =4;
    switch (2*y){
        case 4:
        cout<<"y is 2";
        break; //break; is necessary 
        case 6:
        cout<<"y is 3";
        break;
        default://in case it doesnt match any case
        cout<<"unknown"; 
    }
    return 0;
}