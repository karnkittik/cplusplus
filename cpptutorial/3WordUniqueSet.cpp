#include <iostream>
#include <set>
using namespace std;
int main(){
    set<string> words;
    Tokenizer tokenizer("dickens.txt");
    while(tokenizer.hasNext()){
        words.insert(tokenizer.next());
    }
    tokenizer.close(
        cout << "A total of " << words.size() << " words" << endl;
    )
}