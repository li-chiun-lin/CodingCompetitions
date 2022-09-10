# Easy

Given n balls . All of them are initially  uncolored . You have to color the balls with two colors RED and BLUE such that there can be atmost 2 positions where a RED ball is touching BLUE ball or vice versa. You have to color all the balls.Find the number of ways in which balls can be colored.

```cpp
class Solution {
  public:
    unsigned long long int noOfWays(unsigned long long int n){
        return n * (n - 1) + 2;
    }
};
```
