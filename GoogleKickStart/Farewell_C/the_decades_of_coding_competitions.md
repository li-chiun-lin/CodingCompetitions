# Problem

It has been almost 15 years since Sphinny became the premiere programming contestant by mastering the art of scheduling contests. She has grown alongside Coding Competitions and graduated into a programming contest organizer, and her Programming Club League (PCL) is the most popular sport in her city.

There are $N$ bus stops in Sphinny's city, and $M$ express bus routes. Each route bidirectionally connects two different bus stops, called their endpoints. Because of the popularity of PCL, the driver of each bus routes cheers for exactly one club.

Sphinny has to pick up the contest materials for the $j$-th contest at bus stop $P_j$ and then the contest will be run in bus stop $C_j$. She can only use the given bus routes to travel between them. Formally, a path for Sphinny to go from $P_j$ to $C_j$ is a list of bus routes such that each two consecutive routes have a common endpoint. Also the first route in the path has $P_j$ as an endpoint and the last one has $C_j$ as an endpoint. Notice that the same bus route can be used multiple times in a path. If Sphinny's path from $P_j$ to $C_j$ contains one or more bus routes whose driver cheers for club $c$, then club $c$ will join the contest. Otherwise, club $c$ will not join the contest. For organizational reasons, Sphinny needs the number of clubs in each contest to be an odd number.

Given the layout of Sphinny's city's bus routes and the contests' details, find out for how many contests there exists a path for Sphinny to take that can ensure an odd number of clubs joining it.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.  
The first line of each test case contains three integers $N$, $M$, and $Q$: the number of bus stops, bus routes, and contests, respectively.  
Then, $M$ lines follow representing a different bus route each.  
The $i$-th of these lines contains three integers $U_i$, $V_i$, and $K_i$, meaning that the $i$-th bus route connects bus stops $U_i$ and $V_i$ and its driver cheers for club $K_i$.  
Finally, the last $Q$ lines represent a contest each.  
The $j$-th of these lines contains two integers $P_j$ and $C_j$, representing that materials for the $j$-th contest need to be picked up at bus stop $P_j$ and the contest needs to be run at bus stop $C_j$.
