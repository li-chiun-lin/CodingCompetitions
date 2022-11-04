# Problem

Tom is taking metros in the city to go from station to station.

The metro system in the city works like this:

- There are $N$ metro lines in the city: line $1$, line $2$, $\dots$, line $N$.
- For each metro $i$, there are $SN_i$ stations. Let's assume they are $S_{i,1},S_{i,2}, \dots , S_{i,SN_i}$. These stations are ordered from one end point to the other end point. The metro is running in both directions. In other words, the metro is going from $S_{i,1} \rightarrow S_[i,2] \rightarrow \dots \rightarrow S_{i,SN_i}$, and $S_{i,SN_i} \rightarrow S_{i,SN_{i-1}} \rightarrow \dots \rightarrow S_{i,1}$. You can take the metro from any station and get off at any station. It takes a certain time to travel from one station to the next station. It takes $Time_{i,1}$ minutes to travel from $S_{i,1}$ to $S_{i,2}$, $Time_{i,2}$ minutes to travel from $S_{i,2}$ to $S_{i,3}$, etc. It takes the same time in the other direction.
- There are $M$ transfer tunnels. Each transfer tunnel connects two stations of different metro lines. It takes a certain amount of time to travel through a tunnel in either direction. You can get off the metro at one end of the tunnel and walk through the tunnel to the station at the another end.
- When you arrive at a metro station of line $i$, you need to wait $W_i$ minutes for the next metro.

Now, you are going to travel from one station to another. Find out the shortest time you need.
