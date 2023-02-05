# Easy

Given array $A$ of integers, the task is to complete the function **findMaxDiff** which finds the maximum absolute difference between nearest left and right smaller element of every element in array. If the element is the leftmost element, nearest smaller element on left side is considered as $0$. Similarly if the element is the rightmost elements, smaller element on right side is considered as $0$.

```cpp
class Solution{
public:
    int findMaxDiff(int A[], int n)
    {
        stack<int> sta;
        sta.push(0);
        
        vector<int> left(n), right(n);
        
        for (int i = 0; i < n; ++i)
        {
            while (sta.size() && sta.top() >= A[i])
                sta.pop();
                
            left[i] = sta.top();
            sta.push(A[i]);
        }
        
        while (sta.size())
            sta.pop();
            
        sta.push(0);
        
        for (int i = n - 1; i >= 0; --i)
        {
            while (sta.size() && sta.top() >= A[i])
                sta.pop();
                
            right[i] = sta.top();
            sta.push(A[i]);
        }
        
        int ret = 0;
        
        for (int i = 0; i < n; ++i)
            ret = max(ret, abs(left[i] - right[i]));
        
        return ret;
    }
};
```
