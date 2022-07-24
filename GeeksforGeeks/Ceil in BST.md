# Medium

Given a BST and a number $X$, find $Ceil$ of $X$.

$Ceil(X)$ is a number that is either equal to $X$ or is immediately greater than $X$.

```cpp
int findCeil(Node* root, int input) {
    if (root == NULL) 
        return INT_MAX;
        
    if (root->data < input)
        return findCeil(root->right, input);
    else if (root->data > input)
        return min(findCeil(root->left, input), root->data);
    else
        return root->data;
}
```
