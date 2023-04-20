# Problem

Ada is working on a science project for school. She is studying evolution and she would like to compare how different species of organisms would perform when trying to solve a coding competition problem.

The N
species are numbered with integers between 1 and N, inclusive. Species 1 has no direct ancestor, and all other species have exactly one direct ancestor each, from which they directly evolved. A (not necessarily direct) ancestor of species x is any other species y such that y can be reached from x by moving one or more times to a species direct ancestor starting from x. In this way, species 1

is a (direct or indirect) ancestor of every other species.

Through complex genetic simulations, she calculated the average score each of the N
species would get in a particular coding competition. Si is that average score for species i

.

Ada is looking for interesting triplets to showcase in her presentation. An interesting triplet is defined as an ordered triplet of distinct species (a,b,c)

such that:

1. Species b is a (direct or indirect) ancestor of species a.
1. Species b is not a (direct or indirect) ancestor of species c.
1. Species b has an average score strictly more than K times higher than both of those of a and c. That is, Sb≥K×max(Sa,Sc)+1.

Given the species scores and ancestry relationships, help Ada by writing a program to count the total number of interesting triplets.
