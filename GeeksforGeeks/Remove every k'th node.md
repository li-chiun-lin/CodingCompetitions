# Easy

Given a singly linked list, your task is to remove every **k**-th node from the linked list.

```cpp
Node* deleteK(Node *head,int K)
{
    if (K == 1)
        return NULL;
        
    Node *ptr = head;
    int k = K - 1;
    
    while (ptr && -- k)
        ptr = ptr->next;
        
    if (! ptr || ! ptr->next || k)
        return head;
        
    ptr->next = deleteK(ptr->next->next, K);
    
    return head;
}
```
