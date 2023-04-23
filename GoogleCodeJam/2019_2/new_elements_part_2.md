# Problem

The first two paragraphs (not counting this one) of this problem and "New Elements: Part 1" are identical. The problems can otherwise be solved independently; you do not need to read or solve one in order to read or solve the other.

Muriel is on the path to discovering two new elements that she has named Codium and Jamarium. She has not been able to isolate them yet, but she wants to start investigating some important properties, like their atomic weights, by indirect means. Since Muriel is working with a single isotope of Codium and a single isotope of Jamarium, their atomic weights are strictly positive integers.

Muriel managed to create N different molecules, each of which contains one or more atoms of Codium and one or more atoms of Jamarium, and no other elements. For each molecule, she knows how many atoms of each element are present in it. The molecular weight of a molecule is the sum of the atomic weights of all the atoms it contains.

As a first step, Muriel sorted the molecules by strictly increasing molecular weight. Now she wants to find out possible integer values for the atomic weights of both Codium and Jamarium that are consistent with the ordering. Since she is aware there could be many consistent pairs of values, she wants one that minimizes the atomic weight of Codium. If there are multiple pairs in which Codium's atomic weight is minimum, she wants the one in which Jamarium's atomic weight is minimum.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. The first line of a test case contains a single integer N, the number of molecules. Each of the next N lines describes a different molecule with two integers Ci and Ji that represent the number of Codium and Jamarium atoms in the i-th molecule, respectively. The molecules are given in strictly increasing order of molecular weight.

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1), and y is IMPOSSIBLE (in uppercase) if there is no pair of integer atomic weights that would make the order of the molecules strictly increasing in molecular weight. Otherwise, y should be two integers c j where c is the atomic weight of Codium and j is the atomic weight of Jamarium, chosen according to the rules above.
