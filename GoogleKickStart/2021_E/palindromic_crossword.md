# Problem

A crossword puzzle is a rectangular grid of black cells and letters A-Z like the one shown below.

Example crossword

Words in the crossword are defined as maximal vertical or horizontal segments of characters. In the crossword below, DO and ON are examples of words.

Example crossword with highlighted words

A palindromic crossword is one where every word is a palindrome. Let Ri,j represent the character on the i-th row and j-th column, where i and j are 1-indexed. The top left corner is R1,1. In the example palindromic crossword below, the B in R3,2 is part of both the horizontal word starting at R3,1 and the vertical word ending at R4,2, and both are palindromes.

Full palindromic crossword

You have been gifted a palindromic crossword puzzle with N rows and M columns. You finished the crossword and throw away the clues, preparing to hang it on your wall. However, you accidentally erase some of the letters! You want to recover as much of the crossword as possible, but you do not have the clues anymore. Using only the knowledge that the crossword is palindromic, restore the maximum possible number of missing characters in the given crossword.

Missing letters are represented as empty white cells in the below diagram. The crossword on the left is the crossword you are given and the crossword on the right is the result after you recover as many letters as possible. The remaining cells cannot be filled because we do not have sufficient information to recover them.
