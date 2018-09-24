#include <iostream>
using namespace std;
template <class K>
class mypair{
    K values [2];
    public:
        mypair (K first,K second){
            values[0]=first;
            values[1]=second;
        }
};
template <class K>
class mypair2{
    K a,b;
    public:
    mypair2 (K first,K second){
        a = first;
        b = second;
    }
    K getMax();
};
template <class K>
K mypair2<K>::getMax(){
    K retval;
    retval = a>b ? a:b;
    return retval;
}
// class template:
template <class T>
class mycontainer {
    T element;
  public:
    mycontainer (T arg) {element=arg;}
    T increase () {return ++element;}
};

// class template specialization:
template <>
class mycontainer <char> {
    char element;
  public:
    mycontainer (char arg) {element=arg;}
    char uppercase ()
    {
      if ((element>='a')&&(element<='z'))
      element+='A'-'a';
      return element;
    }
};
int main(){
    mypair<int> myobject (115,36);
    mypair2<int> mb (22,39);
    cout<< mb.getMax()<<endl;
    mycontainer<int> myint (7);
    mycontainer<char> mychar ('j');
    cout << myint.increase() << endl;
    cout << mychar.uppercase() << endl;
    return 0;
}