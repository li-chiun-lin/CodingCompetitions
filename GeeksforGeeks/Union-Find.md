# Easy

This problem is to implement disjoint set union. There will be 2 incomplete functions namely union and find. You have to complete these functions.

- **Union**: Join two subsets into a single set.
- **isConnected**: Determine which subset a particular element is in. This can be used for determining if two elements are in same subset.

```cpp
class Solution
{
public:
    int find(int x, int par[])
    {
        if (x != par[x])
            par[x] = find(par[x], par);
        
        return par[x];
    }
    
    //Function to merge two nodes a and b.
    void union_( int a, int b, int par[], int rank1[]) 
    {
        int ga = find(a, par);
        int gb = find(b, par);
        
        if (ga == gb)
            return;
            
        par[ga] = gb;
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        return find(x, par) == find(y, par);
    }
};
```
