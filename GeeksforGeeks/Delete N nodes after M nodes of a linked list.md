# Easy

Given a linked list, delete **N** nodes after skipping **M** nodes of a linked list until the last of the linked list.

```cpp
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        // a convenient dummy node act as 'previous'
        Node *n = new Node(-1);
        n->next = head;
        
        Node *ptr = n;
        
        while (ptr && ptr->next)
        {
            // skip
            int m = M;
            
            while (ptr && m --)
                ptr = ptr->next;
            
            // delete
            int n = N;
            
            while (ptr && ptr->next && n --)
                ptr->next = ptr->next->next;
        }
    }
};
```
