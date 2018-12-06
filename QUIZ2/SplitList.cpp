void splitList(list<T>& list1, list<T>& list2) {
    int m = mSize;
    int n = (mSize % 2 == 0) ? (mSize/2):(mSize/2 + 1);
    for(int i = 0; i < n; i++){
        node * p = mHeader->next;
        mHeader->next = p->next;
        p->next->prev = mHeader;

        list1.mHeader->prev->next = p;
        p->prev = list1.mHeader->prev;

        list1.mHeader->prev = p;
        p->next = list1.mHeader;
    }
    for(int i = n; i < m; i++){
        node * p = mHeader->next;
        mHeader->next = p->next;
        p->next->prev = mHeader;

        list2.mHeader->prev->next = p;
        p->prev = list2.mHeader->prev;

        list2.mHeader->prev = p;
        p->next = list2.mHeader;
    }
    mSize = 0;
    list1.mSize = list1.mSize + n;
    list2.mSize = list2.mSize + m - n;
}

