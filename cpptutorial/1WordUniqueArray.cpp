#include <iostream>
using namespace std;
bool search(string words[],int n,string w){
    for (int i=0;i<n;i++)
        if (words[i] == w) return true;
    return false;
}
int main(){
    string words[10000];
    int n = 0;
    Tokenizer tokenizer("dickens.txt");
    while(tokenizer.hasNext()){
        string token = tokenizer.next();
        if (!search(words,n,token)) words[n++] = token;
    }
    tokenizer.close();
    cout << "A total of"<< n<<" words"<<endl;
}