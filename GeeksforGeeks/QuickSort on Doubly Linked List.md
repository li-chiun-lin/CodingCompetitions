# Hard

Sort the given doubly linked list of size $N$ using quicksort. Just complete the partition function using the quicksort technique.

```cpp
class Solution{
public:
    Node* partition(Node *l, Node *h){
        Node *pivot = h;
        Node *less = l;
        
        for (Node *i = l; i != h; i = i->next)
        {
            if (i->data <= pivot->data)
            {
                swap(less->data, i->data);
                less = less->next;
            }
        }
        
        swap(less->data, pivot->data);
        return less;
    }
};
```
