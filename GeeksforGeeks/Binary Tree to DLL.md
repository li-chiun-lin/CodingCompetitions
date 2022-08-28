# Hard

Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place.

The left and right pointers in nodes are to be used as previous and next pointers respectively in converted DLL. The order of nodes in DLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (leftmost node in BT) must be the head node of the DLL.

```cpp
class Solution
{
    void travel(Node *root, Node*& pre)
    {
        if (! root)
            return ;
            
        travel(root->left, pre);
        
        pre->right = root;
        root->left = pre;
        pre = root;
        
        travel(root->right, pre);
    }
    
public: 
    Node * bToDLL(Node *root)
    {
        Node* head = new Node();
        Node* pre = head;
        
        travel(root, pre);
        
        pre->right = NULL;
        head->right->left = NULL;
        
        return head->right;
    }
};
```
