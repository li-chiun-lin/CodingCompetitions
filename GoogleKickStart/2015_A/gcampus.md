# Problem

Company G has a main campus with $N$ offices (numbered from $0$ to $N - 1$) and $M$ bidirectional roads (numbered from $0$ to $M - 1$). The $i$-th road connects a pair of offices $(U_i, V_i)$, and it takes $C_i$ minutes to travel on it (in either direction).

A path between two offices $X$ and $Y$ is a series of one or more roads that starts at $X$ and ends at $Y$. The time taken to travel a path is the sum of the times needed to travel each of the roads that make up the path. (It's guaranteed that there is at least one path connecting any two offices.)

Company G specializes in efficient transport solutions, but the CEO has just realized that, embarrassingly enough, its own road network may be suboptimal! She wants to know which roads in the campus are inefficient. A road is inefficient if and only if it is not included in any shortest paths between any offices.

Given the graph of offices and roads, can you help the CEO find all of the inefficient roads?
