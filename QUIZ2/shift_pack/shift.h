void shift(int k) {
	// TODO: Add your code here
    int s = mSize;
		k = k%s;
		if(k<0) k = (k+s)%s;
		node *p = begin().ptr;
		for(int i=0;i<k;i++){
			p = p->next;
		}
		mHeader->next->prev = mHeader->prev;
		mHeader->prev->next = mHeader->next;
		mHeader->next = p;
		mHeader->prev = p->prev;
		p->prev = mHeader;
		mHeader->prev->next = mHeader;

  }