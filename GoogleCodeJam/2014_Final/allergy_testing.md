# Problem

Kelly is allergic to exactly one of N foods, but she isn't sure which one. So she decides to undergo some experiments to find out.

In each experiment, Kelly picks several foods and eats them all. She waits A days to see if she gets any allergic reactions. If she doesn't, she knows she isn't allergic to any of the foods she ate. If she does get a reaction, she has to wait for it to go away: this takes a total of B days (measured from the moment when she ate the foods).

To simplify her experimentation, Kelly decides to wait until each experiment is finished (after A or B days) before starting the next one. At the start of each experiment, she can choose the set of foods she wants to eat based on the results of previous experiments.

Kelly chooses what foods to eat for each experiment to minimize the worst-case number of days before she knows which of the N foods she is allergic to. How long does it take her in the worst case?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case on a single line, containing three space-separated integers: N, A and B.
