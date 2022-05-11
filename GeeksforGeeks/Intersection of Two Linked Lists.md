# Easy

Given two linked lists, the task is to complete the function **findIntersection()**, that returns the intersection of two linked lists. Each of the two linked list contains distinct node values.

```cpp
class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        set<int> ss;
        
        while (head2)
        {
            ss.insert(head2->data);
            head2 = head2->next;
        }
        
        Node *h = new Node(-1);
        Node *t = h;
        
        while (head1)
        {
            if (ss.count(head1->data))
            {
                t->next = head1;
                t = head1;
            }
            
            head1 = head1->next;
        }
        
        t->next = NULL;
        
        return h->next;
    }
};
```
