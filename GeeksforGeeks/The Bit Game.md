# Easy

Two players, Player 1 and Player 2, are given an integer $N$ to play a game. The rules of the game are as follows :

1. In one turn, a player can swap any 2 bits of $N$ in its binary representation to make a new $N$.
2. In one turn, a player has to make a number strictly less than $N$.
3. Player 1 always takes first turn.
4. If a player cannot make a move, he loses.

Assume that both the players play optimally.

```cpp
class Solution{   
public:
    int swapBitGame(long long N){
        long long cnt = 0;
        long long ret = 0;
        
        while (N)
        {
            if (N & 1)
                ret ^= cnt;
            else
                ++ cnt;
            
            N >>= 1;
        }
        
        return ret ? 1 : 2;
    }
};
```
