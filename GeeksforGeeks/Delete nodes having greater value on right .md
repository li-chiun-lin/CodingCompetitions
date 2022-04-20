# Medium

Given a singly linked list, remove all the nodes which have a greater value on their right side.

```cpp
class Solution
{
    public:
    Node *compute(Node *head)
    {
        if (! head || ! head->next)
            return head;
            
        head->next = compute(head->next);
            
        return head->data < head->next->data ? head->next : head;
    }
};
```
