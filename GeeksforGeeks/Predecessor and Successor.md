# Easy

There is BST given with root node with key part as an integer only. You need to find the in-order successor and predecessor of a given key. If either predecessor or successor is not found, then set it to $NULL$.

```cpp
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    Node *ptr = root;
    
    while (ptr)
    {
        if (ptr->key <= key)
            ptr = ptr->right;
        else
        {
            suc = ptr;
            ptr = ptr->left;
        }
    }
    
    ptr = root;
    
    while (ptr)
    {
        if (ptr->key >= key)
            ptr = ptr->left;
        else
        {
            pre = ptr;
            ptr = ptr->right;
        }
    }
}
```
