# Easy

Given a Binary search tree. Your task is to complete the function which will return the **K**-th largest element without doing any modification in Binary Search Tree.

```cpp
class Solution
{
    public:
    int rec(Node *root, int &K)
    {
        if (! root)
            return 0;
            
        int ret = rec(root->right, K);
        
        if (ret)
            return ret;
        
        if (-- K == 0)
            return root->data;
            
        return rec(root->left, K);
    }
    
    int kthLargest(Node *root, int K)
    {
        return rec(root, K);
    }
};
```
