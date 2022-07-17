# Medium

Given a BST, transform it into greater sum tree where each node contains sum of all nodes greater than that node.

```cpp
class Solution
{
    void inorder(Node *root, int &acc)
    {
        if (! root)
            return ;
            
        inorder(root->right, acc);
        
        int v = root->data;
        root->data = acc;
        acc += v;
        
        inorder(root->left, acc);
    }
    
    public:
    void transformTree(struct Node *root)
    {
        int acc = 0;
        
        inorder(root, acc);
    }
};
```
