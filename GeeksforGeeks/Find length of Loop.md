# Easy

Given a linked list of size **N**. The task is to complete the function **countNodesinLoop()** that checks whether a given Linked List contains a loop or not and if the loop is present then return the count of nodes in a loop or else return **0**. **C** is the position of the node to which the last node is connected. If it is **0** then no loop.

```cpp
int countNodesinLoop(struct Node *head)
{
    if (! head || ! head->next)
        return 0;
        
    struct Node *slow = head;
    struct Node *fast = head->next;
    
    while (fast && fast->next)
    {
        if (fast->next == slow)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    if (! fast || !fast->next)
        return 0;
    
    int cnt = 0;
    while (slow != fast)
    {
        ++ cnt;
        slow = slow->next;
    }
    
    return cnt + 1;
}
```
