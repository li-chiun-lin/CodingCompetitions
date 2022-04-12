# Problem

While the most typical type of dice have **6** sides, each of which shows a different integer **1** through **6**, there are many games that use other types. In particular, a ***dk*** is a die with ***k*** sides, each of which shows a different integer **1** through ***k***. A ***d6*** is a typical die, a ***d4*** has four sides, and a ***d1000000*** has one million sides.

In this problem, we start with a collection of **N**
dice. The ***i***-th die is a ***d*****S<sub>i</sub>**, that is, it has **S<sub>i</sub>** sides showing integers **1** through **S<sub>i</sub>**. A straight of length ***ℓ*** starting at ***x*** is the list of integers ***x***, ***x*** + 1,..., ***x*** + (***ℓ*** − 1). We want to choose some of the dice (possibly all) and pick one number from each to form a straight. What is the longest straight we can form in this way?

## Input

The first line of the input gives the number of test cases, **T**. **T** test cases follow. Each test case is described in two lines. The first line of a test case contains a single integer **N**, the number of dice in the game. The second line contains **N** integers **S<sub>1</sub>, S<sub>2</sub>,..., S<sub>N</sub>**, each representing the number of sides of a different die.

## Output

For each test case, output one line containing Case #***x***
: ***y***, where ***x*** is the test case number (starting from 1) and ***y*** is the maximum number of input dice that can be put in a straight.

## Sample input

```text
4
4
6 10 12 8
6
5 4 5 4 4 4
10
10 10 7 6 7 4 4 5 7 4
1
10
```

## Sample output

```text
Case #1: 4
Case #2: 5
Case #3: 9
Case #4: 1
```
