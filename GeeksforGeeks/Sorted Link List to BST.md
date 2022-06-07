# Hard

Given a Singly Linked List which has data members sorted in ascending order. Construct a Balanced Binary Search Tree which has same data members as the given Linked List.

Note: There might be nodes with same value.

```cpp
class Solution{
  public:
    TNode* sortedListToBST(LNode *head) {
        if (! head)
            return NULL;
            
        if (! head->next)
            return new TNode(head->data);
        
        LNode *dummy = new LNode(-1);
        dummy->next = head;
        LNode *prev = dummy;
        LNode *fast = head;
        LNode *slow = head;
        
        while (fast && fast->next)
        {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        
        prev->next = NULL;
        
        TNode *left = sortedListToBST(head);
        TNode *right = sortedListToBST(slow->next);
        
        TNode *root = new TNode(slow->data);
        
        root->left = left;
        root->right = right;
        
        return root;
    }
};
```
