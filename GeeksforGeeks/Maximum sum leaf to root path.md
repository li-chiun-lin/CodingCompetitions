# Medium

Given a Binary Tree, find the maximum sum path from a leaf to root.

```cpp
class Solution{
    public:
    int maxPathSum(Node* root)
    {
        if (! root)
            return 0;
            
        return max(maxPathSum(root->left), maxPathSum(root->right)) + root->data;
    }
};
```
