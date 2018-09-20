#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> words;
    Tokenizer tokenizer(filename);
    while(tokenizer.hasNext()){
        string token = tokenizer.next();
        if(words.end() == find(words.begin(),words.end(),token))
        words.push_back(token);
    }
    tokenizer.close();
    cout << "A total of "<<words.size()<<" words"<<endl;

}