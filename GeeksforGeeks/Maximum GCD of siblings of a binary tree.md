# Easy

Given a 2d list that represents the nodes of a Binary tree with $N$ nodes, the task is to find the maximum GCD of the siblings of this tree without actually constructing it.

Note:

- If there are no pairs of siblings in the given tree, print $0$.
- Also, if given that there's an edge between $a$ and $b$ in the form of {$a,b$} in the list, then $a$ is the parent node.

```cpp
class Solution {
  public:
    int maxBinTreeGCD(vector<vector<int>> arr, int N) {
        map<int, vector<int>> adj;
        
        for (auto &a : arr)
            adj[a[0]].push_back(a[1]);
            
        int ret = 0;
        
        for (auto &h : adj)
            if (h.second.size() == 2)
                ret = max(ret, __gcd(h.second[0], h.second[1]));
        
        return ret;
    }
};
```
