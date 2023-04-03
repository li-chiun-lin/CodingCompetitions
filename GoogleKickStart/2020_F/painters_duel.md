# Problem

A new art museum is about to open! It is a single-story building in the shape of a large equilateral triangle. That triangle is made up of many smaller identical equilateral-triangle-shaped rooms, and the side length of the museum is S times the side length of any one of the rooms. Each room has doors connecting it to all other rooms with which it shares a side (not just a vertex).

Each room is identified by two numbers: the row of the building it is in (counting from top to bottom, starting from 1), followed by its position within that row (counting from left to right, starting from 1). Here is an example of how the rooms are connected and labeled when S = 3:

Alma and Berthe are artists who are painting the rooms of the museum. Alma starts in the room (RA, PA), and Berthe starts in a different room (RB, PB). Each of them has already painted their starting room. C of the other rooms of the museum are under construction, and neither Alma nor Berthe is allowed to enter these rooms or paint them.

Alma and Berthe are having a friendly competition and playing a turn-based game, with Alma starting first. On a painter's turn, if their current room is adjacent to at least one unpainted room that is not under construction, the painter must choose one of those rooms, move to it, and paint it. Otherwise, the painter cannot move and does nothing on their turn. Once both painters are unable to move, the game is over. The score of the game is the number of rooms painted by Alma minus the number of rooms painted by Berthe.

Both painters make optimal decisions, with Alma trying to maximize the score and Berthe trying to minimize the score. Given this, determine the best score Alma can guarantee for the game, regardless of what Berthe does.
