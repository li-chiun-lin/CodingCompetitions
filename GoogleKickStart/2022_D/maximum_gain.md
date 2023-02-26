# Problem

Charles is participating in an event of Crowdsource tasks and he is most enthusiastic to gain the maximum points from there! There are two Crowdsource tasks: Audio Validation Task and Image Labeler Task. Each task consists of a list of questions. Charles is given two arrays ($A$ and $B$) representing the two tasks. Each element of an array indicates the number of points that Charles will gain by answering the corresponding question.

Charles is allowed to answer $K$ questions in total, from both tasks, one at a time. At each step, he is allowed to choose a task (that is, choose one of the two arrays) that has remaining unanswered questions. He is then allowed to answer either the first or the last question, from the list of remaining questions of this task. Once he answers the question, he gets the corresponding points and the answered question is removed from the task.

Can you help Charles choose the questions that will give him the maximum possible points?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.

The first line of each test case contains an integer $N$, which denotes the number of elements in the first array.

The second line of each test case contains $N$ integers $A_1,A_2,\dots,A_N$. $A_i$ denotes the points gained for answering the $i$-th question of Audio Validation Task.

The third line of each test case contains an integer $M$, which denotes the number of elements in the second array.

The fourth line of each test case contains $M$ integers $B_1,B_2,\dots,B_M$. $B_i$ denotes the points gained for answering the i-th question of Image Labeler Task.

The fifth line of each test case contains an integer $K$, which denotes the number of elements to be selected in total, from both arrays, using the process described above.

## Sample Input

```text
2
3
3 1 2
4
2 8 1 9
5
4
1 100 4 3
6
15 10 12 5 1 10
6
```

## Sample Output

```text
Case #1: 24
Case #2: 148
```
