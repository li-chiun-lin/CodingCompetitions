# Problem

As punishment for being naughty, Dante has been trapped in a strange house with many rooms. The house is an $N×N$ grid of rooms, with $N$ odd and greater than $1$. The upper left room is numbered $1$, and then the other rooms are numbered $2, 3, ..., N^2$, in a clockwise spiral pattern. That is, the numbering proceeds along the top row of the grid and then makes a 90 degree turn to the right whenever a grid boundary or an already numbered room is encountered, and finishes in the central room of the grid. Because $N$ is odd, there is always a room in the exact center of the house, and it is always numbered $N^2$.

For example, here are the room numberings for houses with $N=3$
and $N=5$:

The image shows a $3x3$ grid of rooms and a $5x5$ grid of rooms. Each room is numbered as described above.

Dante starts off in room $1$ and is trying to reach the central room (room $N^2$). Throughout his journey, he can only make moves from his current room to higher-numbered, adjacent rooms. (Two rooms must share an edge — not just a corner — to be adjacent.)

Dante knows that he could walk from room to room in consecutive numerical order — i.e., if he is currently in room $x$, he would move to room $x+1$, and so on. This would take him exactly $N^2−1$ moves. But Dante wants to do things his way! Specifically, he wants to reach the central room in exactly $K$ moves, for some $K$ strictly less than $N^2−1$.

Dante can accomplish this by taking one or more shortcuts. A shortcut is a move between rooms that are not consecutively numbered.

For example, in the 5×5house above,

- If Dante is at $1$, he cannot move to $17$, but he can move to $2$ or to $16$. The move to $2$ is not a shortcut, since $1+1=2$. The move to $16$ is a shortcut, since $1+1≠16$.
- From $2$, it is possible to move to $3$ (not a shortcut) or to $17$ (a shortcut), but not to $1$, $16$, or $18$.
- From $24$, Dante can only move to $25$ (not a shortcut).
- It is not possible to move out of room $25$.

As a specific example using the 5×5house above, suppose that $K = 4$. One option is for Dante to move from $1$ to $2$, then move from $2$ to $17$ (which is a shortcut), then move from $17$ to $18$, then move from $18$ to $25$ (which is another shortcut). This is illustrated below (the red arrows represent shortcuts):

The image shows a $5x5$ grid of rooms numbered as described in the statement. A path with arrows goes from $1$ to $2$ to $17$ to $18$ to $25$. The arrows between $2$ and $17$ as well as $18$ and $25$ are red to show they are shortcuts.

Can you help Dante find a sequence of exactly $K$ moves that gets him to the central room, or tell him that it is impossible?
