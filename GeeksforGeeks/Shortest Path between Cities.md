# Medium

Geek lives in a special city where houses are arranged in a hierarchial manner. Starting from house number $1$, each house leads to two more houses.  

- $1$ leads to $2$ and $3$.
- $2$ leads to $4$ and $5$.
- $3$ leads to $6$ and $7$. and so on.

Given the house numbers on two houses $x$ and $y$, find the length of the shortest path between them.

```cpp
class Solution{   
    int msb(int n)
    {
        int cnt = 0;
        
        while (n)
        {
            n >>= 1;
            ++ cnt;
        }
        
        return cnt;
    }
    
public:
    int shortestPath( int x, int y){ 
        if (x == y)
            return 0;
            
        if (x < y)
            swap(x, y);
            
        int cnt = 0;
        int bx = msb(x);
        int by = msb(y);
        
        while (bx > by)
        {
            -- bx;
            x >>= 1;
            ++ cnt;
        }
        
        while (x != y)
        {
            cnt += 2;
            x >>= 1;
            y >>= 1;
        }
        
        return cnt;
    }
};
```
