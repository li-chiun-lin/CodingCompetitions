# Medium

Given an array $A$ of $N$ of integers, find the index of values that satisfy $A + B = C + D$ where $A$, $B$, $C$ and $D$ are integers values in the array.

Note: As there may be multiple pairs satisfying the equation return lexicographically smallest order of $A$, $B$, $C$ and $D$ and return all as $-1$ if there are no pairs satisfying the equation.

```cpp
class Solution {
    bool cmp(vector<int>& a, vector<int>& b)
    {
        if (a.empty())
            return true;
            
        for (int i = 0; i < 4; ++i)
        {
            if (b[i] == a[i])
                continue;
            
            return b[i] < a[i];
        }
                
        return false;
    }
    
public:
    vector<int> satisfyEqn(int A[], int N) {
        map<int, vector<vector<int>>> hit;
        
        // this is the core idea
        for (int i = 0; i < N; ++i)
            for (int j = i + 1; j < N; ++j)
                hit[A[i] + A[j]].push_back({i, j});
                
        vector<int> ret; 
        
        // the rest are some clumsy de-duplicate code...
        for (auto& h : hit)
        {
            auto& v = h.second;
            
            if (v.size() >= 2)
            {
                vector<int> tmp = {v[0][0], v[0][1], -1, -1};
                
                for (int i = 1; i < v.size(); ++i)
                {
                    if (v[i][0] != tmp[0] 
                     && v[i][1] != tmp[1]
                     && v[i][0] != tmp[1]
                     && v[i][1] != tmp[0])
                    {
                        tmp[2] = v[i][0];
                        tmp[3] = v[i][1];
                        break;
                    }
                }
                
                if (tmp[3] == -1)
                    continue;
                    
                if (cmp(ret, tmp))
                    ret = tmp;
            }
        }
        
        if (ret.empty())
            ret = {-1, -1, -1, -1};;
            
        return ret;
    }
};
```
