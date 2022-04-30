# Problem

You are given an undirected weighted tree, in which 1 is the root node. Control value of each node denoted by **c<sub>i</sub>**

Let's take two nodes (**V**,**U** ) such that **V** is the ancestor of **U**. **V** controls **U** if the distance between **U** and **V** is less than or equal to the control value of **U**

Find the number of vertices controlled by each node.

```cpp
vector<int> solve (int N, vector<int> c, vector<int> p, vector<int> w) {
   vector<vector<pair<int, int>>> adj(N + 1);
   vector<int> ret(N);

   for (int i = 0; i < p.size(); ++i)
      adj[p[i]].push_back({i + 2, w[i]});

   for (int i = 1; i <= N; ++i)
   {
      queue<pair<int, long long>> que;
      que.push({i, 0});

      while (que.size())
      {
         int v = que.front().first;
         long long a = que.front().second;
         que.pop();

         for (auto u : adj[v])
         {
            long long ww = a + u.second;

            if (ww <= c[u.first - 1])
               ++ ret[i - 1];

            que.push({u.first, ww});
         }
      }
   }

   return ret;
}
```
