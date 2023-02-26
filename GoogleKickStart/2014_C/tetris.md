# Problem

Tetris is a famous video game that almost everyone has played it. In this problem, you need to simulate a simplified version of it.

In our version, the game is played in a $W$ by $H$ field with gravity. At the beginning, the field is empty. Then the tetrominos start to fall from above top of the field to bottom of the field, one by one. Each tetromino will stop as soon as it touches some other tetrominos or bottom of the field.

One interesting feature of the game is called "line clearing". A line will be cleared as soon as it is filled by tetrominos. More than one line may be cleared at a time. For example:

```text
  |..............|      |..............|      |..............|
  |.............o|      |..............|      |..............|
  |.............o|      |..............|      |..............|
  |.............o|      |..............|      |..............|
  |.............o|      |..............|      |..............|
  |..xx..........| -->  |..xx..........| -->  |..............|
  |xxxxxxxxxxxxx.|      |xxxxxxxxxxxxxo|      |..............|
  |xxxxxxxxxxxxx.|      |xxxxxxxxxxxxxo|      |..xx..........|
  |xx..xxxxxxxxx.|      |xx..xxxxxxxxxo|      |xx..xxxxxxxxxo|
  |xxxxxxxxxxx...|      |xxxxxxxxxxx..o|      |xxxxxxxxxxx..o|
  ----------------      ----------------      ----------------

  Falling               Stopped               Cleared 2 lines
```

Note that in this simplified version, the "floating" tetromino blocks won't continue to fall after lines are cleared. This is why the top-most two squares will keep in such position. Consequently, cascade clearing won't happen, even though it would happen in the original version of Tetris.

The game ends when all the given tetrominos are placed, or the current tetromino cannot be placed due to the height limit of the field is reached.

In this problem, each tetromino will has its type, rotation and falling position told by the input. They will start to fall from the above of the field. Your goal is to simulate and get the final result of each play.

## Input

We have 7 types of tetromino:

```text
1   2   3   4   5   6   7

x    x  x    x  xx  x    x
xx  xx  x    x  xx  x   xxx
 x  x   xx  xx      x
                    x
```

Rotation of a tetromino is represented by a number $r$. $r$ can be $0$, $1$, $2$ or $3$. Rotation is counterclockwise. For example:

```text
r=0   r=1  r=2   r=3

  x     x   xxx   x
 xxx   xx    x    xx
        x         x

 x     xx   x     xx
 xx   xx    xx   xx
  x          x
```

The horizontal falling position is represented by a number $x$. It is the coordinate of the lower left square of a tetromino's bounding box. Here $x$ starts from $0$.

The first line of the input gives the number of test cases, $T$. For each test case, the first line of input has 3 integers, $W, H, N$. $W$ is the width, $H$ is the height and $N$ is the number of blocks that are going to fall.

Then $N$ lines below, each line has 3 integers, $t_i, r_i, x_i$. $t_i$ tells the tetromino type. $r_i$ is the rotation of this tetromino. $x_i$ is the horizontal falling position of this tetromino. It is guaranteed that $x_i$ will make the tetromino inside the field, horizontally.
