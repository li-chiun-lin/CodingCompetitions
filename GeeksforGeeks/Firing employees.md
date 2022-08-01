# Medium

Geek is the founder of Geek Constructions. He always maintains a black-list of potential employees which can be fired at any moment.

The company has $N$ employees (including Geek), and each employee is assigned a distinct rank ($1 \leq rank \leq N$) at the time of joining. The company has a hierarchical  management such that each employee always has one immediate senior.

Geek has a strange and unfair way of evaluating an employees performance. He sums the employee's rank and the number of seniors the employee has. If it is a prime number, the employee is put up on the black-list.

Given an array $arr$ in order of the rank of company employees. For rank $i$, $arr[i]$ represents the rank of the immediate senior of the employee with the $i$-th rank. If geek's rank is $i$, then $arr[i]$ is always equal to $0$ as there is no one senior to him. Find out the number of Black-Listed employees.

Note: The black-list can not contain Geeks name as he is the founder of the company and he is the one that makes the list.

```cpp
class Solution{  
    bool isPrime(int x)
    {
        if (x < 2)
            return false;
            
        for (int i = 2; i * i <= x; ++i)
            if (x % i == 0)
                return false;
                
        return true;
    }
    
    int dfs(vector<vector<int>>& adj, int u, int h)
    {
        int sum = 0;
        
        for (int v : adj[u])
            sum += dfs(adj, v, h + 1);
            
        if (h && isPrime(u + h))
            ++ sum;
            
        return sum;
    }
    
public:
    int firingEmployees(vector<int> &arr, int n){
        vector<vector<int>> adj(n + 1);
        
        for (int i = 0; i < n; ++i)
            adj[arr[i]].push_back(i + 1);
            
        return dfs(adj, adj[0][0], 0);
    }
};
```
