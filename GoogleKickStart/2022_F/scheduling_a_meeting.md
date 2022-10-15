# Problem

Scheduling meetings at Google is not an easy task. Even with the help of Google Calendar, Ada has a lot of difficulty with it!

Ada works as a Software Engineer at Google, and needs to get approval for her new project. In order to get an approval, she needs to meet with at least $K$ of $N$ Tech Leads.

Ada has access to the calendars of all $N$ Tech Leads. For each Tech Lead, Ada can see all their scheduled meetings. The timeline in this problem can be viewed as $D$ consecutive hours, and all meetings are in $[0,D]$ hours range, with both ends being integer numbers. Scheduled meetings, even for the same person, can overlap (people are notorious for this at Google!).

Ada needs to schedule an $X$-hour-long meeting in the interval of $[0,D]$ hours, with both ends being integer numbers as well. At least $K$ of $N$ Tech Leads should be present for the whole meeting, that is their calendar should be completely free for the entire meeting duration.

Unfortunately, it might be the case that it is already impossible to find a slot to schedule such an $X$-hour-long meeting. In that case, Ada will need to persuade some Tech Leads to cancel their existing meetings.

What is the minimum number of scheduled meetings that need to be canceled so that Ada can meet with at least $K$ Tech Leads?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.

The first line of each test case contains four integers $N$, $K$, $X$, $D$. $N$ represents the number of Tech Leads, $K$ is the minimum number of Tech Leads Ada needs to meet, $X$ is the length of the meeting that needs to be set up, and $D$ is the upper bound of the $[0,D]$ hour range representing the timeline of the problem — no meeting can end after $D$.

The second line of each test case contains an integer $M$, representing the number of scheduled meetings.

$M$ lines follow. The $i$-th of these contains three integer numbers $P_i$, $L_i$, and $R_i$. These numbers represent that a Tech Lead $P_i$ has a scheduled meeting between the hours $L_i$ and $R_i$, not including the endpoints (that is, the meeting can be seen as an $(L_i,R_i)$ interval).

Note that all $M$ meetings in the test case are independent, even if some of them have the same starting and ending time.
