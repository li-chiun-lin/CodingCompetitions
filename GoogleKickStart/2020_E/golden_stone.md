# Problem

Leopold's friend Kate likes stones, so he decided to give her a golden stone as a gift. There are S types of stones numbered from 1 to S, 1 being the golden stone. Some types of stones are available free of charge in various parts of the city. The city consists of N junctions numbered from 1 to N and M two-way streets between pairs of distinct junctions. At each junction, zero or more types of stones are available in unlimited supply.

Unfortunately, the golden stone is not available anywhere. Luckily, Leopold is a bit of a magician and knows how to combine a group of stones and turn them into another stone. For example, one of his recipes could produce a golden stone out of one silver stone and two marble stones. He could collect those stones in some of the junctions if they are available, or he could use some of his many other recipes to produce any of those stones. Formally, Leopold has R recipes, where a recipe is in the form (a1, a2, ..., ak) -> b for some k ≥ 1. If Leopold has gathered k stones of types a1, a2, ..., and ak at a certain junction, he can choose to apply the recipe and turn these stones into one stone of type b.

Leopold likes puzzles much more than physical activity, therefore, he does not want to carry stones around the city unnecessarily. Carrying a stone along a street costs him one unit of energy. Leopold can carry no more than one stone at a time, however, he can drop off a stone at any junction and pick it up later at any time.

What is the minimum amount of energy Leopold must spend to produce one golden stone? Leopold is very scared of large numbers. If the answer is greater than or equal to $10^{12}$, print -1 instead.
