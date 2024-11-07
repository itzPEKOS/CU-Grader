int mx = 0;
KeyT k;

int DFS(node *n) {
    if(n == NULL) return 0;
    int l_child = DFS(n->left);
    int r_child = DFS(n->right);
    int diff = std::abs(l_child-r_child);
    if(mx < diff || (mx == diff && mLess(n->data.first,k))) {
        k = n->data.first;
        mx = diff;
    }

    return 1 + std::max(l_child,r_child);
}

KeyT getValueOfMostImbalanceNode() {
    DFS(mRoot);
    return k;
}
