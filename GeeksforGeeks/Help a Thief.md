# Basic

You have to help a thief to steal as many as Gold Coins as possible from a Gold Mine. There he saw $N$ Gold Boxes an each Gold Boxes consists of $A_i$ Plates each plates consists of $B_i$ Gold Coins. Your task is to print the maximum gold coins the thief can steal if he can take a maximum of $T$ plates.

```cpp
class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        vector<pair<int, int>> box(N);
        int cnt = 0;
        
        for (int i = 0; i < N; ++i)
            box[i] = {B[i], A[i]};
            
        sort(begin(box), end(box), greater<>());
        
        for (int i = 0; i < N && T; ++i)
        {
            int d = min(T, box[i].second);
            
            cnt += d * box[i].first;
            T -= d;
        }
        
        return cnt;
    }
};
```
