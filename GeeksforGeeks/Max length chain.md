# Medium

You are given $N$ pairs of numbers. In every pair, the first number is always smaller than the second number. A pair $(c, d)$ can follow another pair $(a, b)$ if $b < c$. Chain of pairs can be formed in this fashion. You have to find the longest chain which can be formed from the given set of pairs.

```cpp
bool cmp(struct val& a, struct val &b)
{
    return a.second < b.second;
}

class Solution{
public:
    int maxChainLen(struct val p[],int n){
        sort(p, p + n, cmp);
        
        int fst = INT_MIN;
        int ret = 0;
        
        for (int i = 0; i < n; ++i)
            if (fst < p[i].first)
            {
                ++ ret;
                fst = p[i].second;
            }
            
        return ret;
    }
};
```
