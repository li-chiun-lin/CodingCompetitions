# Medium

Given a Binary Search Tree. Convert a given BST into a Special Max Heap with the condition that all the values in the left subtree of a node should be less than all the values in the right subtree of the node. This condition is applied on all the nodes in the so converted Max Heap.

```cpp
class Solution{
    void inorder(Node* root, stack<int>& sta)
    {
        if (! root)
            return ;
            
        inorder(root->left, sta);
        sta.push(root->data);
        inorder(root->right, sta);
    }
    
    void postorder(Node* root, stack<int>& sta)
    {
        if (! root)
            return ;
            
        root->data = sta.top();
        sta.pop();
        postorder(root->right, sta);
        postorder(root->left, sta);
    }
    
  public:
    void convertToMaxHeapUtil(Node* root)
    {
        stack<int> sta;
        
        inorder(root, sta);
        
        postorder(root, sta);
    }    
};
```
