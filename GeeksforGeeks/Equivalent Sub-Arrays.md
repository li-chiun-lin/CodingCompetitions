# Medium

Given an array $arr$ of $n$ integers. Count the total number of sub-array having total distinct elements same as that of total distinct elements of the original array.

```cpp
class Solution
{
public:
    int countDistinctSubarray(int arr[], int n)
    {
        map<int, int> hit, hit2;
        
        for (int i = 0; i < n; ++i)
            ++ hit[arr[i]];
            
        int j = 0;
        int target = hit.size();
        int cnt = 0;
        
        for (int i = 0; i < n; ++i)
        {
            ++ hit2[arr[i]];
            
            while (hit2.size() >= target)
            {
                cnt += n - i;
                
                if (-- hit2[arr[j]] == 0)
                    hit2.erase(arr[j]);
                    
                ++ j;
            }
        }
        
        return cnt;
    }
};
```
