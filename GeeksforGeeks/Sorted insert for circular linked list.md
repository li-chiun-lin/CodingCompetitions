# Easy

Given a sorted circular linked list, the task is to insert a new node in this circular list so that it remains a sorted circular linked list.

```cpp
class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
        Node *n = new Node(data);
        
        // case 0: empty list
        if (! head)
        {
            n->next = n;
            return n;
        }
        
        // find the tail
        Node *t = head;
        
        while (t->next != head)
            t = t->next;
        
        // case 1: insert before head
        if (data <= head->data)
        {
            n->next = head;
            t->next = n;
            
            return n;
        }
        // case 2: insert after tail
        else if (t->data <= data)
        {
            t->next = n;
            n->next = head;
            return head;
        }
        // case 3: some where in-between
        else
        {
            Node *pre = head;
            
            while (pre->next->data < data)
                pre = pre->next;
                
            n->next = pre->next;
            pre->next = n;
            
            return head;
        }
    }
};
```
