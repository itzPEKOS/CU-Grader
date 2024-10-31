#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    if(pos >= mSize) {
        return;
    }
    T m2f = mData[(mFront+pos)%mCap];
    T t = mData[mFront];
    mData[mFront] = m2f;
    for(size_t i = mFront+1; i < mFront+pos+1; i++) {
        T tmp = mData[i%mCap];
        mData[i%mCap] = t;
        t = tmp;
    }
}

#endif
