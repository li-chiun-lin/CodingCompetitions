# Problem

In this problem, when something is said to be chosen at random, it means uniformly at random from among all valid possibilities, and independently of any other choice.

Code Jam contestants once helped the mighty Goro sort an array of integers. (You do not need to read that problem to solve this one.) Once again, Goro needs your help. He has N boxes lined up on the table in a single row, numbered 1 through N from left to right. Each box has exactly one ball inside. Balls are also numbered 1 through N. Goro wants ball i to end up in box i, for all i. That is, he wants to leave the balls in sorted order. Unfortunately, that is not initially the case.

When Goro bumps the table with his powerful fists, balls pop up in the air and fall back in boxes. Goro can do this so accurately that exactly one ball falls into each box. A ball may fall into the same box it came out of, or into a different one.

Better yet, Goro also has the ability to assign colors to boxes before each bump. Then, he can bump the table in such a way that balls coming out of a box of color c always fall into a box of color c. As impressive as this accuracy is, Goro does not have any more control than that. Within each color, balls end up assigned to boxes at random.

6 boxes numbered 1 to 6 from left-to-right. Box 1 is red. Boxes 2 and 6 are green. Boxes 3-5 are blue. There is a grey ball in each box. The balls are numbered 1, 4, 3, 6, 5, 2.

For example, suppose the balls appear in the order 1,4,3,6,5,2(as seen above). He might choose — not necessarily optimally — to give the first box the color red, the second and sixth boxes the color green, and the third through fifth boxes the color blue. Then, after Goro bumps the table,

- The 1 in the first box falls back into the same box, because that is the only red box.
- The 4 and 2 in the second and sixth boxes remain in place with probability 12, and switch places with probability 12.
- The 3,6,5 in the third, fourth, and fifth boxes end up in one of the following orders, each with probability 16:

  - 3,6,5
  - 3,5,6
  - 6,3,5
  - 6,5,3
  - 5,3,6
  - 5,6,3

So, for example, the probability of the bump leaving the balls in the order 1,2,3,5,6,4 is $1/12$. If Goro got this or some other non-sorted result, he would have to designate a set of box colors for the next round, and so on, until he eventually arrives at the sorted 1,2,3,4,5,6. Goro can assign colors to boxes in any way before each bump, regardless of previous assignments.

Can you help Goro implement a better strategy that will efficiently sort the balls? It is guaranteed that the balls start in a random non-sorted order.
