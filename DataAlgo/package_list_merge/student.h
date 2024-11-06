#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  for(CP::list<T> &l : ls) {
    if(l.mSize > 0) {
      (--end()).ptr->next = (l.begin()).ptr;
      (l.begin()).ptr->prev = (--end()).ptr;
      mHeader->prev = (--l.end()).ptr;
      (--l.end()).ptr->next = mHeader;

      mSize += l.mSize;
      l.mHeader->next = l.mHeader;
      l.mHeader->prev = l.mHeader;
    }

    l.mSize = 0;
  }
}

#endif
