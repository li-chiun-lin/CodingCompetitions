# Medium

Given a string $S$ on which you need to perform $Q$ replace operations.

Each replacement operation has $3$ parameters:

- a starting index $i$.
- a source word $x$.
- a target word $y$.

The rule is that if $x$ starts at position $i$ in the original string $S$, then we will replace that occurrence of $x$ with $y$. If not, we do nothing.

```cpp
class Solution {
  public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        vector<pair<size_t, int>> hit;
        
        // check if it is a valid replacement
        for (int i = 0; i < Q; ++i)
            if (S.find(sources[i], index[i]) == index[i])
                hit.push_back({index[i], i});
        
        // we have to start from the end of the string to avoid messing the index.
        sort(begin(hit), end(hit), greater<>());
        
        // perform the replacement
        for (auto &h : hit)
            S.replace(S.find(sources[h.second], h.first), sources[h.second].size(), targets[h.second]);
        
        return S;
    }
};
```
