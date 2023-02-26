# Problem

 The enemy has invaded your spaceship, and only superior tactics will allow you to defend it! To travel around your spaceship, your soldiers will use two devices: teleporters and turbolifts.

Teleporters allow your soldiers to move instantly between rooms. Every room contains a teleporter, and rooms are color-coded: if a soldier is in a room with some color, she can use the teleporter in that room to immediately move to any other room with the same color.

Turbolifts allow your soldiers to move between rooms more slowly. A turbolift is like an elevator that moves in many directions. Each turbolift moves from one room to one other room, and it takes a certain amount of time to travel. Notes about turbolifts:

- Turbolifts are not two-way: if a turbolift moves soldiers from room $a$ to room $b$, the same turbolift cannot move soldiers from room $b$ to room $a$, although there might be another turbolift that does that.
- More than one soldier can use the same turbolift, and they do not interfere with each other in any way.

You will be given the locations and destinations of several soldiers. For each soldier, output the minimum amount of time it could take that soldier to travel from his location to his destination.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.

For every test case:

The first line of every test case contains an integer $N$, which is the number of rooms in your spaceship. The rooms are numbered from $1$ to $N$. The following $N$ lines each contain a string telling the color of the rooms, from room $1$ to room $N$. The strings only contain characters a-z (the lower-case English letters) and 0-9 (the number 0 to 9), and the length of each string will be less than or equal to 2.

The next line in the test case is an integer $M$, which indicates the number of turbolifts in your spaceship. The following $M$ lines each contain 3 space-separated integers $a_i$, $b_i$, $t_i$, telling us that there is a turbolift that can transport soldiers from room $a_i$ to room $b_i$ in $t_i$ seconds.

The next line in the test case contains an integer $S$, which is the number of soldiers at your command. The following $S$ lines each contain two integers: the location and destination of one soldier, $p_j$ and $q_j$.
