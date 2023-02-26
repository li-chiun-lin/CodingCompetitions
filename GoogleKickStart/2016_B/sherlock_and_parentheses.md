# Problem

Sherlock and Watson have recently enrolled in a computer programming course. Today, the tutor taught them about the balanced parentheses problem. A string S consisting only of characters ( and/or ) is balanced if:

- It is the empty string, or:
- It has the form $(S)$, where $S$ is a balanced string, or:
- It has the form $S_1S_2$, where $S_1$ is a balanced string and $S_2$ is a balanced string.

Sherlock coded up the solution very quickly and started bragging about how good he is, so Watson gave him a problem to test his knowledge. He asked Sherlock to generate a string $S$ of $L + R$ characters, in which there are a total of $L$ left parentheses ( and a total of $R$ right parentheses ).

Moreover, the string must have as many different balanced non-empty substrings as possible. (Two substrings are considered different as long as they start and end at different indexes of the string, even if their content happens to be the same).

Note that $S$ itself does not have to be balanced.

Sherlock is sure that once he knows the maximum possible number of balanced non-empty substrings, he will be able to solve the problem. Can you help him find that maximum number?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case consists of one line with two integers: $L$ and $R$.
