# Medium

Given a linked list and a value *x*, partition it such that all nodes less than *x* come first, then all nodes with value equal to *x* and finally nodes with value greater than or equal to *x*. The original relative order of the nodes in each of the three partitions should be preserved. The partition must work in-place.

```cpp
int cmp(int data, int x)
{
    return data < x ? 0 : data == x ? 1 : 2;
}

struct Node* partition(struct Node* head, int x) {
    // [0] for smaller elements
    // [1] for equal elements
    // [2] for larger elements
    // [3] for final result
    Node *h[4] = { new Node(-1), new Node(-1), new Node(-1), new Node(-1) };
    Node *t[4] = { h[0], h[1], h[2], h[3] };
    
    while (head)
    {
        int i = cmp(head->data, x);
        
        t[i]->next = head;
        t[i] = head;
        
        head = head->next;
    }
    
    // for the final result
    for (int i = 0; i < 3; ++i)
    {
        if (h[i] != t[i])
        {
            t[3]->next = h[i]->next;
            t[3] = t[i];
        }
    }
    
    // terminate tail
    t[3]->next = NULL;
    
    return h[3]->next;
}
```
