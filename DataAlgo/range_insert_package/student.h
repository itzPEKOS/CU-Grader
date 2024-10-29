#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {

  int insert_size = last - first;
  T *new_array = new T[mSize + insert_size];
  int j = 0;
  for(int i = 0; i < position - begin(); i++) {
    new_array[j++] = mData[i];
  }
  int k = j;
  while(first < last) {
    new_array[j++] = *first;
    first++;
  }
  for(size_t i = k; i < mSize; i++) {
    new_array[j++] = mData[i];
  }

  delete[] mData;
  mData = new_array;
  mSize = mSize + insert_size;
  mCap = mSize;
}

#endif
