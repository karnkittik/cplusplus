#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  // size_t n = pos.size();size_t j = 0;
  // auto it = begin();
  // for(size_t i=0;i<n;i++){
  //   erase(it+pos[i]-(j++));
  // }

    int i = 1;
    int point = 1;
    int x = pos[0];
    for(int n = pos[0]+1; n<mSize; n++){
        if(point<pos.size()&&n == pos[point]){
            i++;point++;
        }
        else{
            mData[x] = mData[x+i];
            x++;
        }
        //for(int i=0; i<mSize;i++) std::cout<<mData[i]<<" ";
        //std::cout<<"\n";
    }
    mSize = mSize-pos.size();
}

  // int k=0;
  // for(int i=0;i<mSize;i++){
  //   while(k<pos.size()&&(i+k)==pos[k])k++,mSize--;
  //   mData[i]=mData[i+k];
  // }

#endif
