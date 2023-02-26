# Problem

There are $N$ cities in Chelsea's state (numbered starting from $1$, which is Chelsea's city), and $M$ bidirectional roads directly connect them. (A pair of cities may even be directly connected by more than one road.) Because of changes in traffic patterns, it may take different amounts of time to use a road at different times of day, depending on when the journey starts. (However, the direction traveled on the road does not matter -- traffic is always equally bad in both directions!) All trips on a road start (and end) exactly on the hour, and a trip on one road can be started instantaneously after finishing a trip on another road.

Chelsea loves to travel and is deciding where to go for her winter holiday trip. She wonders how quickly she can get from her city to various other destination cities, depending on what time she leaves her city. (Her route to her destination may include other intermediate cities on the way.) Can you answer all of her questions?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.

The first line of each test case contains three integers: the number $N$ of cities, the number $M$ of roads, and the number $K$ of Chelsea's questions.

$2M$ lines -- $M$ pairs of two lines -- follow. In each pair, the first line contains two different integers $x$ and $y$ that describe one bidirectional road between the $x$-th city and the $y$-th city. The second line contains 24 integers $Cost[t]$ ($0 ≤ t ≤ 23$) that indicate the time cost, in hours, to use the road when departing at $t$ o'clock on that road. It is guaranteed that $Cost[t] ≤ Cost[t+1]+1$ ($0 ≤ t ≤ 22$) and $Cost[23] ≤ Cost[0]+1$.

Then, an additional $K$ lines follow. Each contains two integers $D$ and $S$ that comprise a question: what is the fewest number of hours it will take to get from city $1$ to city $D$, if Chelsea departs city $1$ at $S$ o'clock?
