# Medium

A board of length $M$ and width $N$ is given. The task is to break this board into $M \times N$ squares such that cost of breaking is minimum. The cutting cost for each edge will be given for the board in two arrays $X$ and $Y$. In short, you need to choose such a sequence of cutting such that cost is minimized. Return the minimized cost.

```cpp
class Solution {
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        sort(begin(X), end(X));
        sort(begin(Y), end(Y));
        int x = X.size() - 1;
        int y = Y.size() - 1;
        int h = 1;
        int v = 1;
        int ans = 0;
        
        while (x >= 0 && y >= 0)
        {
            if (X[x] > Y[y])
            {
                ans += X[x --] * v;
                ++ h;
            }
            else
            {
                ans += Y[y --] * h;
                ++ v;
            }
        }
        
        while (x >= 0)
            ans += X[x --] * v;
        
        while (y >= 0)
            ans += Y[y --] * h;
        
        return ans;
    }
};
```
