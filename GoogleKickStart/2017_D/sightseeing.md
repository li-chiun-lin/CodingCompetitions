# Problem

When you travel, you like to spend time sightseeing in as many cities as possible, but sometimes you might not be able to because you need to catch the bus to the next city. To maximize your travel enjoyment, you decide to write a program to optimize your schedule.

You begin at city $1$ at time $0$ and plan to travel to cities $2$ to $N$ in ascending order, visiting every city. There is a bus service from every city $i$ to the next city $i + 1$. The $i$-th bus service runs on a schedule that is specified by $3$ integers: $S_i$, $F_i$ and $D_i$, the start time, frequency and ride duration. Formally, this means that there is a bus leaving from city $i$ at all times $S_i + x \times F_i$, where $x$ is an integer and $x ≥ 0$, and the bus takes $D_i$ time to reach city $i + 1$.

At each city between $1$ and $N - 1$, inclusive, you can decide to spend $T_s$ time sightseeing before waiting for the next bus, or you can immediately wait for the next bus. You cannot go sightseeing multiple times in the same city. You may assume that boarding and leaving buses takes no time. You must arrive at city $N$ by time $T_f$ at the latest. (Note that you cannot go sightseeing in city $N$, even if you arrive early. There's nothing to see there!)

What is the maximum number of cities you can go sightseeing in?
