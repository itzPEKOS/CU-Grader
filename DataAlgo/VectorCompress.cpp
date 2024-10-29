#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>

void CP::vector<T>::compress() {
    T *new_array = new T[mSize];
    for(size_t i = 0; i < mSize; i++) {
        new_array[i] = mData[i];
    }

    delete[] mData;
    mData = new_array;
    mCap = mSize;
}

#endif