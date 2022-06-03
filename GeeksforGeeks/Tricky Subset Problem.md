# Medium

$N$ children are made to stand in a queue. Each of them is given a number $A[i]$. The teacher writes a number $S$ on a page and passes it to the first child. Each child must add all the numbers they see on the page along with their own number, write the sum on the paper and pass it to the next person.

In the end, the teacher must determine if $X$ can be formed by adding some of the numbers from the series of numbers written on the paper.

```cpp
class Solution{
public:
    int isPossible(long long S, long long N, long long X, long long A[])
    {
        vector<unsigned long long> seq = {S};
        long long sum = S;
        
        for (long long i = 0; i < N && seq.back() <= X; ++i)
        {
            seq.push_back(sum + A[i]);
            sum += seq.back();
        }
            
        for (long long j = seq.size() - 1; j >= 0 && X; --j)
            if (X >= seq[j])
                X -= seq[j];
                
        return X == 0;
    }
};
```
