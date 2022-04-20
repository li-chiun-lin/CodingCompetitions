# Easy

The worlds most successful thief Albert Spaggiari was planning for his next heist on the world bank. He decides to carry a sack with him, which can carry a maximum weight of **C** kgs. Inside the world bank there were **N** large blocks of gold. All the blocks have some profit value associated with them i.e. if he steals ith block of weight **w[i]** then he will have **p[i]** profit. As blocks were heavy he decided to steal some part of them by cutting them with his cutter. \
The thief does not like symmetry, hence, he wishes to not take blocks or parts of them whose weight is a perfect square. Now, you need to find out the maximum profit that he can earn given that he can only carry blocks of gold in his sack.

```cpp
class cmp
{
public:
    bool operator()(pair<long long, long long> &a, pair<long long, long long> &b)
    {
        // a.first / a.second < b.first / b.second
        return a.first * b.second < b.first * a.second;
    }
};

class Solution {
    
    bool isPerfect(long long x)
    {
        long long r = sqrt(x);
        return r * r == x;
    }
    
    public:
    long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p){
        vector<pair<long long, long long>> vec;

        for (int i = 0; i < N; ++i)
        {
            if (isPerfect(w[i]))
                continue;

            vec.push_back({w[i], p[i]});
        }

        sort(vec.begin(), vec.end(), cmp());

        long double ret = 0.0;

        for (int i = 0; i < vec.size() && C; ++i)
        {
            if (vec[i].first <= C)
            {
                ret += vec[i].second;
                C -= vec[i].first;
            }
            else
            {
                ret += (long double)C * vec[i].second / vec[i].first; 
                C = 0;
            }
        }

        return ret;
    }
};
```
