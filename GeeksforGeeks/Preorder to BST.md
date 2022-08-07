# Medium

Given an array $arr$ of $N$ nodes representing preorder traversal of some BST. You have to build the exact BST from it's given preorder traversal.

In Pre-Order traversal, the root node is visited before the left child and right child nodes.

```cpp
class Solution{
    Node* travel(int pre[], int size, int& i, int lb, int ub)
    {
        if (i == size)
            return NULL;
            
        if (pre[i] < lb || pre[i] > ub)
            return NULL;
            
        Node* n = newNode(pre[i ++]);
        n->left = travel(pre, size, i, lb, n->data);
        n->right = travel(pre, size, i, n->data, ub);
        
        return n;
    }
    
public:
    Node* post_order(int pre[], int size)
    {
        int i = 0;
        
        return travel(pre, size, i, INT_MIN, INT_MAX);
    }
};
```
