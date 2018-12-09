void replace(const T &x, list<T> &y)
	{
		iterator it = begin();
		for(;it!=end();it++){
			if(*it==x){
				//iterator tmp = it;
				for(auto k=y.begin();k!=y.end();k++){
					insert(it,*k);
				}
				erase(it);
			}
		}
	}