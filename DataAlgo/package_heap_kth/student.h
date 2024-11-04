#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  if(k == 2) {
    if(mLess(mData[1],mData[2])) {
      return mData[2];
    }
    return mData[1];
  } else if(k == 3) {
    T tmp;
    if(mLess(mData[1],mData[2])) {
      tmp = mData[1];
    } else {
      tmp = mData[2];
    }
    if(mLess(tmp,mData[3])) {
      tmp = mData[3];
    }
    if(mLess(tmp,mData[4])) {
      tmp = mData[4];
    }
    if(mLess(tmp,mData[5])) {
      tmp = mData[5];
    }
    if(mLess(tmp,mData[6])) {
      tmp = mData[6];
    }
    return tmp;
  }
  return mData[0];
}

#endif
