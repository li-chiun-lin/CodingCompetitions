# Hard

Given a binary tree. The task is to find subtree with maximum sum in the tree and return its sum.

```cpp
class Solution {
    int dfs(Node* root, int& ret)
    {
        if (! root)
            return 0;

        int v = root->data
              + dfs(root->left, ret)
              + dfs(root->right, ret);
        
        ret = max(ret, v);
        return v;
    }
    
public:
    int findLargestSubtreeSum(Node* root)
    {
        int ret = INT_MIN;
        dfs(root, ret);
        
        return ret;
    }
};
```
