# Hard

Given an integer array $a$ of $N$ elements and an integer $K$, the task is to check if the array $a$ could be divided into $K$ non-empty subsets with equal sum of elements.

```cpp
class Solution{
    bool dfs(int a[], int n, int k, int target, int acc, int selected)
    {
        if (k == 1)
            return true;
            
        if (acc > target)
            return false;
            
        if (acc == target)
            return dfs(a, n, k - 1, target, 0, selected);
            
        for (int i = 0, mask = 1; i < n; ++i, mask <<= 1)
            if ((selected & mask) == 0 
                && dfs(a, n, k, target, acc + a[i], selected | mask))
                return true;
            
        return false;
    }
  public:
    bool isKPartitionPossible(int a[], int n, int k)
    {
        int sum = accumulate(a, a + n, 0);
        
        if (sum % k)
            return false;
        
        return dfs(a, n, k, sum / k, 0, 0);
    }
};
```
