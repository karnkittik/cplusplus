#include <iostream>
#include <vector>
using namespace std;
class Student{
    double GPA; // nothing else is specified means private
public:
    string name;
    string ID;
    Student(){
        name = "Kris";
        ID = "10";
        GPA = 4.00;
    }
    Student(string n,string i,float g);//this is constructor
    double getGPA();
    bool operator<(const Student &other)const{
        return GPA > other.GPA;
    }
};
class Kris{
    double gpax;
public:
    string name;
    string ID;
    Kris(){
        name = "Kris";
        ID = "63";
        gpax = 4.00;
    }
    double getGpax(){
        return gpax;
    }
};
class Rectangle {
  int width, height;
public:
  Rectangle(int x, int y) : width(x), height(y) {}
  int area(void) { return width * height; }
};
double Student::getGPA(){ //namespace
    return GPA;
}
//this is constructor
Student::Student(string n,string i,float g){
        name = n;
        ID = i;
        GPA = g;
}
int main(){
    vector<Student> v;
    Student a ("Max","12",3.21); //functional form
    Student b ("Ice","03",3.88); 
    Student c; // default constructor
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    for (auto u:v)
        cout<< u.getGPA()<<" ";
    Rectangle obj (3, 4);
    Rectangle * foo, * bar, * baz;
    foo = &obj;
    bar = new Rectangle (5, 6);
   // baz = new Rectangle[2] { {2,5}, {3,6} };
    cout << "obj's area: " << obj.area() << '\n';
    cout << "*foo's area: " << (*foo).area() << '\n';
    cout << "*bar's area: " << bar->area() << '\n';
    //cout << "baz[0]'s area:" << baz[0].area() << '\n';
    //cout << "baz[1]'s area:" << baz[1].area() << '\n';       
    delete bar;
    delete[] baz;
    return 0;
}