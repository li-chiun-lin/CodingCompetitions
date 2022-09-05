# Medium

Given an array $arr$ of $N$ integers. Find the contiguous sub-array(containing at least one number) which has the minimum sum and return its sum.

```cpp
class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      int n = a.size();
      int loc = a[0];
      int glo = a[0];
      
      for (int i = 1; i < n; ++i)
      {
          loc = min(loc + a[i], a[i]);
          glo = min(glo, loc);
      }
      
      return glo;
  }
};
```
