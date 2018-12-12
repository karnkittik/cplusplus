// Your code here

int abs(int x) {
    return x > 0 ? x : -x;
}

int getNode(node* nw, int &mx, KeyT &ans) {
    if (nw == NULL) {
        return -1;
    }

    int lh = getNode(nw->left, mx, ans);
    int rh = getNode(nw->right, mx, ans);
    int dif = abs(lh - rh);
    if (mx < dif) {
        mx = dif;
        ans = nw->data.first;
    } else if (mx == dif && ans > nw->data.first) {
        ans = nw->data.first;
    }

    return 1 + ((lh > rh)? lh : rh);
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    int mx = 0;
    KeyT ans = mRoot->data.first;

    getNode(mRoot, mx, ans);

    return ans;
}

