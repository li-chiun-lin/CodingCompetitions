# Problem

You are going to build N
towers of B cubic blocks each, one block at a time. Towers are built bottom-up: the i-th block to be placed in a tower ends up as the i-th from the bottom. You need to decide where to place each block before getting to see any of the upcoming blocks, and once placed, blocks cannot be moved.

Each block has a single decimal digit printed on it, and towers are built such that the faces with digits are all facing the front. The font is such that blocks cannot be rotated to obtain a different digit (for example, a block with a 6 on it cannot be rotated to obtain a block with a 9 on it, nor vice versa).

For example, suppose N=3 and B=3 and you currently have towers as shown in Picture 1. If a block with a 6 shows up next, you have two options: either place it on top of the tower with only two blocks (as shown in Picture 2) or start the third tower (as shown in Picture 3). Note that you cannot put it on top of the first tower since the first tower already has B blocks.

2 towers having (1, 2, 3) and (4, 5) from top down

Picture 1
2 towers having (1, 2, 3) and (6, 4, 5) from top down

Picture 2
3 towers having (1, 2, 3), (4, 5), and (6) from top down

Picture 3

After the building is done, we read the B digit integer printed on the front of each tower from the top to the bottom (that is, the digit on the last block placed on a tower is the most significant digit). Notice that these integers may have any number of leading zeroes. Then, we add those N integers together to obtain the score of our building operation.

For example, in Picture 4 below, the integers read on each tower, from left to right, are 123, 345, and 96. The score of that building operation would be 123+345+96=564.

3 towers having (1, 2, 3), (3, 4, 5), and (0, 9, 6) from top down

Picture 4

The digit for each block is generated uniformly at random, and independently of any other information. In order for your solution to be judged correct, the sum of its scores over all T
test cases must be at least P.
