# Easy

You are given an array $A$ of size $N$. You need to first push the elements of the array into a stack and then print minimum in the stack at each pop.

```cpp
stack<int> _push(int arr[],int n)
{
    stack<int> sta;
    
    sta.push(arr[0]);
    
    for (int i = 1; i < n; ++i)
        sta.push(min(sta.top(), arr[i]));
    
    return sta;
}

void _getMinAtPop(stack<int>s)
{
    while (s.size())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
```
