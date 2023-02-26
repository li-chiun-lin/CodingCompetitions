# Problem

Ada delivers pizzas in a city consisting of a grid of $N$ horizontal and $N$ vertical streets, heading from North to South and from West to East, respectively, and numbered from $1$ to $N$. The top left street crossing of the grid is $(1,1)$.

Today, Ada has to deliver $P$ pizzas, one for each of $P$ customers. Each customer lives at a different street crossing; the $k$-th customer lives at street crossing $(X_k,Y_k)$ and will pay Ada $C_k$ coins after the pizza is delivered to their location.

Ada starts at her pizza restaurant at $(A_r,A_c)$ with $0$ coins and carrying $P$ pizzas. Her goal is to deliver all of the pizzas within $M$ minutes. She is free to take any path she likes around the city and finish deliveries anywhere, as long as she manages to drop off all $P$ pizzas to their respective customers within $M$ minutes. It takes one minute to walk between two adjacent street crossings, and takes no additional time to drop off a pizza at a customer's location. There are some additional rules and constraints to note:

- Ada is not allowed to go outside the grid.
- No customer lives at the same street crossing as the pizza restaurant Ada starts her trip.
- At any point in time Ada can choose to stay in her current location and not move.
- Ada can also choose not to deliver a pizza when at a customer's location.

Formally, if Ada is currently at street crossing $(i,j)$, where $i$ is $i$-th row from the top, and $j$ is $j$-th column from the left, she can decide to do any of the following as long as she does not go outside the grid:

- Go north, she reaches street crossing $(i−1,j)$.
- Go east, she reaches street crossing $(i,j+1)$.
- Go west, she reaches street crossing $(i,j−1)$.
- Go south, she reaches street crossing $(i+1,j)$.
- Stay at street crossing $(i,j)$.

The city has a unique toll system in place for using the streets. There is a toll for using each street and the toll depends on Ada's current number of coins and the direction in which she is travelling to. The toll function is defined for every cardinal direction (North, East, West, South) separately. The toll function $F_d$ for $d \in {North,East,West,South}$ returns the amount of coins Ada will have after moving in the direction $d$ and is defined as follows:

$F_d = c\ OP_d\ K_d$

where $c$ is the current number of coins that Ada has and $OP_d$ is an operator and $K_d$ is a fixed positive integer. The allowed operators are:

- $+$ (addition),
- $-$ (subtraction),
- $*$ (multiplication),
- $/$ (integer division).

For example, we can have $F_{North} = c + 3$, $F_{East} = c * 4$, $F_{West} = c - 4$, $F_{South} = c / 2$. That means that if Ada moves North one street then she will have $3$ more coins; if Ada moves East then Ada's coins will quadruple; if Ada moves West then she loses $4$ coins; and if Ada moves South then her coins are halved.

All divisions are integer divisions and are computed by using floor function. For example, $−14=⌊−14⌋=−1$. Notice that Ada is allowed to have a negative number of coins. Note that the tolls might actually give Ada coins.

Find out if Ada can deliver all the $P$ pizzas in $M$ minutes and, if so, the maximum number of coins Ada could have after $M$ minutes.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.
The first line of each test case contains $N$, $P$, $M$, $A_r$, $A_c$ denoting the grid size, the number of pizzas to deliver, the minutes in which all pizzas should be delivered, and the coordinates of the street crossing at which Ada starts respectively.

The next four lines denote the toll functions for North, East, West, South respectively. Each of these lines contains $OP_d$, denoting the operator (one of $+$, $-$, $*$, $/$), and $K_d$, the positive integer used in toll function.

The following $P$ lines describe the customers. Each of these lines consists of three integers $X_k$, $Y_k$, $C_k$ denoting the row number of the $k$-th customer from the top of the grid, the column number of the $k$-th customer from the left of the grid, and the amount of coins they pay on delivery, respectively.
