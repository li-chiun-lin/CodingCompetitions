# Easy

You are given the $head$ of a Linked List. You have to move the last element to the front of the Linked List and return the list.

```cpp
class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if (! head || ! head->next)
            return head;
            
        ListNode* ptr = head;
        
        while (ptr->next->next)
            ptr = ptr->next;
            
        ptr->next->next = head;
        head = ptr->next;
        ptr->next = NULL;
        return head;
    }
};
```
