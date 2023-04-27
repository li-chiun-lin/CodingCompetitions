# Problem

Vincent and Desta are childhood friends. Today, Vincent is showing N distinct L-letter words to Desta by using some letter tiles. Each tile contains one uppercase English alphabet letter, and one number between 1 and L. A word consists of the letters spelled out by L tiles with numbers from 1 through L, in order. (Vincent's words are not necessarily real English words.)

For example, if Vincent has N = 3 words with L = 4, and the words are {CAKE, TORN, SHOW}, then Vincent must show the following to Desta:

```text
C1 A2 K3 E4
T1 O2 R3 N4
S1 H2 O3 W4
```

Desta feels that creating words must be easy, and he wants to create a new word that obeys the rules above and is not one of Vincent's existing words. However, Desta does not have any tiles of his own, so he must use some of Vincent's tiles.

For instance, if Vincent has the words from the previous example, then Desta can make a new word such as CORN or SAKE or CHRE (Desta's words are also not necessarily real English words). Each of the example is illustrated in the following image:

```text
C1 O2 R3 N4
S1 A2 K3 E4
C1 H2 R3 E4
```

Note that the three rows in the image above are independent. Desta only needs to make one new word.

However, in the above example, Desta cannot make WAKE, for example, because there is no W tile with a number 1. Nor can he make COO, since it is not the right length.

Notice that it may be impossible for Desta to make a new word. For example, if Vincent has only one word, then Desta cannot make anything new. Or, if Vincent has the words {AA, AB, BA, BB}, then any word that Desta can form is already present.

Help Desta to choose a word that he can show to Vincent using only the tiles used by Vincent, or indicate that it is impossible to do so.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with two integers N and L: the number of Vincent's words, and the length of each word. Then, N more lines follow. The i-th of these lines contains a string of L uppercase English letters representing the i-th of Vincent's words.
