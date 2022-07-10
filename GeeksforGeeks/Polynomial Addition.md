# Medium

Given two polynomial numbers represented by a linked list. The task is to complete the function **addPolynomial()** that adds these lists meaning adds the coefficients who have the same variable powers.

```cpp
class Solution{
  public:
    Node* addPolynomial(Node *p1, Node *p2)
    {
        Node *dummy = new Node(-1, -1);
        Node *ret = dummy;
        
        while (p1 && p2)
        {
            if (p1->pow > p2->pow)
            {
                ret->next = p1;
                ret = p1;
                p1 = p1->next;
            }
            else if (p1->pow < p2->pow)
            {
                ret->next = p2;
                ret = p2;
                p2 = p2->next;
            }
            else
            {
                p1->coeff += p2->coeff;
                ret->next = p1;
                ret = p1;
                p1 = p1->next;
                p2 = p2->next;
            }
        }
        
        if (p1)
            ret->next = p1;
            
        if (p2)
            ret->next = p2;
            
        return dummy->next;
    }
};
```
