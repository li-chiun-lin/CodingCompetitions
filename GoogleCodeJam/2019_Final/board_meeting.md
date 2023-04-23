# Problem

Note that it is not necessary to know anything about the rules of chess to solve this problem.

There are N kings on an infinite chessboard (two-dimensional grid), located in cells with coordinates (X1, Y1), (X2, Y2), ..., (XN, YN). Both N and the kings' coordinates are unknown to you. However, you do know the following things:

    N is at least 1 and at most Nmax.
    No king's coordinates (X or Y) have an absolute value exceeding M.
    The N kings are located in N different cells.

The kings want to meet in a single cell of the board. If some cell (X, Y) were to be chosen as the meeting cell, then in order to get there, the i-th king would use a number of moves equal to the maximum of the absolute values of the differences of coordinates between its cell and the meeting cell: max(|X-Xi|,|Y-Yi|). The total number of moves used by all kings is thus equal to the sum of those maximums over all values of i. Note that it is not relevant to this problem exactly how the kings move on the board — only the source and destination cells matter, and the number of moves can always be computed using the above formula.

This problem has two phases. In the first phase, you may repeatedly do the following: propose a meeting location (A, B) (with each of A and B between -10×M and 10×M, inclusive), and have the judge tell you the total number of moves the kings would use to get there — the sum (over all i) of max(|Xi-A|,|Yi-B|). You can have at most R such exchanges with the judge, choosing your values of A and B each time. Note that the kings do not actually move, so their locations (Xi, Yi) stay the same for all requests within one test case.

In the second phase, the roles are swapped: the judge gives you a meeting cell location (C, D) (with each of C and D between -10×M and 10×M, inclusive), and you must respond with the total number of moves the kings would use to get there, assuming that the kings are in the same locations as in the first phase. There are at most R such exchanges, and you must correctly respond to all of the judge's requests.

## Input and output

This is an interactive problem. You should make sure you have read the information in the Interactive Problems section of our FAQ.

Initially, your program should read a single line containing four integers T, Nmax, M and R: the number of test cases, the maximum number of kings, the maximum absolute value for any coordinate for any king, and the maximum number of requests per phase, respectively. (Note that the values of M and R are fixed, and are provided as input only for convenience; see the Limits section for more details.) Then, you need to process T test cases.

In each test case, there are two phases. In the first phase, the i-th exchange is as follows:

    Your program sends one line containing two integers Ai and Bi, representing the x and y coordinates of a cell.
        Both Ai and Bi must be between -10×M and 10×M, inclusive.
    The judge responds with one line containing a single integer: the total number of moves the kings need to use to get from their unknown locations to your cell.

You may initiate at most R such exchanges in this phase. If you make more than R exchanges, or send a request that the judge can not parse or is out of bounds, the judge responds with one line with a single string ERROR.

To end the first phase and switch to the second phase, you must send one line with the string READY (the case does not matter), to which the judge responds with the first request of the second phase.

In the second phase, the i-th exchange is as follows:

    The judge sends one line containing two integers Ci and Di, representing the x and y coordinates of a cell.
        Each of Ci and Di will be between -10×M and 10×M, inclusive.
    Your program must respond with one line containing a single integer: the total number of moves the kings would need to use to get to the given cell.

The judge is guaranteed to send at least 1 and at most R such requests. If you send an answer that is incorrect or unparseable, the judge responds with ERROR as described above. If you answer all of the requests correctly, the judge sends one line with a single string DONE, at which point your program should initiate the next test case, or terminate with no error if all T test cases have been handled.

After the judge sends a line with ERROR, it does not send any other output. If your program continues to wait for the judge after receiving ERROR, your program will time out, resulting in a Time Limit Exceeded error. Notice that it is your responsibility to have your program exit in time to receive a Wrong Answer judgment instead of a Time Limit Exceeded error. As usual, if the memory limit is exceeded, or your program gets a runtime error, you will receive the appropriate judgment.

The number and location of the kings, as well as the number and positions of the requests that the judge sends during the second phases, are chosen before any exchanges occur.
