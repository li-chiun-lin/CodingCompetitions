# Easy

Given an array $arr[]$ of size $N$ containing equal number of odd and even numbers. Arrange the numbers in such a way that all the even numbers get the even index and odd numbers get the odd index.

```cpp
class Solution {
  public:
    void reArrange(int arr[], int N) {
        vector<vector<int>> v(2);
        
        for (int i = 0; i < N; ++i)
            v[arr[i] & 1].push_back(arr[i]);
            
        for (int i = 0, j = 0; i + 1 < N; i += 2, ++j)
        {
            arr[i] = v[0][j];
            arr[i + 1] = v[1][j];
        }
    }
};
```
