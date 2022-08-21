# Hard

Given a binary tree and data value of two of its nodes. Find the number of turns needed to reach from one node to another in the given binary tree.

```cpp
class Solution{
    Node* lca(Node* root, int f, int s)
    {
        if (! root || root->data == f || root->data == s)
            return root;
            
        auto l = lca(root->left, f, s);
        auto r = lca(root->right, f, s);
        
        if (l && r)
            return root;
            
        return l ? l : r;
    }
    
    int turn(Node* root, int f, int s, bool onLeft)
    {
        if (! root)
            return INT_MIN;
            
        if (root->data == f || root->data == s)
            return 0;
            
        int ll = 0;
        int rr = 0;
            
        if (onLeft)
        {
            ll = turn(root->left, f, s, onLeft);
            rr = turn(root->right, f, s, ! onLeft) + 1;
        }
        else
        {
            ll = turn(root->left, f, s, ! onLeft) + 1;
            rr = turn(root->right, f, s, onLeft);
        }
        
        return max(ll, rr);
    }

public:
    int NumberOFTurns(struct Node* root, int first, int second)
    {
        Node* a = lca(root, first, second);
        
        int l = turn(a->left, first, second, true);
        int r = turn(a->right, first, second, false);
        
        if (l < 0 && r < 0)
            return -1;
            
        if (l < 0)
            return r;
            
        if (r < 0)
            return l;
            
        return l + r + 1;
    }
};
```
