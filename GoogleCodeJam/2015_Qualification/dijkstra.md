# Problem

The Dutch computer scientist Edsger Dijkstra made many important contributions to the field, including the shortest path finding algorithm that bears his name. This problem is not about that algorithm.

You were marked down one point on an algorithms exam for misspelling "Dijkstra" -- between D and stra, you wrote some number of characters, each of which was either i, j, or k. You are prepared to argue to get your point back using quaternions, an actual number system (extended from complex numbers) with the following multiplicative structure:

|   |1  |i  |j  |k  |
|---|---|---|---|---|
|1  |1  |i  |j  |k  |
|i  |i  |-1 |k  |-j |
|j  |j  |-k |-1 |i  |
|k  |k  |j  |-i |-1 |

To multiply one quaternion by another, look at the row for the first quaternion and the column for the second quaternion. For example, to multiply i by j, look in the row for i and the column for j to find that the answer is k. To multiply j by i, look in the row for j and the column for i to find that the answer is -k.

As you can see from the above examples, the quaternions are not commutative -- that is, there are some a and b for which $a \times b != b \times a$. However they are associative -- for any a, b, and c, it's true that $a \times (b \times c) = (a \times b) \times c$.

Negative signs before quaternions work as they normally do -- for any quaternions a and b, it's true that $-a \times -b = a \times b$, and $-a \times b = a \times -b = -(a \times b)$.

You want to argue that your misspelling was equivalent to the correct spelling ijk by showing that you can split your string of is, js, and ks in two places, forming three substrings, such that the leftmost substring reduces (under quaternion multiplication) to i, the middle substring reduces to j, and the right substring reduces to k. (For example, jij would be interpreted as $j \times i \times j$; $j \times i$ is $-k$, and $-k \times j$ is $i$, so $jij$ reduces to $i$.) If this is possible, you will get your point back. Can you find a way to do it?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with two space-separated integers L and X, followed by another line with L characters, all of which are i, j, or k. Note that the string never contains negative signs, 1s, or any other characters. The string that you are to evaluate is the given string of L characters repeated X times. For instance, for L = 4, X = 3, and the given string kiij, your input string would be kiijkiijkiij.
