#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#define NULL __null

class Tree{
    class Node{
        public:
            friend class Tree;
            Node() {data = -1; left = NULL; right = NULL;}
            Node(const int x, Node* left, Node* right) : data(x), left(left), right(right) {}

        protected:
            int data;
            Node* left;
            Node* right;
    };
public:

    Tree() {
        mRoot = NULL;
        mSize = 0;
    }

    ~Tree() {
        clear(mRoot);
    }

    void clear(Node*& r) {
        if (!r) return;
        clear(r->left);
        clear(r->right);
        delete r;
    }

    void insert(int x) {
        insertAt(mRoot, x);
    }
    bool isSameBinaryTree(Tree& t) {
        if(mSize != t.mSize) return false;
        if(mRoot-> data !=t.mRoot->data) return false;
        return recursive(mRoot,t.mRoot);
        // Insert your code here
    }
    bool recursive(Tree::Node*& t,Tree::Node*& s){
        if(t->data == s->data) {
            if(t->left == NULL && s->left==NULL){
                recursive(t->right,s->right);
            }else if(t->right == NULL && s->right==NULL){
                recursive(t->left,s->left);
            }else if(t->left == NULL && s->left==NULL &&t->right == NULL && s->right==NULL){
                return true;    
            }else{
                recursive(t->right,s->right);
                recursive(t->left,s->left);
            }
        }
        return false;
    }
    // You can also put your code here

protected:
    void insertAt(Node*& r, int x) {
        if (!r) {
           r = new Node(x, NULL, NULL);
           mSize++;
           return;
        }
        if (r->data == x) return; // Do nothing
        if (x < r->data) insertAt(r->left, x); else
        insertAt(r->right, x);
    }
    Node* mRoot;
    int mSize;

};

#endif // TREE_H_INCLUDED
