#include <iostream>
#include <vector>
using namespace std;
class Student{
private:
    float GPA;
public:
    string name;
    string ID;
    Student(){
        name = "Kris";
        ID = "3";
        GPA = 4.00;
    }
    Student(string n,string i,float g){
        name = n;
        ID = i;
        GPA = g;
    }
    float getGPA(){
        return GPA;
    }
    bool operator<(const Student &other)const{
        return GPA > other.GPA;
    }
};
int main(){
    vector<Student> v;
    Student a("Max","12",3.21);
    Student b("Kris","03",3.88);
    v.push_back(a);
    v.push_back(b);
    sort(v.begin(),v.end());
    for (auto u:v)
        cout<< u.getGPA()<<" ";
    return 0;
}