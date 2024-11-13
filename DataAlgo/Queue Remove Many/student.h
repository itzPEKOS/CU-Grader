#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  T *new_array = new T[mSize-pos.size()];
  int arr[mSize] = {0};
  for(auto it : pos) {
    arr[it] = 1;
  }
  int j = 0;
  for(size_t i = 0; i < mSize; i++) {
    if(!arr[i]) {
      new_array[j++] = mData[(mFront+i)%mCap];
    }
  }
  delete[] mData;
  mData = new_array;
  mFront = 0;
  mSize = mSize-pos.size();
  mCap = mSize;
}

#endif
