# Problem

Last year, we asked you to help us convert expensive metals into lead. (You do not need to know anything about the previous problem to solve this one.) But your country's leader is still greedy for more lead!

There are M metals known in the world; lead is metal number 1 on your periodic table. Your country's leader has asked you to use the metals in the treasury to make as much lead as possible.

For each metal (including lead), you know exactly one formula that lets you destroy one gram of that metal and create one gram each of two metals. (It is best not to think too much about the principle of mass conservation!) Note that it is possible that the formula for the i-th metal might produce the i-th metal as one of the products. The formulas do not work with partial grams. However, you can use each formula as often as you would like (or not at all), as long as you have a gram of the required ingredient.

If you make optimal choices, what is the largest number of grams of lead you can end up with, or is it unbounded? If it is not unbounded: since the output can be a really big number, we only ask you to output the remainder of dividing the result by the prime 109+7 (that is, 1000000007).

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with an integer M: the number of metals known in the world. Then there are M more lines with two integers Ri1 and Ri2 each; the i-th of these lines, counting starting from 1, indicates that you can destroy one gram of metal i to create one gram of metal Ri1 and one gram of metal Ri2. Finally, there is one line with M integers G1, G2, ..., GM; Gi is the number of grams of metal i in the treasury. Lead is metal 1.

## Output

For each test case, output one line containing Case #x: y where x is the test case number (starting from 1). If there is no bound on the maximum amount of lead that can be produced, y must be UNBOUNDED. Otherwise, y must be the largest amount of lead, in grams, that you can end up with, modulo the prime 109+7 (that is, 1000000007).
