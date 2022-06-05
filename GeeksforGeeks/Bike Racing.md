# Hard

Geek is organising a bike race with $N$ bikers. The initial speed of the $i$-th biker is denoted by $H_i$ Km/hr and the acceleration of $i$-th biker as $A_i$ Km/Hr2. A biker whose speed is $L$ or more is considered to be a fast biker. The total speed on the track for every hour is calculated by adding the speed of each fast biker in that hour. When the total speed on the track is $M$ kilometers per hour or more, the safety alarm turns on.

Find the minimum number of hours after which the safety alarm will start.

```cpp
class Solution{
    bool okay(long N, long M, long L, long H[], long A[], int hour)
    {
        long total = 0;
        long speed = 0;
        
        for (int i = 0; i < N; ++i)
        {
            speed = H[i] + A[i] * hour;
            
            if (L <= speed)
                total += speed;
        }
                
        return M <= total;
    }
    
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        int l = 0;
        int r = M;
        int m = 0;
        
        while (l < r)
        {
            m = l + (r - l) / 2;
            
            if (okay(N, M, L, H, A, m))
                r = m;
            else
                l = m + 1;
        }
        
        return r;
    }
};
```
