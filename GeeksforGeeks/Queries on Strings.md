# Medium

Given a string **str** you have to answer several queries on that string. In each query you will be provided two values **L** and **R** and you have to find the number of distinct characters in the sub string from index **L** to index **R** (inclusive) of the original string.

```cpp
Given a string str you have to answer several queries on that string. In each query you will be provided two values L and R and you have to find the number of distinct characters in the sub string from index L to index R (inclusive) of the original string.class Solution {
public:
    vector<int>SolveQueris(string str, vector<vector<int>>Query){
        int n = str.size();
        int m = Query.size();
        vector<map<char, int>> acc(n + 1);
        vector<int> ret(m);
        
        for (int i = 0; i < n; ++i)
        {
            acc[i + 1] = acc[i];
            ++ acc[i + 1][str[i]];
        }
        
        for (int i = 0; i < m; ++i)
            for (char c = 'a'; c <= 'z'; ++c)
                ret[i] += (acc[Query[i][1]][c] - acc[Query[i][0] - 1][c]) > 0;
        
        return ret;
    }
};