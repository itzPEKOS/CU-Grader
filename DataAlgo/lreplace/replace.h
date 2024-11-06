void replace(const T& x, list<T>& y) {
  //write your code here
  for(auto i = begin(); i != end(); i++) {
    if(*i == x) {
      for(auto it : y) insert(i,it);
      erase(i);
    }
  }
}
