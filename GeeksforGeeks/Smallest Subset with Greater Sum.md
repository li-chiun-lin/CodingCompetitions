# Easy

You are given an array $Arr$ of size $N$ containing non-negative integers. Your task is to choose the minimum number of elements such that their sum should be greater than the sum of the rest of the elements of the array.

```cpp
class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        sort(begin(Arr), end(Arr));
        long long total = accumulate(begin(Arr), end(Arr), 0LL);
        
        int cnt = 0;
        long long sum = 0;
        
        for (int i = N - 1; i >= 0; --i)
        {
            ++ cnt;
            sum += Arr[i];
            
            if (sum > total - sum)
                break;
        }
        
        return cnt;
    }
};
```
