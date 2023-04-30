# Problem

Margaret researches genetic sequences. She is analysing two sequences $A$ and $B$ from a new kind of life that does not use the typical four letter genetic alphabet. The code for the genetic sequences conveniently requires 26 letters represented by the uppercase English letters 'A' through 'Z'.

Margaret wants to compare the sequences $A$ and $B$. The best way to do this is to do a series of sequence analysis tests. Each test involves taking a prefix from $A$ containing only the first $P$ letters from $A$, which is called the $A$-prefix. Each test also involes taking a suffix from $B$ containing only the last $S$ letters from $B$, which is called the $B$-suffix.

Margaret then needs to compare the $A$-prefix to the $B$-suffix. A substring is a subsequence of contiguous letters. A substring from the $A$-prefix matches the $B$-suffix if the $B$-suffix starts with that substring. That is, the substring is a prefix of the $B$-suffix. The result of a test is the length of the longest substring from the $A$-prefix that matches the $B$-suffix.

Margaret needs some software to determine the outcome of a batch of $Q$ sequence analysis tests. Note that each test is independent. Margaret has many copies of $A$ and $B$ and a new one is used for each test.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.  
Each test case begins with a line containing two strings and an integer, $A$, $B$, and $Q$ respectively.  
Each test case ends with $Q$ lines, the $i$-th of which contains two integers $P_i$ and $S_i$, which are the prefix and suffix sizes for the $i$-th sequence analysis test.
