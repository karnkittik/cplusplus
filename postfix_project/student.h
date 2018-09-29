#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
using namespace std;
int eval(int a,int b,int s){
  if(s == 0) return a+b;
  if(s == 1) return a-b;
  if(s == 2) return a*b;
  if(s == 3) return a/b;
  return 0;
}
int eval_postfix(vector<pair<int,int> > v) {
  int value;
  while(v.size()>1){
    for(auto it=v.begin();it!=v.end();it++){
      if((*it).first == 0){
        value = eval((*(it-2)).second,(*(it-1)).second,(*it).second);
        v.erase(it);v.erase(it-1); 
        (*(it-2)).first = 1;(*(it-2)).second = value;
        break;
       }
    }
  }
  return v[0].second;
}

#endif
