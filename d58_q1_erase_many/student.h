#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  size_t n = pos.size();size_t j = 0;
  auto it = begin();
  for(size_t i=0;i<n;i++){
    erase(it+pos[i]-(j++));
  }

  // int k=0;
  // for(int i=0;i<mSize;i++){
  //   while(k<pos.size()&&(i+k)==pos[k])k++,mSize--;
  //   mData[i]=mData[i+k];
  // }
}

#endif
