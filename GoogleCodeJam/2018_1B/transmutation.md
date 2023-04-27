# Problem

You are the most skilled alchemist of a country that considers metals such as gold, platinum, and silver to be uninteresting, but highly values lead. There are M metals known in the world; lead is metal number 1 on your periodic table. Your country's leader has asked you to use the metal in the treasury to make as much lead as possible.

For each metal (including lead), you know exactly one formula that lets you create one gram of that metal by destroying one gram each of two ingredient metals. (If you are wondering about the principle of mass conservation, the other gram is lost in useless waste products.) The formulas do not work with partial grams. However, you can use each formula as often as you would like (or not at all), as long as you have the required ingredients each time.

If you make optimal choices, what is the largest total amount of lead you can end up with? Note that it is possible that you may have some metals other than lead left over after you are done.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with an integer M: the number of metals known in the world. Then there are M more lines with two integers Ri1 and Ri2 each; the i-th of these lines indicates that you can create one gram of metal i by destroying one gram of metal Ri1 and one gram of metal Ri2. Finally, there is one line with M integers G1, G2, ..., GM; Gi is the number of grams of metal i in the treasury. Lead is metal 1.
