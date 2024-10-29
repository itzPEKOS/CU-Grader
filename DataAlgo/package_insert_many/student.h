#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  int new_size = mSize + data.size();
  T *new_array = new T[mSize + data.size()];
  std::sort(data.begin(),data.end());
  int j = 0, ind = 0;
  for(auto& [index, value] : data) {
    for(int i = ind; i < index + j; i++) {
      new_array[ind++] = mData[i-j];
    }
    new_array[ind++] = value;
    j++;
  }

  while(ind - j < mSize) {
    new_array[ind++] = mData[ind-j];
  }

  delete[] mData;
  mData = new_array;
  mSize += data.size();
  mCap = mSize;
}

#endif
