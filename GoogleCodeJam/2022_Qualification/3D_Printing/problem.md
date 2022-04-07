You are part of the executive committee of the Database Design Day festivities. You are in charge of promotions and want to print three D's to create a logo of the contest. You can choose any color you want to print them, but all three have to be printed in the same color.

You were given three printers and will use each one to print one of the D's. All printers use ink from 4
individual cartridges of different colors (cyan, magenta, yellow, and black) to form any color. For these printers, a color is uniquely defined by 4 non-negative integers c, m, y, and k, which indicate the number of ink units of cyan, magenta, yellow, and black ink (respectively) needed to make the color.

The total amount of ink needed to print a single D is exactly 106
units. For example, printing a D in pure yellow would use 106 units of yellow ink and 0 from all others. Printing a D in the Code Jam red uses 0 units of cyan ink, 500000 units of magenta ink, 450000 units of yellow ink, and 50000 units of black ink.

To print a color, a printer must have at least the required amount of ink for each of its 4
color cartridges. Given the number of units of ink each printer has in each cartridge, output any color, defined as 4 non-negative integers that add up to 106, such that all three printers have enough ink to print it.

Input

The first line of the input gives the number of test cases, T
. T test cases follow. Each test case consists of 3 lines. The i-th line of a test case contains 4 integers Ci, Mi, Yi, and Ki, representing the number of ink units in the i
-th printer's cartridge for the colors cyan, magenta, yellow, and black, respectively.

Output

For each test case, output one line containing Case #x
: r, where x is the test case number (starting from 1) and r is IMPOSSIBLE if there is no color that can be printed by all 3 printers. Otherwise, r must be equal to "c m y k" where c, m, y, and k are non-negative integers that add up to 106 and c≤Ci, m≤Mi, y≤Yi, and k≤Ki, for all i
.

If there are multiple solutions, you may output any one of them. (See "What if a test case has multiple correct solutions?" in the Competing section of the FAQ.) This information about multiple solutions will not be explicitly stated in the remainder of the 2022 contest. 