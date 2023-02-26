# Problem

Ben works as an engineer in a city with $N$ electric junctions. These junctions form a network and can be visualised as a connected graph with $N$ vertices and $N−1$ edges. The city is facing a power outage, due to which none of the junctions are receiving electricity, and Ben is in charge of handling the situation.

Each junction has a fixed electric capacity. $A_i$ is the electric capacity of the $i$-th junction. Due to resource constraints, Ben can provide electricity to only one junction, but other junctions can receive electricity depending on their connections and capacities. If the $i$-th junction receives electricity, then it will also get transmitted to all the junctions directly connected to the $i$-th junction whose capacity is strictly less than $A_i$. Transmission stops if no eligible junction is present. Help Ben determine the maximum number of junctions that can receive electricity.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.
The first line of each test case contains an integer $N$ which represents the number of junctions in the city.
The next line contains $N$ integers. The $i$-th integer is $A_i$, which is the electric capacity of the $i$-th junction.
The next $N−1$ lines each contain two integers $X_i$ and $Y_i$, meaning that the junctions $X_i$ and $Y_i$ are directly connected to each other.
