# Problem

 The enemy has invaded your spaceship, and only superior tactics will allow you to defend it! To travel around your spaceship, your soldiers will use two devices: teleporters and turbolifts.

Teleporters allow your soldiers to move instantly between rooms. Every room contains a teleporter, and rooms are color-coded: if a soldier is in a room with some color, she can use the teleporter in that room to immediately move to any other room with the same color.

Turbolifts allow your soldiers to move between rooms more slowly. A turbolift is like an elevator that moves in many directions. Each turbolift moves from one room to one other room, and it takes a certain amount of time to travel. Notes about turbolifts:

- Turbolifts are not two-way: if a turbolift moves soldiers from room $a$ to room $b$, the same turbolift cannot move soldiers from room $b$ to room $a$, although there might be another turbolift that does that.
- More than one soldier can use the same turbolift, and they do not interfere with each other in any way.

You will be given the locations and destinations of several soldiers. For each soldier, output the minimum amount of time it could take that soldier to travel from his location to his destination.
