#include <iostream>
#include <unordered_map>
#include <functional>
using namespace std;
class Book{
public: 
    string title;int edition;double price;
    Book(string title, int ed =1,double price =199.0) : 
    title(title),edition(ed),price(price){ }
};
class BookHasher{
public:
    size_t operator()(const Book &b)const{
        return hash<string>()(b.title) ^ hash<int>()(b.edition);
    }
};
class BookEqual{
public:
    bool operator()(const Book& b1,const Book& b2)const{
        return b1.title==b2.title && b1.edition==b2.edition;
    }
};
int main(){
    unordered_map<Book,string,BookHasher,BookEqual> m;
    m[Book("Data Structures",1,200)] = "reserved";
    m[Book("Algorithm",5,200)] = "available";
    Book b1("Data Structures", 1);
    Book b2("algorithm",5);
    cout<<1<<" "<<m[b1]<<endl;
    cout<<2<<" "<<m[b2]<<endl;
}
