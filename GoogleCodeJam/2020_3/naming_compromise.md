# Problem

Cameron and Jamie are about to welcome a second baby into their lives. They are already good at working together as parents, but right now they are disagreeing about one crucial thing! Cameron wants to name the baby one name (the string C), whereas Jamie wants to name the baby something else (the string J).

You want to help them find a compromise name that is as close as possible to what each of them wants. You think you can do this using the notion of edit distance. The edit distance between two strings S1 and S2 is the minimum number of operations required to transform S1 into S2, where the allowed operations are as follows:

    Insert one character anywhere in the string.
    Delete one character from anywhere in the string.
    Change one character in the string to any other character.

For example, the edit distance between CAMERON and JAMIE is 5. One way to accomplish the transformation in 5 steps is the following: CAMERON to JAMERON (change) to JAMIERON (insert) to JAMIEON (delete) to JAMIEN (delete) to JAMIE (delete). Any transformation from CAMERON into JAMIE requires at least this many operations.

To make the compromise name N as close as possible to the original desires of the parents, you want N to be a non-empty string such that the sum of the edit distances between C and N and between J and N is as small as possible. Out of all those choices for N, to make sure the compromise is fair, you must choose an N such that the difference between those two edit distances is also as small as possible. Please find a compromise name for Cameron and Jamie.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case consists of a single line with two strings C and J: the names that Cameron and Jamie have proposed for the baby, respectively. Each of these names is made up of uppercase English alphabet letters.

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is a name that meets the requirements mentioned in the statement. Note that y must contain only uppercase English letters.
