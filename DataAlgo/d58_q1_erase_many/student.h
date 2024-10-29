#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  T *new_array = new T[mSize - pos.size()];
  int ind = 0;
  int arr[mSize] = {0};
  for(auto it : pos) {
    arr[it] = 1;
  }
  for(size_t i = 0; i < mSize; i++) {
    if(arr[i]) continue;
    new_array[ind++] = mData[i];
  }

  delete[] mData;
  mData = new_array;
  mSize -= pos.size();
  mCap = mSize;
}

#endif
