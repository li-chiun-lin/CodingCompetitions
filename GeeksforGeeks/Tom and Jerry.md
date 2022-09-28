# Easy

Tom and Jerry being bored in this pandemic, decides to play a game. Given an integer $N$. On each player's turn, that player makes a move by subtracting a divisor of current $N$ (which is less than $N$) from current $N$, thus forming a new $N$ for the next turn. The player who does not have any divisor left to subtract loses the game.

The game begins with Tom playing the first move. Both Tom and Jerry play optimally. The task is to determine who wins the game. Return $1$ if Tom wins, else return $0$.

```cpp
class Solution {
  public:
    int numsGame(int N) {
        return 1 - (N % 2);
    }
};
```
