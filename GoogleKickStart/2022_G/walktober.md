# Problem

John participates in an annual walking competition called Walktober. The competition runs for a total of $N$ days and tracks the daily steps of the participants for all the $N$ days. Each participant will be assigned a unique ID ranging from $1$ to $M$ where $M$ is the total number of registered participants. A global scoreboard is maintained tracking the daily steps of each participant.

John is determined to win Walktober this year and his goal is to score the maximum daily steps on each of the $N$ days among all the participants. Having participated in Walktober last year as well, he wanted to know how many steps he fell short of in achieving his goal. Given the previous year scoreboard, calculate the minimum additional steps he needed over his last year score in order to achieve his goal of scoring the maximum daily steps every day.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.

The first line of each test case contains three integers $M$, $N$, and $P$ denoting the total number of participants, the total number of days the competition runs, and the last year participant ID of John.

The next $M$ lines describe the scoreboard of the previous year and contains $N$ integers each. The $j$-th integer of the $i$-th line denotes the step count $S_{i,j}$ of the participant with ID $i$ on the $j$-th day of the competition.
