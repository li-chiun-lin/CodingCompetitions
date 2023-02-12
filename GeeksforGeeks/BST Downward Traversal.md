# Easy

Given a Binary Search Tree with unique node values and a $target$ value. You have to find the node whose data is equal to target and return the sum of all descendant node's data which are vertically below the target node. Initially, you are at the $root$ node.
Note: If $target$ node is not present in bst then return $-1$.

```cpp
class Solution{
    long long int travel(Node *root, int idx)
    {
        if (! root)
            return 0;
            
        return travel(root->left, idx - 1) + travel(root->right, idx + 1) + (idx == 0 ? root->data : 0);
    }
    
public:
    long long int verticallyDownBST(Node *root,int target){
        if (! root)
            return -1;
            
        if (root->data < target)
            return verticallyDownBST(root->right, target);
        else if (root->data > target)
            return verticallyDownBST(root->left, target);
        else
            return travel(root->left, -1) + travel(root->right, 1);
    }
};
```
