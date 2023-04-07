# Problem

Ada lives in a magic country A, and she is studying at Magic University. Today, Ada wants to collect magic points in a special space.

The space has N rooms (0,1,…,N−1). There are M corridors connecting the rooms. A corridor j connects room Xj and room Yj, meaning you can travel between the two rooms.

The i-th room contains Ai magic points and is protected by a magic shield with properties Li and Ri. To enter the i-th room, first you need to get to any room adjacent to the i-th room (i.e. connected to it by a corridor) through rooms with already broken shields. Then you have to break the shield to this room, but you can break the shield if and only if you have between Li and Ri magic points, inclusive. After you break the shield, you will enter the room and automatically collect the Ai magic points assigned to this room. The room will not generate new magic points. The room will also not generate a new shield after it is broken, so you can freely go back to every room with already broken shields regardless of the amount of points you have.

Ada starts with 0 magic points and her goal is to find a way to collect exactly K magic points. She can start in any room, and end in any room. The room she chooses to start in will automatically have its magic shield broken, and she will automatically collect all the magic points from this room.

After inspecting the map of the rooms and corridors, Ada thinks the task is very easy, so she wants to challenge herself with a more difficult task. She wants to know how many unique ways there are to reach the goal. Two ways are different if their unique paths are different. The unique path is the order of rooms in which she broke the shields, e.g.: if you visit the rooms in the order (1,3,2,1,3,5,3,6), the unique path is (1,3,2,5,6).
