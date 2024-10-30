#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>



bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  if(m <= 0 || !(a+m-1 < b || b+m-1 < a) ||
  a < this->begin() || b < this->begin() || a >= this->end() || 
  b >= this->end() || a+m-1 > this->end() || b+m-1 > this->end()) {
    return false;
  }
  while(m--) {
    std::swap(*(a++),*(b++));
  }

  return true;
}

#endif
