# Problem

You and $N$ of your friends just took the B.A.T. (Binary Answer Test) to try to get into wizard school. The B.A.T. has $Q$ true-false questions, and each one is worth $1$ point. You have no wizard powers, so you just picked arbitrary answers and hoped for the best.

The results of the test have already been sent out by quail mail, but the quail with your results has not arrived yet. However, each of your friends has told you their list of answers and their total score. You also remember your own list of answers. You are an optimist and you think that you probably did well!

Given that there is one correct list of answers (but you do not know what those answers are), and given your friends' answers and scores, what is the highest score that you possibly could have achieved?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each begins with one line with two integers $N$ and $Q$. Then, $N+1$ lines follow; the $i$-th of these lines represents the $i$-th examinee's list of answers $A_i$, and has $Q$ characters, each of which is either $T$ or $F$ (representing $True$ or $False$). $A_{N+1}$ is your own list of answers. Finally, one line with $N$ integers follows; the $i$-th of these integers, $S_i$, represents the $i$-th examinee's score. (Note that your own score is not in this list, because it is unknown.)
