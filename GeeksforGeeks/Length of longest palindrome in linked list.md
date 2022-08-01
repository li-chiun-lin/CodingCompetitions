# Medium

Given a linked list, the task is to complete the function **maxPalindrome()** which returns an integer denoting the length of the longest palindrome list that exist in the given linked list.

```cpp
int check(Node *s, Node *t)
{
    int cnt = 0;
    
    while (s && t && s->data == t->data)
    {
        cnt += 2;
        s = s->next;
        t = t->next;
    }
    
    return cnt;
}

int maxPalindrome(Node *head)
{
    int ret = 1;
    
    Node *p = NULL;
    Node *q = head;
    Node *r = NULL;
    
    while (q)
    {
        r = q->next;
        q->next = p;
        
        int c1 = check(q, r);
        ret = max(ret, c1);
        
        int c2 = check(p, r);
        ret = max(ret, c2 + 1);
        
        p = q;
        q = r;
    }
    
    return ret;
}
```
