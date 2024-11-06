void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    node *p = this->mHeader->next;
    for(size_t i = 0; i < this->mSize; i++) {
        node *next_node = p->next;
        p->prev->next = p->next;
        p->next->prev = p->prev;
        if(i < (this->mSize+1)/2) {
            p->prev = list1.mHeader->prev;
            p->next = list1.mHeader;
            list1.mHeader->prev->next = p;
            list1.mHeader->prev = p;
            list1.mSize++;
        } else {
            p->prev = list2.mHeader->prev;
            p->next = list2.mHeader;
            list2.mHeader->prev->next = p;
            list2.mHeader->prev = p;
            list2.mSize++;
        }
        p = next_node;
    }

    this->mSize = 0;
    this->mHeader->next = mHeader;
    this->mHeader->prev = mHeader;
}
