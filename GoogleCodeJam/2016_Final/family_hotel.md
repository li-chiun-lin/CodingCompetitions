# Family Hotel

You run a hotel with N rooms arranged along one long corridor, numbered from 1 to N along that corridor. Your guests are big families, and every family asks for exactly two adjacent rooms when they arrive. Two rooms are adjacent if their numbers differ by exactly 1.

At the start of the day today, your hotel was empty. You have been using the following simple strategy to assign rooms to your guests. As each family arrives, you consider all possible pairs of adjacent rooms that are both free, pick one of those pairs uniformly at random, and assign the two rooms in that pair to the family. New families constantly arrive, one family at a time, but once there are no more pairs of adjacent rooms that are both free, you turn on the NO VACANCY sign and you do not give out any more rooms.

Given a specific room number, what is the probability that it will be occupied at the time that you turn on the NO VACANCY sign?

## Input

The first line of the input gives the number of test cases, T. T lines follow. Each line contains two numbers: the number of rooms N and the room number K that we are interested in.
