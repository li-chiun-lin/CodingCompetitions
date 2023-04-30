# Problem

Ada is working on a science project for school. She is studying evolution and she would like to compare how different species of organisms would perform when trying to solve a coding competition problem.

The $N$ species are numbered with integers between $1$ and $N$, inclusive. Species $1$ has no direct ancestor, and all other species have exactly one direct ancestor each, from which they directly evolved. A (not necessarily direct) ancestor of species $x$ is any other species $y$ such that $y$ can be reached from $x$ by moving one or more times to a species direct ancestor starting from $x$. In this way, species $1$ is a (direct or indirect) ancestor of every other species.

Through complex genetic simulations, she calculated the average score each of the $N$ species would get in a particular coding competition. $S_i$ is that average score for species $i$.

Ada is looking for interesting triplets to showcase in her presentation. An interesting triplet is defined as an ordered triplet of distinct species $(a,b,c)$ such that:

1. Species $b$ is a (direct or indirect) ancestor of species $a$.
1. Species $b$ is not a (direct or indirect) ancestor of species $c$.
1. Species $b$ has an average score strictly more than $K$ times higher than both of those of $a$ and $c$. That is, $S_b≥K×max(S_a,S_c)+1$.

Given the species scores and ancestry relationships, help Ada by writing a program to count the total number of interesting triplets.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.  
The first line of each test case contains two integers $N$ and $K$, denoting the number of species and the factor which determines interesting triplets, respectively.  
The second line of each test case contains $N$ integers $S_1,S_2,…,S_N$, where $S_i$ denotes the average score of species $i$.  
The third line of each test case contains $N−1$ integers $P_2,P_3,…,P_N$, meaning species $P_i$ is the direct ancestor of species $i$.
