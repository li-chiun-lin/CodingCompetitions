# Medium

Given the root of a binary tree, flatten the tree into a "linked list":

- The "linked list" should use the same Node class where the right child pointer points to the next node in the list and the left child pointer is always null.
- The "linked list" should be in the same order as a pre-order traversal of the binary tree.

```cpp
class Solution
{
    public:
    void flatten(Node *root)
    {
        if (! root)
            return ;
            
        flatten(root->right);
        flatten(root->left);
        
        if (! root->left)
            return ;
            
        Node* n = root->right;
        root->right = root->left;
        root->left = NULL;
        Node* m = root;
        
        while (m->right)
            m = m->right;
            
        m->right = n;
    }
};
```
