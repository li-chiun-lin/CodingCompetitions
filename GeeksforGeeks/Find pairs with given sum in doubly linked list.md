# Easy

Given a sorted doubly linked list of positive distinct elements, the task is to find pairs in a doubly-linked list whose sum is equal to given value $target$.

```cpp
class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        set<int> ss;
        vector<pair<int, int>> ret;
        
        while (head)
        {
            if (ss.count(target - head->data))
                ret.push_back({target - head->data, head->data});
                
            ss.insert(head->data);
            head = head->next;
        }
        
        sort(begin(ret), end(ret));
        
        return ret;
    }
};
```
