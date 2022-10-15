# Problem

A fabric is represented by three properties:

- Color ($C$), a string consisting of lowercase letters of the English alphabet, representing the color of the fabric.
- Durability ($D$), an integer representing the durability of the fabric.
- Unique identifier ($U$), an integer representing the ID of the fabric.

Ada and Charles work at the Kick Start fabric factory. Each day they receive $N$ fabrics, and one of them has to sort it. They sort it using the following criteria:

- Ada sorts in lexicographically increasing order by color ($C$).
- Charles sorts in ascending order by durability ($D$).
- They break ties by sorting in ascending order by the unique identifier ($U$).

Given $N$ fabrics, count the number of fabrics which end up in the same position regardless of whether Ada or Charles sort them.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.

Each test case begins with one line consisting of an integer $N$ denoting the number of fabrics.

Then $N$ lines follow, each line with a string $C_i$, an integer $D_i$, and an integer $U_i$: the color, the durability and the unique identifier of the $i$-th fabric respectively.
