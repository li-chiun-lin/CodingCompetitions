# Problem

Here at Kickstart, we are fans of the well-known Quicksort algorithm, which chooses a pivot value from a list, moves each other value into one of two new lists depending on how it compares with the pivot value, and then recursively sorts each of those new lists. However, the algorithm might choose a pivot that causes all of the other values to end up in only one of the two new lists, which defeats the purpose of the divide-and-conquer strategy. We call such a pivot a worst-case pivot.

To try to avoid this problem, we have created our own variant, Kicksort. Someone told us that it is good to use a value in the middle as a pivot, so our algorithm works as follows:

```text
  Kicksort(A): // A is a 0-indexed list with E elements
    If E ≤ 1, return A.
    Otherwise:
      Create empty new lists B and C.
      Choose A[floor((E-1)/2)] as the pivot P.
      For i = 0 to E-1, except for i = floor((E-1)/2):
        If A[i] ≤ P, append it to B.
        Otherwise, append it to C.
    Return the list Kicksort(B) + [P] + Kicksort(C).
    // [P] is a new list with just P; + means concatenate
```

For practice, we are trying Kicksort out on lists that are permutations of the numbers $1$ through $N$. Unfortunately, it looks like Kicksort still has the same problem as Quicksort: it is possible for every pivot to be a worst-case pivot!

For example, consider the list 1 4 3 2. Kicksort will choose 4 as a pivot, and all of the other values 1 3 2 will end up in one of the two new lists. Then, when Kicksort is called on that list 1 3 2, it will choose 3, and once again, all of the other values will end up in one of the two new lists. Finally, it will choose 1 from the list 1 2, and the other value 2 will of course end up in only one of the two new lists. In every case, the algorithm will choose a worst-case pivot. (Notice that when Kicksort is called on a list with 0 or 1 elements, it does not choose a pivot at all.)

Please help us investigate this further! Given a permutation of the numbers $1$ through $N$, determine whether Kicksort will choose only worst-case pivots.
