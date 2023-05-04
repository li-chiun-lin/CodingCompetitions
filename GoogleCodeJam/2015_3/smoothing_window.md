# Problem

Adamma is a climate scientist interested in temperature. Every minute, she records the current temperature as an integer, creating a long list of integers: x1, x2, ..., xN. (Adamma uses her own special temperature scale rather than a familiar one like Celsius or Kelvin, so it's possible for the values to be large and negative!) She often plots these temperatures on her computer screen.

This morning, she decided to compute a sliding average of this list in order to get a smoother plot. She used a smoothing window of size K, which means that she converted the sequence of N temperatures into a sequence of (N - K + 1) average temperatures: s1, s2, ..., sN-K+1. Each si is the average of the values xi, xi+1, ..., xi+K-1. The original xi values were all integers, but some of the si may be fractional.

Unfortunately, Adamma forgot to save the original sequence of temperatures! And now she wants to answer a different question -- what was the difference between the largest temperature and the smallest temperature? In other words, she needs to compute max{x1, ..., xN} - min{x1, ..., xN}. But she only has N, K, and the smoothed sequence.

After some thinking, Adamma has realized that this might be impossible because there may be several valid answers. In that case, she wants to know the smallest possible answer among all of the possible original sequences that could have produced her smoothed sequence with the given values of N and K.

## Input

The first line of the input gives the number of test cases, T. T test cases follow; each test case consists of two lines. The first line contains integers N and K separated by a space character. The second line contains integer values sum1, sum2, ..., sumN-K+1, separated by space characters. si is given by sumi / K.
