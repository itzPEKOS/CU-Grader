void shift(int k) {
	// TODO: Add your code here
	int r = abs(k)%(int)this->mSize;
	if(k > 0) {
		node *f = this->mHeader->next;
		for(int i = 0 ; i < r; i++) {
			node *next_node = f->next;
			f->prev->next = f->next;
			f->next->prev = f->prev;

			f->next = this->mHeader;
			f->prev = this->mHeader->prev;
			this->mHeader->prev->next = f;
			this->mHeader->prev = f;
			f = next_node;
		}
	} else {
		node *l = this->mHeader->prev;
		for(int i = 0; i < r; i++) {
			node *next_node = l->prev;
			l->next->prev = l->prev;
			l->prev->next = l->next;

			l->prev = this->mHeader;
			l->next = this->mHeader->next;
			this->mHeader->next->prev = l;
			this->mHeader->next = l;
			l = next_node;
		}
	}
}
