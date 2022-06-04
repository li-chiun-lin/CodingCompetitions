# Hard

Given a sorted dictionary of an alien language having $N$ words and $k$ starting alphabets of standard dictionary. Find the order of characters in the alien language.

```cpp
class Solution{
public:
    string findOrder(string dict[], int N, int K) {
        vector<vector<int>> adj(K);
        vector<int> deg(K);
        
        for (int i = 1; i < N; ++i)
            for (int j = 0; j < dict[i - 1].size() && j < dict[i].size(); ++j)
                if (dict[i - 1][j] != dict[i][j])
                {
                    adj[dict[i - 1][j] - 'a'].push_back(dict[i][j] - 'a');
                    ++ deg[dict[i][j] - 'a'];
                    break;
                }
        
        string ret = "";
        queue<int> que;
        
        for (int i = 0; i < K; ++i)
            if (deg[i] == 0)
                que.push(i);
                
        while (que.size())
        {
            int u = que.front();
            que.pop();
            ret += u + 'a';
            
            for (int v : adj[u])
                if (-- deg[v] == 0)
                    que.push(v);
        }
        
        return ret;
    }
};
```
