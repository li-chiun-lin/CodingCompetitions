# Easy

Initially, the zoo have a single chick. A chick gives birth to $2$ chicks every day and the life expectancy of a chick is $6$ days. Zoo officials want to buy food for chicks so they want to know the number of chicks on an $N$-th day. Help the officials with this task.

```cpp
class Solution {
public:
    long long int NoOfChicks(int n){
        long long sum = 1;
        long long nb = 0;
        queue<long long> que;
        que.push(1);
        
        // for each day gone by,
        for (int i = 1; i < n; ++i)
        {
            // if there are any chicken lived for 6 days, they die.
            if (que.size() == 6)
            {
                sum -= que.front();
                que.pop();
            }
            
            // for all those living chicken, they provoid 2 new born chickens,
            nb = sum * 2;
            // those new born chickens start to live this day
            que.push(nb);
            // update the total number.
            sum += nb;
        }
        
        return sum;
    }
};
```
