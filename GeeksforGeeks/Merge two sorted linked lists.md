# Medium

Given two sorted linked lists consisting of **N** and **M** nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.

```cpp
Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node *h = new Node(-1);
    Node *t = h;
    
    while (head1 && head2)
    {
        if (head1->data < head2->data)
        {
            t->next = head1;
            t = head1;
            head1 = head1->next;
        }
        else
        {
            t->next = head2;
            t = head2;
            head2 = head2->next;
        }
    }
    
    if (head1)
        t->next = head1;
        
    if (head2)
        t->next = head2;
        
    return h->next;
}  
```
