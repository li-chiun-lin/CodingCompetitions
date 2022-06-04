# Hard

Given an array $arr[]$ of $N$ integers arranged in a circular fashion. Your task is to find the maximum contiguous subarray sum.

```cpp
class Solution{
public:
    int circularSubarraySum(int arr[], int num){
        int minimun_consecutive_neg_sum = INT_MAX;
        int maximun_consecutive_pos_sum = INT_MIN;
        int consecutive_pos_sum = 0;
        int consecutive_neg_sum = 0;
        int sum = 0;
        
        for (int i = 0; i < num; ++i)
        {
            sum += arr[i];
            
            consecutive_pos_sum += arr[i];
            maximun_consecutive_pos_sum = max(maximun_consecutive_pos_sum, consecutive_pos_sum);
            consecutive_pos_sum = max(consecutive_pos_sum, 0);
            
            consecutive_neg_sum += arr[i];
            minimun_consecutive_neg_sum = min(minimun_consecutive_neg_sum, consecutive_neg_sum);
            consecutive_neg_sum = min(consecutive_neg_sum, 0);
        }
        
        // when ma < 0, it means there is no consequtive positive number at all, just return the max (negtive) eement.
        // then we have two cases:
        // 1. we can use the max consecutive positive sum, or
        // 2. we can use the total sum minus the min consecutive negtive sum.
        return maximun_consecutive_pos_sum < 0 
            ? maximun_consecutive_pos_sum 
            : max(maximun_consecutive_pos_sum, sum - minimun_consecutive_neg_sum);
    }
};
```
