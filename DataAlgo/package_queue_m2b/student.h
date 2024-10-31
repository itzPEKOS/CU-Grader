#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  T m2b = mData[(mFront+pos)%mCap];
  for(size_t i = mFront+pos; i < mFront+mSize-1; i++) {
    mData[i%mCap] = mData[(i+1)%mCap];
  }
  mData[(mFront+mSize-1)%mCap] = m2b;
}

#endif
