# Easy

Given a Binary Search Tree. Find sum of all elements smaller than and equal to $K$-th smallest element.

```cpp
int travel(Node* root, int& k)
{
    if (! root || ! k)
        return 0;
        
    int l = travel(root->left, k);
    
    if (k)
    {
        -- k;
        return l + root->data + travel(root->right, k);
    }
    else
    {
        return l;
    }
}

int sum(Node* root, int k) 
{
    return travel(root, k);
} 
```
