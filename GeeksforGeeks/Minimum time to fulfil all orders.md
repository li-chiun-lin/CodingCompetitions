# Hard

Geek is organizing a party at his house. For the party, he needs exactly $N$ donuts for the guests. Geek decides to order the donuts from a nearby restaurant, which has $L$ chefs and each chef has a rank $R$.

A chef with rank $R$ can make $1$ donut in the first $R$ minutes, $1$ more donut in the next $2 \times R$ minutes, $1$ more donut in $3 \times R$ minutes, and so on. A chef can move on to making the next donut only after completing the previous one. All the chefs can work simultaneously.

Since, it's time for the party, Geek wants to know the minimum time required in completing $N$ donuts. Return an integer denoting the minimum time.

```cpp
class Solution{
    public:
    int findMinTime(int N, vector<int>&A, int L){
        map<int, int> donuts;
        
        for (int r : A)
        {
            int rr = 0;
            int t = 0;
            
            for (int i = 0; i < N; ++i)
            {
                rr += r;
                t += rr;
                ++ donuts[t];
            }
        }
        
        int acc = 0;
        int t = 1;
        
        while (acc < N)
            acc += donuts[t ++];
        
        return t - 1;
    }
};
```
