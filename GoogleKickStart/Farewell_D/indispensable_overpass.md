# Problem

A modern railroad system built in Ekiya's town bumped into a major hurdle: the main freeway running north to south. $W$ stations have already been built and connected on the western side of the freeway and $E$ on the eastern side. One more connection is needed between a western and an eastern station, but because the freeway is in the way, that connection needs to be built using an overpass.

Ekiya is assessing which stations would be most convenient to connect with the overpass. As part of that assessment, she wants to know how the average length (in number of stations) of a path within the system might change with each possible option.

A path between stations $s$ and $t$ is a list of distinct stations that starts with $s$, ends with $t$, and such that any two consecutive stations on the list share a connection. The railroad system currently has $W$ stations on the western side, connected through $W−1$ connections such that there is exactly one path between any two distinct western stations. Similarly, there are $E$ eastern stations connected through $E−1$ connections such that there is exactly one path between any two distinct eastern stations. After the overpass connection is built connecting one western and one eastern station, there will be exactly one path between any two distinct stations.

A complete map is a map that has $W+E−1$ total connections and exactly one path between any pair of stations. The average distance of a complete map is the average of the length of paths between all pairs of different stations. The length of a path is one less than the length of the list of stations that defines it (e.g., the path between directly connected stations has a length of $1$).

As an example, the picture below illustrates a scenario with $W=2$ stations on the west side and $E=3$ stations on the east side. There are $2$ possible overpasses shown.

Illustration of Sample Case #1

This table shows the lengths of the paths between pairs of stations if each overpass were to be built.

|       |       | West 1 ↔ East 1   | West 2 ↔ East 3   |
| ---   | ---   | :---:             | :---:             |
|West 1 |West 2 |1                  |1                  |
|West 1 |East 1 |1                  |3                  |
|West 1 |East 2 |3                  |3                  |
|West 1 |East 3 |2                  |2                  |
|West 2 |East 1 |2                  |2                  |
|West 2 |East 2 |4                  |2                  |
|West 2 |East 3 |3                  |1                  |
|East 1 |East 2 |2                  |2                  |
|East 1 |East 3 |1                  |1                  |
|East 2 |East 3 |1                  |1                  |
|       |Average:|2                 |1.8                |

Given the current stations and connections, and a list of options for the overpass connection, help Ekiya by calculating the average distance of the map that would result if that option was the only overpass connection built.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case starts with a line with three integers $W$, $E$, and $C$, the number of western and eastern stations, and the number of options for the overpass connection, respectively. Western stations are numbered between $1$ and $W$ and eastern connections are numbered between $1$ and $E$.

The second line of a test case contains $W−1$ integers $X_1,X_2,…,X_{W−1}$ representing that the $i$-th existing connection among western stations connects western stations $i$ and $X_i$.

The third line of a test case contains $E−1$ integers $F_1,F_2,…,F_{E−1}$ representing that the $j$-th existing connection among eastern stations connects eastern stations $j$ and $F_j$.

Finally, the last $C$ lines of a test case describe the options for the overpass connection. The $k$-th of these lines contains two integers $A_k$ and $B_k$ representing the western and eastern stations, respectively, that the $k$-th option for an overpass connection would connect.
