# Problem

After many sleepless nights, you have finally finished teaching a robotic arm to make the hand gestures required for the Rock-Paper-Scissors game. Now you just need to program it to compete in the upcoming robot tournament!

In this tournament, each robot uses a program that is a series of moves, each of which must be one of the following: R (for "Rock"), P (for "Paper"), or S (for "Scissors"). Paper beats Rock and loses to Scissors; Rock beats Scissors and loses to Paper; Scissors beats Paper and loses to Rock.

When two robots face off in a match, the first robot to play a winning move wins. To start, each robot plays the first move of its program. If the two moves are different, one of the moves beats the other and thus one of the robots wins the match. If the moves are the same, each robot plays the next move in its program, and so on.

Whenever a robot has reached the end of its program and needs its next move, it returns to the start of its program. So, for example, the fifth move of a robot with the program RSSP would be R. If a match goes on for over a googol (10100) of moves, the judges flip a fair coin to determine the winner.

Once a match is over, the winning robot resets, so it has no memory of the that match. In its next match, it starts by playing the first move of its program, and so on.

The tournament is played in K rounds and has a single-elimination "bracket" structure. There are N = 2K robots in total, numbered 0 through N - 1. In the first round, robot 0 plays a match against robot 1, robot 2 plays a match against robot 3, and so on, up to robots N - 2 and N - 1. The losers of those matches are eliminated from the tournament. In the second round, the winner of the 0-1 match faces off against the winner of the 2-3 match, and so on. Once we get to the K-th round, there is only one match, and it determines the overall winner of the tournament.

All of the other contestants are so confident that they have already publicly posted their robots' programs online. However, the robots have not yet been assigned numbers, so nobody knows in advance who their opponents will be. Knowing all of the other programs, is it possible for you to write a program that is guaranteed to win the tournament, no matter how the robot numbers are assigned?

## Input

The first line of the input gives the number of test cases, T; T test cases follow. Each test case begins with one line containing an integer A: the number of adversaries (other robots) in the tournament. Then, there are A more lines; the i-th of these contains a string Ci of uppercase letters that represent the program of the i-th opponent's robot.

## Output

For each test case, output one line containing Case #x: y. If there is a string of between 1 and 500 characters that is guaranteed to win the tournament, as described above, then y should be the string of uppercase letters representing that program. Otherwise, y should be IMPOSSIBLE, in uppercase letters.
