#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#define NULL __null

class Tree
{
    class Node
    {
      public:
        friend class Tree;
        Node()
        {
            data = -1;
            left = NULL;
            right = NULL;
        }
        Node(const int x, Node *left, Node *right) : data(x), left(left), right(right) {}

      protected:
        int data;
        Node *left;
        Node *right;
    };

  public:
    Tree()
    {
        mRoot = NULL;
        mSize = 0;
    }

    ~Tree()
    {
        clear(mRoot);
    }

    void clear(Node *&r)
    {
        if (!r)
            return;
        clear(r->left);
        clear(r->right);
        delete r;
    }

    void insert(int x)
    {
        insertAt(mRoot, x);
    }
    int num(Node *&n)
    {
        //none 0 left 1 right 2 both 3
        if (n->left == NULL && n->right == NULL)
            return 0;
        if (n->left != NULL && n->right != NULL)
            return 3;
        if (n->left != NULL && n->right == NULL)
            return 1;
        if (n->left == NULL && n->right != NULL)
            return 2;
    }

    bool isSameBinaryTree(Tree &t)
    {
        return recursive(mRoot,t.mRoot);
    }
    bool recursive(Node*& a,Node*& b){
        if(!a && !b) return true;
        if(!a || !b) return false;
        if(a->data!=b->data) return false;
        return recursive(a->left,b->left) && recursive(a->right,b->right);

    }
    

  protected:
    void insertAt(Node *&r, int x)
    {
        if (!r)
        {
            r = new Node(x, NULL, NULL);
            mSize++;
            return;
        }
        if (r->data == x)
            return; // Do nothing
        if (x < r->data)
            insertAt(r->left, x);
        else
            insertAt(r->right, x);
    }
    Node *mRoot;
    int mSize;
};

#endif // TREE_H_INCLUDED
