# Medium

Given a binary tree. Find the size of its largest subtree that is a Binary Search Tree.
Note: Here Size is equal to the number of nodes in the subtree.

```cpp
class Solution{
    public:
    int isBST(Node *root, int &l, int &r, int &m)
    {
        if (! root)
        {
            l = INT_MAX;
            r = INT_MIN;
            return 0;
        }
        
        int l1 = 0, r1 = 0;
        int l2 = 0, r2 = 0;
        int subl = isBST(root->left, l1, r1, m);
        int subr = isBST(root->right, l2, r2, m);
        
        if (subl == -1 || subr == -1)
            return -1;

        if (r1 < root->data && root->data < l2)
        {
            l = min(l1, root->data);
            r = max(r2, root->data);
            
            int c = subl + subr + 1;
            m = max(m, c);
            
            return c;
        }
        
        return -1;
    }
    
    int largestBst(Node *root)
    {
        int m = 1;
        int l = 0;
        int r = 0;
        
        isBST(root, l, r, m);
        
        return m;
    }
};
```
