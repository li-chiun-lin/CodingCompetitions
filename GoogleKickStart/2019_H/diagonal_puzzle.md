# Problem

Kibur has made a new puzzle for you to solve! The puzzle consists of an N by N grid of squares. Each square is either black or white. The goal of the puzzle is to make all the squares black in as few moves as possible.

In a single move, you may choose any diagonal of squares and flip the color of every square on that diagonal (black becomes white and white becomes black). For example, the 10 possible diagonals for a 3 by 3 grid are shown below.

```text
/..      ./.      ../      ...      ...
...      /..      ./.      ../      ...
...      ...      /..      ./.      ../


...      ...      \..      .\.      ..\
...      \..      .\.      ..\      ...
\..      .\.      ..\      ...      ...
```

Given the initial configuration of the board, what is the fewest moves needed to make all the squares black? You are guaranteed that it is possible to make all the squares black.
