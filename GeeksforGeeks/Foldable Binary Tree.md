# Medium

Given a binary tree, check if the tree can be folded or not. A tree can be folded if left and right subtrees of the tree are structure wise same. An empty tree is considered as foldable.

```cpp
bool same(Node* n1, Node*n2)
{
    if (! n1 && ! n2)
        return true;
        
    if (! n1 || ! n2)
        return false;
        
    return same(n1->left, n2->right) && same(n1->right, n2->left);
}

bool IsFoldable(Node* root)
{
    if (! root)
        return true;
        
    return same(root->left, root->right);
}
```
