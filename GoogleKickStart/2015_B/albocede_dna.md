# Problem

The DNA of the Albocede alien species is made up of 4 types of nucleotides: $a$, $b$, $c$, and $d$. Different Albocedes may have different sequences of these nucleotides, but any Albocede's DNA sequence obeys all of the following rules:

- It contains at least one copy of each of $a$, $b$, $c$, and $d$.
- All $a$'s come before all $b$'s, which come before all $c$'s, which come before all $d$'s.
- There are exactly as many $a$'s as $c$'s.
- There are exactly as many $b$'s as $d$'s.

For example, $abcd$ and $aabbbccddd$ are valid Albocede DNA sequences. $acbd$, $abc$, and $abbccd$ are not.

The Albocede-n is an evolved species of Albocede. The DNA sequence of an Albocede-n consists of one or more valid Albocede DNA sequences, concatenated together end-to-end. For example, $abcd$ and $aaabcccdaabbbccdddabcd$ are valid Albocede-n DNA sequences. (Observe that a valid Albocede-n DNA sequence is not necessarily also a valid Albocede DNA sequence.)

From one of your alien expeditions, you retrieved an interesting sequence of DNA made up of only $a$'s, $b$'s, $c$'s, and $d$'s. You are interested in how many of the different subsequences of that sequence would be valid Albocede-n DNA sequences. (Even if multiple different selections of nucleotides from the sequence produce the same valid subsequence, they still all count as distinct subsequences.) Since the result may be very large, please find it modulo $10^9 + 7$.

## Input

The first line of the input gives the number of test cases, $T$. Each of the next $T$ lines contains a string $S$ that consists only of the characters $a$, $b$, $c$, and $d$.
