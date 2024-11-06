#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* ptr) const {
  if(ptr == NULL) return 0;
  if((ptr->left == NULL && ptr->right != NULL) ||
    (ptr->left != NULL && ptr->right == NULL)) {
    return 1 + process(ptr->left) + process(ptr->right);
  }
  return process(ptr->left) + process(ptr->right);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
  //write your code here
  if(mSize <= 1) return 0;
  return process(mRoot);
}

#endif