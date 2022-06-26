# Hard

Given a linked list and positions $m$ and $n$. Reverse the linked list from position $m$ to $n$.

```cpp
class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        // use this dummy head to avoid nullity check.
        Node *dummy = new Node(-1);
        dummy->next = head;
        Node *pre_m = dummy;
        Node *ptr_m = head;
        Node *ptr_n = head;
        Node *nxt_n = NULL;
        
        // find the m-th node and the node before it.
        for (int i = 1; i < m; ++i)
        {
            pre_m = ptr_m;
            ptr_m = ptr_m->next;
        }
        
        // find the n-th node and the node after it.
        for (int i = 1; i < n; ++i)
            ptr_n = ptr_n->next;
        nxt_n = ptr_n->next;
        
        // cut the end side.
        ptr_n->next = NULL;
        
        // reverse 
        // link to the end side.
        Node *p = nxt_n;
        Node *q = ptr_m;
        Node *r = NULL;
        
        while (q)
        {
            r = q->next;
            q->next = p;
            p = q;
            q = r;
        }
        
        // link the start side.
        pre_m->next = p;
        
        // chop the dummy head.
        return dummy->next;
    }
};
```
