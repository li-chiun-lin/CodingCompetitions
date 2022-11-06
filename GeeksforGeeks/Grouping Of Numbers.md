# Medium

One day Jim came across array $arr$ of $N$ numbers. He decided to divide these $N$ numbers into different groups. Each group contains numbers in which sum of any two numbers should not be divisible by an integer $K$. Print the size of the group containing maximum numbers.

```cpp
class Solution {
  public:
    int maxGroupSize(int arr[], int N, int K) {
        vector<int> r(K);
        
        // the core idea of this problem is that 
        // element of remainder `x' can not be put to the same group with
        // element of remainder `K - x'.
        for (int i = 0; i < N; ++i)
            ++ r[arr[i] % K];
            
        int ret = 0;
        
        // we pick the larger part to maximize the group
        for (int i = 1; i * 2 < K; ++i)
            ret += max(r[i], r[K - i]);
            
        // special case 1:
        // these elements are already divisible by K by themselves,
        // hence we can only include at most one of them in our group.
        if (r[0])
            ++ ret;
            
        // special case 2:
        // for similar argument, though these elements are not divisible by themselves,
        // but any two of them are divisible by K,
        // hence we, again, can only include at most one of them in our group.
        if (K % 2 == 0 && r[K / 2])
            ++ ret;
        
        return ret;
    }
};
```
