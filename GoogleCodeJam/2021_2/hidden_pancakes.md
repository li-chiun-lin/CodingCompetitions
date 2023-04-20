# Problem

We are cooking N
pancakes in total. We cook one pancake with a 1 centimeter (cm) radius, one with a 2 cm radius, one with a 3 cm radius, ..., and one with an N

cm radius, not necessarily in that order. After we cook the first pancake, we just lay it on a plate. After we cook each subsequent pancake, we lay it on top of the previously made pancake, with their centers coinciding. In this way, a pancake is visible from the top of the stack when we first add it. A pancake only becomes hidden if we later cook another pancake with a larger radius.

For example, say we cook 4
pancakes. We first cook the pancake with radius 3 cm, and it is visible. Then, we cook the pancake with radius 1 cm, lay it on top of the first one and both are visible. Third, we cook the pancake with radius 2 cm, and now that covers the previous pancake, but not the first one, so 2 pancakes remain visible in total. Finally, we cook the pancake with radius 4 cm which covers the other pancakes leaving only 1

visible pancake. The picture below illustrates the state of the stack after each pancake is cooked. Within each stack, the fully colored pancakes are visible and the semi-transparent pancakes are not visible.

Four stacks with pancakes of radii 3, 3 and 1, 3, 1 and 2, and 3, 1, 2 and 4.

Let Vi
be the number of visible pancakes when the stack contains exactly i pancakes. In the example above, V1=1, V2=2, V3=2, and V4=1

.

Given the list V1,V2,…,VN
, how many of the N! possible cooking orders yield those values? Since the output can be a really big number, we only ask you to output the remainder of dividing the result by the prime 109+7 (1000000007).
