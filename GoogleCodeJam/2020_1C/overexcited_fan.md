# Problem

Today will be the day—today will be the day that you finally get a picture with Peppurr the cat!

It has just been announced that Peppurr will be touring your city. The city has infinitely many infinitely-long streets running north-south and infinitely many infinitely-long streets running east-west. An intersection is any point at which a north-south street and an east-west street meet. From any given intersection, the closest intersection in each of the four directions (north, east, south and west) is exactly one block away.

You know the exact path that Peppurr's tour will take along those streets. Your goal is to be at one of the intersections on Peppurr's tour at the same time that Peppurr is there, and you want to do so as fast as possible. This is how you will get your picture with Peppurr!

Peppurr's tour starts at an intersection that is X blocks east and Y blocks north of the intersection where you are currently located. Both you and Peppurr take exactly one minute to walk one full block, and must finish each minute at an intersection; neither of you can walk partial blocks.

Peppurr moves along a predefined path. Every minute, you can choose to stand still for the minute, or use it to walk a single block in any of the 4 directions (north, east, south or west). Both you and Peppurr only walk along the streets.

If you and Peppurr are at the same intersection at the same time, you can take a picture, even at the last intersection of the tour. However, Peppurr is unavailable for pictures after the tour ends, so arriving at the tour's final intersection even a single minute after the tour finishes means you will not get a picture.

Is it possible to get a picture with Peppurr? If so, how soon can you do it?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case consists of one line containing two integers, X and Y, and a string of characters M. This represents that Peppurr's tour starts exactly X blocks east and Y blocks north of you. The string M is the sequence of moves that Peppurr will make. The i-th character in M is one of N, E, S or W, and corresponds to the direction (north, east, south, or west, respectively) in which Peppurr will walk one block during the tour's i-th minute.

## Output

For each test case, output one line with Case #x: y, where x is the test case number (starting from 1). If there is no way to get a picture with Peppurr, y is IMPOSSIBLE. Otherwise, y is the smallest number of minutes from the start of the tour needed to get a picture with Peppurr.
