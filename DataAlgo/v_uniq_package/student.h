#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <map>
#include <vector>

template <typename T>
void CP::vector<T>::uniq() {
  std::map<T,int> vis;
  std::vector<T> v;
  for(size_t i = 0; i < mSize; i++) {
    if(!vis[mData[i]]) v.push_back(mData[i]);
    vis[mData[i]] = 1;
  }

  T *new_array = new T[v.size()];
  for(size_t i = 0; i < v.size(); i++) {
    new_array[i] = v[i];
  }

  delete[] mData;
  mData = new_array;
  mSize = v.size();
  mCap = mSize;
}

#endif
