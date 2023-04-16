# Problem

Addition and squaring do not commute. That is, the square of the sum of all elements of a list of integers is not necessarily equal to the sum of the squares of those same elements. However, this is true for some lists; one example is [3,−2,6], because (3+(−2)+6)2=49=32+(−2)2+62. Let us call these lists squary.

Image showing that (3 + (-2) + 6)^2 = 3^2 + (-2)^2 + 6^2.

Given a (not necessarily squary) list of relatively small integers, we want to know whether it is possible to add at least 1 and at most K more elements such that the final list is squary. Each added element must be an integer between −1018 and 1018, inclusive, and these do not have to be distinct from each other or from the initial list's elements.
