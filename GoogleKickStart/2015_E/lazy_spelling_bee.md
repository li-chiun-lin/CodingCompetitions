# Problem

In the Lazy Spelling Bee, a contestant is given a target word $W$ to spell. The contestant's answer word $A$ is acceptable if it is the same length as the target word, and the $i$-th letter of $A$ is either the $i$-th, $(i-1)$-th, or $(i+1)$-th letter of $W$, for all $i$ in the range of the length of $A$. (The first letter of $A$ must match either the first or second letter of $W$, since the $0$-th letter of $W$ doesn't exist. Similarly, the last letter of $A$ must match either the last or next-to-last letter of $W$.) Note that the target word itself is always an acceptable answer word.

You are preparing a Lazy Spelling Bee, and you have been asked to determine, for each target word, how many distinct acceptable answer words there are. Since this number may be very large, please output it modulo $10^9 + 7$.
