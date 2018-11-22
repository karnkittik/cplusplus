#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node* p = mRoot;
  node* lastResult = NULL; //last node that will be in the result
  node* lastUs= NULL; //last node that will still be here

  bool found = false;

  while(p != NULL && !found) {
    if (p->data.first >= val) {
      //this node goes to result, go left
      if (lastResult == NULL) {
        result.mRoot = p;
        result.mRoot->parent = NULL;
      } else {
        lastResult->left = p;
        p->parent = lastResult;
      }

      if (p->data.first == val) {
        if (lastUs == NULL) {
          mRoot = p->left;
          if (mRoot != NULL) mRoot->parent = NULL;
          lastUs = mRoot;
        } else {
          lastUs->right = p->left;
          if (p->left != NULL) p->left->parent = lastUs;
        }
        found = true;
        p->left = NULL;
        break;
      }

      lastResult = p;
      p = p->left;
      if (p == NULL) {
        if (lastUs == NULL) {
          mRoot = NULL;
        } else {
          lastUs->right = NULL;
        }
      }
    } else if (p->data.first < val) {
      //this node is still here, go right
      if (lastUs == NULL) {
        mRoot = p;
        mRoot->parent = NULL;
      } else {
        lastUs->right = p;
        p->parent = lastUs;
      }
      lastUs = p;
      p = p->right;
      if (p == NULL) {
        if (lastResult == NULL)
          result.mRoot = NULL;
        else
          lastResult->left = NULL;
      }
    }
  }

  return result;
}

#endif
#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node* p = mRoot;
  node* lastResult = NULL; //last node that will be in the result
  node* lastUs= NULL; //last node that will still be here

  bool found = false;

  while(p != NULL && !found) {
    if (p->data.first >= val) {
      //this node goes to result, go left
      if (lastResult == NULL) {
        result.mRoot = p;
        result.mRoot->parent = NULL;
      } else {
        lastResult->left = p;
        p->parent = lastResult;
      }

      if (p->data.first == val) {
        if (lastUs == NULL) {
          mRoot = p->left;
          if (mRoot != NULL) mRoot->parent = NULL;
          lastUs = mRoot;
        } else {
          lastUs->right = p->left;
          if (p->left != NULL) p->left->parent = lastUs;
        }
        found = true;
        p->left = NULL;
        break;
      }

      lastResult = p;
      p = p->left;
      if (p == NULL) {
        if (lastUs == NULL) {
          mRoot = NULL;
        } else {
          lastUs->right = NULL;
        }
      }
    } else if (p->data.first < val) {
      //this node is still here, go right
      if (lastUs == NULL) {
        mRoot = p;
        mRoot->parent = NULL;
      } else {
        lastUs->right = p;
        p->parent = lastUs;
      }
      lastUs = p;
      p = p->right;
      if (p == NULL) {
        if (lastResult == NULL)
          result.mRoot = NULL;
        else
          lastResult->left = NULL;
      }
    }
  }

  return result;
}

#endif
#define J CP::map_bst<K,M,C> 
#define p ->parent
#define l ->left
#define r ->right
#define s mRoot
#define T typename
template<T K,T M,T C>J J::split(K val){J Z;node *P,*R,*X=s;P=R=s=NULL;while(X-NULL){if(!mLess(X->data.first,val)){if(!R)Z.s=X;else R l=X;X p=R;R=X;X=X l;}else{if(!P)s=X;else P r=X;X p=P;P=X;X=X r;}}if(P)P r=NULL;if(R)R l=NULL;return Z;}
#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node* now = mRoot;
    node* nowOriginal = NULL; mRoot = NULL;
    node* nowSplit = NULL; result.mRoot = NULL;
    //printf("START");
    while(true) {
        if(now == NULL) break;
        if(mLess(now->data.first,val)) { // in original
            if(nowOriginal == NULL) {
                mRoot = now;
                mRoot->parent = NULL;
            }
            else if(mLess(nowOriginal->data.first,now->data.first)) {
                nowOriginal->right = now; now->parent = nowOriginal;
            }
            else {
                nowOriginal->left = now; now->parent = nowOriginal;
            }
            nowOriginal = now;
            now = now->right;
            nowOriginal->right = NULL;
        }
        else { // in split
            if(nowSplit == NULL) {
                result.mRoot = now;
                result.mRoot->parent = NULL;
            }
            else if(mLess(nowSplit->data.first,now->data.first)) {
                nowSplit->right = now; now->parent = nowSplit;
            }
            else {
                nowSplit->left = now; now->parent = nowSplit;
            }
            nowSplit = now;
            now = now->left;
            nowSplit->left = NULL;
        }
    }
    //printf("END");
  return result;
}

#endif
