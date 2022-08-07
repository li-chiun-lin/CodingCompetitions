# Easy

Given a BST and a value $k$, the task is to delete the nodes having values greater than or equal to $k$.

```cpp
class Solution{
  public:
    Node* deleteNode(Node* root, int k)
    {
        if (! root)
            return root;
            
        if (root->data < k)
        {
            root->right = deleteNode(root->right, k);
            return root;
        }
        else
        {
            return deleteNode(root->left, k);
        }
    }
};
```
