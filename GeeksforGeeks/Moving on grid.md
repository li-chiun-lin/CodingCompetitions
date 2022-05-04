# Easy

Given a grid on XY plane with dimensions **r x c**, the two players (say JON and ARYA ) can move the coin over the grid satisfying the following rules:

- There is a coin on **(1,1)** cell initially.
- JON will move first.
- Both will play on alternate moves.
- In each move they can place coin on following positions if current position of coin is **x,y** \
 **(x+1,y), (x+2,y), (x+3,y), (x,y+1), (x,y+2), (x,y+3), (x,y+4), (x,y+5), (x,y+6)**
- They can't go outside the grid.
- Player who cannot make any move will lose this game.
Both play optimally.

```cpp
class Solution {
  public:
    string movOnGrid(int r, int c) {
        return ((r - 1) % 7) == ((c - 1) % 4) ? "ARYA" : "JON";
    }
};
```
