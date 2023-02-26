# Problem

Alien tech company G has a very old file transfer tool that is still in use today. While the tool is running, it reassures users by giving status updates on both the percentage of files transferred so far and the number of files transferred so far. The status updates during the process might look like this:

```text
 20% |==>-------|     1 files transferred
100% |==========|     5 files transferred
```

But the percentage isn't precise; it is simply truncated before the decimal point (i.e. floored to the next lowest or equal $1\%$). That is, both $1.2\%$ and $1.7\%$ would be displayed as $1\%$.

Some users may want to know the exact total number of files, so you want to modify the tool so that the status updates look like this:

```text
 20% |==>-------|     1 out of 5 files transferred
100% |==========|     5 out of 5 files transferred
```

But you've realized that it may or may not be possible to know the number of files. Given the status updates that the tool displays, either figure out how many files there are, or determine that it can't be done (i.e., there are multiple possible values for the number of files). The status updates are not guaranteed to occur at regular intervals and are not guaranteed to occur whenever a file is transferred.

## Input

The first line contains $T$, the number of test cases. $T$ test cases follow. Each test case consists of one line with an integer $N$, the number of status updates output by the tool, followed by $N$ lines with the format $P_i$ $K_i$, where $P_i$ and $K_i$ are integers representing the percentage and number of files transferred at some point in the process. The updates are given listed in chronological order -- that is, both the $P_i$ values and the $K_i$ values are nondecreasing throughout a test case.
