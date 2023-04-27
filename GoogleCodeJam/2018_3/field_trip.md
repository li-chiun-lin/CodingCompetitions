# Problem

N people from an elementary school — one teacher and N-1 kids — are on a field trip. They are exploring a grassy field that is an infinite two-dimensional grid of unit cells. Each person is currently occupying one of the cells; there may be multiple people in the same cell.

When it is time to go home, the teacher and kids must all gather in one cell; it does not matter which one, since their bus can pick them up anywhere. The kids have been taught an algorithm that makes it easier to gather:

- The teacher is person number 1, and the kids are numbered 2 through N.
- An action taken by a person consists of either moving to one of the 8 cells sharing at least one edge or corner with that person's current cell, or choosing to remain in their current cell.
- When the signal for the end of the field trip sounds, the teacher checks to see if all N people are in the same cell. If they are, no further action is necessary. Otherwise, the teacher begins a turn:
  1. First, the teacher takes an action, as described above. It is up to the teacher to decide where, if anywhere, to move.
  1. Then, each kid takes an action, starting with kid 2, and so on up to kid N; the i-th kid does not take their action until the (i-1)th person has taken their action. The kids' actions are deterministic: the i-th kid must choose the option that minimizes the center-to-center distance from their cell to the cell of the (i-1)th person. This is never ambiguous; one of the 9 options will uniquely minimize that distance.
- Once the turn is complete, the teacher checks again to see if all people are in the same cell. If they are not, another turn begins, and so on, until everyone is in one cell.

If the teacher makes choices that minimize the number of turns, what is that number of turns?
Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with an integer N: the number of people on the field trip. Then, there are N more lines. The i-th of these represents the i-th person, and has two integers Ri and Ci: the row and column numbers (on the grid) of the cell that the i-th person initially occupies.
