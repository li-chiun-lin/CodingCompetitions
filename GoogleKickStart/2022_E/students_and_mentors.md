# Problem

A group of $N$ students prepares together for upcoming programming competitions such as Kick Start and Code Jam by Google. To help each other prepare, it was decided that each student will pick a mentor among other students. A mentor will help their mentee to solve problems, learn algorithms, track their progress, and will generally support them throughout preparation.

Each student will have exactly one mentor among all other students, and a person can be a mentor to multiple people. For every student $i$ we know their rating $R_i$ which approximates how good that student is at programming competitions. Because it is believed that a mentor should not be much stronger than their mentee, a student $j$ can be a mentor of student $i$ only if $R_j \leq 2 \times R_i$. Note that a mentor can even have a rating that is lower or equal to their mentee's rating.

Unsurprisingly, each student wants to have the strongest possible mentor. For each student, can you help to figure out what is the highest possible rating of a mentor they can pick?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.

Each test case consists of two lines.

The first line of each test case contains an integer $N$, representing the number of students in a group.

The second line of each test case contains $N$ integers $R_1$ $R_2$ $R_3$ $\dots$ $R_N$ where $R_i$ is a rating of the $i$-th student.

## Sample Input

```text
3
3
2000 1500 1900
5
1000 600 1000 2300 1800
2
2500 1200
```

## Sample Output

```text
Case #1: 1900 2000 2000
Case #2: 1800 1000 1800 1800 2300
Case #3: 1200 -1
```
