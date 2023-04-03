# Problem

Sherlock and Watson are playing a game involving bit strings, i.e., strings consisting only of the digits 0 and 1. Watson has challenged Sherlock to generate a bit string S of N characters S1, S2, ..., SN. The string must obey each of K different constraints; each of these constraints is specified via three integers Ai, Bi, and Ci. The number of 1s in the substring SAi, SAi + 1, ..., SBi must be equal to Ci.

Watson chooses the constraints in a way that guarantees that there is at least one string of the right length that obeys all of the constraints. However, since there could be multiple such strings, Watson wants Sherlock to choose the string from this set that is Pth in lexicographic order, with P counted starting from 1.
