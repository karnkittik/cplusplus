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
    Student(string n,string i,float g){
        name = n;
        ID = i;
        GPA = g;
    }
    double getGPA();
    /*float getGPA(){
        return GPA;
    }*/
    bool operator<(const Student &other)const{
        return GPA > other.GPA;
    }
};
double Student::getGPA(){ //namespace
    return GPA;
}
int main(){
    vector<Student> v;
    Student a("Max","12",3.21);
    Student b("Ice","03",3.88);
    Student c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    for (auto u:v)
        cout<< u.getGPA()<<" ";
    //this is test for git
    return 0;
}