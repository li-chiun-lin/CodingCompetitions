# Easy

Given a BST, and a reference to a Node **x** in the BST. Find the Inorder Successor of the given node in the BST.

```cpp
class Solution{
  public:
    void travel(Node *root, Node *x, Node *&pre, Node *&ret)
    {
        if (! root)
            return ;
            
        travel(root->left, x, pre, ret);
        
        if (pre == x && ret == NULL)
        {
            ret = root;
            return ;
        }
        
        pre = root;
        
        travel(root->right, x, pre, ret);
    }
    
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        Node *pre = NULL;
        Node *ret = NULL;
        
        travel(root, x, pre, ret);
        
        return ret;
    }
};
```

```cpp
Node * inOrderSuccessor(Node *root, Node *x)
{
    Node* successor = NULL;
    
    while(root != NULL)
    {
        if(root->data <= x->data)
            root = root->right;
        else
        {  
            successor = root; 
            root = root->left;
        }
    }
    return successor;
}
```
