# Easy

You are given an array of $N+2$ integer elements. All elements of the array are in the range $1$ to $N$. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.

```cpp
class Solution {
public:
    vector<int> twoRepeated (int arr[], int N) {
        vector<int> ret;
        
        for (int i = 0; i <= N + 1; ++i)
        {
            int idx = abs(arr[i]);
            
            if (arr[idx] < 0)
                ret.push_back(idx);
                
            arr[idx] *= -1;
        }
        
        return ret;
    }
};
```
