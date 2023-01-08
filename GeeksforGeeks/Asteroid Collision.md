# Medium

We are given an integer array $asteroids$ of size $N$ representing asteroids in a row. For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are of same size, both will explode. Two asteroids moving in the same direction will never meet.

```cpp
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        vector<int> ret;
        
        for (int a : asteroids)
        {
            if (a > 0)
                ret.push_back(a);
            else
            {
                while (ret.size() && ret.back() > 0 && ret.back() < - a)
                    ret.pop_back();
                    
                if (ret.size())
                {
                    if (ret.back() == -a)
                        ret.pop_back();
                    else if (ret.back() < 0)
                        ret.push_back(a);
                    else
                        ;
                }
                else
                    ret.push_back(a);
            }
        }
        
        return ret;
    }
};
```
