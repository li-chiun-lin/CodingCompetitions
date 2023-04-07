# Problem

You are given a prime number P.

Let's define V(x) as the degree of P in the prime factorization of x. To be clearer, if V(x)=y then x is divisible by Py, but not divisible by Py+1. Also we define V(0)=0.

For example, when P=3, and x=45, since $45=5⋅3^2$, therefore V(45)=2.

You are also given an array A with N elements. You need to process Q queries of 2 types on this array:

- type 1 query: 1 pos val - assign a value val to the element at pos, i.e. Apos:=val
- type 2 query: 2 S L R - print $∑_{i=L}^R V(A_i^S−(A_i \mod P)^S)$.
