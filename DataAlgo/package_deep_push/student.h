#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  T *arr = new T[mSize+1];
  int j = 0;
  for(size_t i = 0; i < mSize+1; i++) {
    if(mSize-i == pos) {
      arr[i] = value;
    } else {
      arr[i] = mData[j++];
    }
  }

  delete[] mData;
  mData = arr;
  mSize++;
  mCap = mSize;
}

#endif
