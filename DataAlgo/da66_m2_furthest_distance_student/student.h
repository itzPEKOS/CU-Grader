#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, int &aux){
	if(n == NULL) return -1;

    int left_node = my_recur(n->left,aux);
    int right_node = my_recur(n->right,aux);

    aux = std::max(aux, left_node + right_node + 2);
    return std::max(left_node, right_node) + 1;
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::furthest_distance() {
	if(mSize == 0) return -1;
    if(mSize == 1) return 0;
    int height = 0;
    my_recur(mRoot,height);
    return height;
}

#endif
