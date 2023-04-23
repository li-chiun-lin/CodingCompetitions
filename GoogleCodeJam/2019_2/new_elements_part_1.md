# Problem

The first two paragraphs (not counting this one) of this problem and "New Elements: Part 2" are identical. The problems can otherwise be solved independently; you do not need to read or solve one in order to read or solve the other.

Muriel is on the path to discovering two new elements that she has named Codium and Jamarium. She has not been able to isolate them yet, but she wants to start investigating some important properties, like their atomic weights, by indirect means. Since Muriel is working with a single isotope of Codium and a single isotope of Jamarium, their atomic weights are strictly positive integers.

Muriel managed to create N different molecules, each of which contains one or more atoms of Codium and one or more atoms of Jamarium, and no other elements. For each molecule, she knows how many atoms of each element are present in it. The molecular weight of a molecule is the sum of the atomic weights of all the atoms it contains.

As a first step towards figuring out exact molecular weights for the molecules and atomic weights for the two elements, Muriel wants to sort the molecules by strictly increasing molecular weight. To assess the difficulty of that task, she wants to know how many orders are valid considering only the information she has right now. An ordering of the molecules is considered valid if there exist values for the atomic weights of Codium and Jamarium such that the ordering is strictly increasing in molecular weight.

To give an example, we represent each molecule by the ordered pair of the number of atoms of Codium and Jamarium it contains. If Muriel has 3 molecules represented by (1, 1), (2, 1) and (1, 2), there are two possible orderings that can be strictly increasing in molecular weight: (1, 1), (1, 2), (2, 1) and (1, 1), (2, 1), (1, 2). The first ordering is valid for any assignment of atomic weights in which Codium is the heaviest of the two elements, and the second is valid for any assignment in which Jamarium is the heaviest. The only case remaining is when both Codium and Jamarium have the same atomic weight, in which case (1, 2) and (2, 1) have the same molecular weight, so no strictly increasing ordering can be produced for that scenario.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. The first line of a test case contains a single integer N, the number of molecules. Each of the next N lines describes a different molecule with two integers Ci and Ji that represent the number of Codium and Jamarium atoms in the i-th molecule, respectively.

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the total number of valid orderings as defined above.
