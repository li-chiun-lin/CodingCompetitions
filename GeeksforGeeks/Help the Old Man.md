# Easy

A poor old man works in a palace for a living. One day the old man's wife met with an accident. She needed an immediate operation but the old man's savings were not enough for the operation. He went running to the king to beg for money. The king told that he will not only pay the full amount for the operation but also double his salary. But for that the old man had to pass a test.

The king showed him a pile of glass plates kept one above another, each one being smaller than the one beneath. The plates were kept in $box 1$. He had to transfer the plates to $box 3$ using $box 2$. However, there were some constraints. The old man could only take one plate at a time and he could only place a smaller plate on top of a larger plate. He could take a plate only from the top. Help the old man do so. There are $N$ plates and he has to tell the nth move in the format ($i, j$) where a plate is being moved from $i$-th box to $j$-th box.

Note:
Given any number of plates, they can be transferred from $box 1$ to $box 3$ using $box 2$ using the following steps.

- Step 1: Transfer first $N-1$ plates from $box 1$ to $box 2$ using $box 3$.
- Step 2: Transfer the remaining plate from $box 1$ to $box 3$.
- Step 3: Transfer the first $N-1$ plates from $box 2$ to $box 3$ using $box 1$.

```cpp
class Solution{
    void hanoi(int n, int start, int end, int tmp, int &i, vector<int> &ret)
    {
        if (n)
        {
            hanoi(n - 1, start, tmp, end, i, ret);
            //cout << start << " - " << end << endl;
            if (-- i == 0)
                ret = {start, end};
            hanoi(n - 1, tmp, end, start, i, ret);
        }
    }
public:
    vector<int> shiftPile(int N, int n){
        vector<int> ret(2);
        
        hanoi(N, 1, 3, 2, n, ret);
        
        return ret;
    }
};
```
