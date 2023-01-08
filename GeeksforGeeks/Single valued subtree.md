# Medium

Given a binary tree, count the number of Single Valued Subtrees.

A Single Valued Subtree is one in which all the nodes have same value.

```cpp
class Solution
{
    bool dfs(Node* root, int &ret)
    {
        if (! root)
            return true;
            
        bool l = dfs(root->left, ret);
        bool r = dfs(root->right, ret);
        
        if (l && r && 
            (root->left == NULL || root->left->data == root->data) &&
            (root->right == NULL || root->right->data == root->data))
        {
            ++ ret;
            return true;
        }
        else
            return false;
    }
public:
    int singlevalued(Node *root)
    {
        int ret = 0;
        
        dfs(root, ret);
        
        return ret;
    }
};
```
