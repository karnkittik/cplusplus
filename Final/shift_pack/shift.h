void shift(int k) {
	// TODO: Add your code here
    int s = mSize;
  	k = k%s;
	if(k<0) k = (k+s)%s;
	node *b = mHeader->next;
	for(int i = 0; i<k;i++) b = b->next;
	mHeader->next->prev = mHeader->prev;
	mHeader->prev->next = mHeader->next;
	mHeader->next = b;

	b->prev->next = mHeader;
	mHeader->prev = b->prev;
	b->prev = mHeader;

  }