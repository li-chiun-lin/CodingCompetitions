# Problem

Gary has a large square wall that is exactly 2 × 109 nanometers tall and 2 × 109 nanometers wide. Gary has a dartboard placed on the wall. The dartboard is circular and its radius is between A and B nanometers, inclusive. The dartboard is fully contained within the wall, but it may touch its edges. The center of the dartboard is an integer number of nanometers from each edge of the wall.

Gary invited his friend Mika over to play an interesting game. Gary blindfolds Mika and challenges her to throw a dart at the center of the dartboard. To help her, whenever Mika throws a dart at the wall, Gary will tell her whether the dart hit the dartboard.

Mika does not know where on the wall the dartboard is, but since Mika is very skilled at darts, she can throw darts with nanometer precision. That is, she can aim and hit exactly any point that is an integer number of nanometers away from each edge of the wall. Immediately after throwing each dart, Gary tells her whether she hit the center of the dartboard, some other part of it, or missed it completely and hit the bare wall.

Can you help Mika hit the center of the dartboard, without throwing more than 300 darts?

## Input and Output

Initially, your program should read a single line containing three integers T, A and B, indicating the number of test cases and the inclusive minimum and maximum values for the dartboard's radius, in nanometers, respectively. (Notice that A and B are the same for every test case within a test set.) Then, you need to process T test cases.

We represent the points that darts can be aimed at as pairs (x, y), where x and y are integers between -109 and 109, inclusive. The pair (x, y) is the point that is x + 109 nanometers away from the left edge of the wall and y + 109 nanometers away from the bottom edge of the wall. Point (0, 0) is therefore at the exact center of the wall.

For each test case, there is a secretly chosen radius R for the dartboard, and a secretly chosen center of the dartboard (X, Y). R, X, and Y are integers chosen for each test case by the judges in a designed (not random) way, within the limits. For each test case you need to process up to 300 exchanges with the judge. Your program represents Mika and the judge program represents Gary. Each exchange consists of Mika (your program) choosing where to throw a dart and Gary (the judging program) giving information about that position.

The i-th exchange consists of your program first outputting a single line containing two integers Xi and Yi, both between -109 and 109, inclusive, and the judge responding with a single line containing either:

    CENTER if Xi = X and Yi = Y
    HIT if 0 < (X - Xi)2 + (Y - Yi)2 ≤ R2
    MISS in all other cases.

After sending CENTER, the judge will start waiting for the first exchange of the next test case, if there is any.

If you output a line that is incorrectly formatted or with an out of bounds value, the judge will respond with a single line containing WRONG. If 300 exchanges occur (including 300 responses from the judge) without you receiving CENTER, or if you ever receive WRONG, the judge will finish all communication, wait for your own program to also finish, and give a Wrong Answer verdict. After sending the T-th CENTER, on the other hand, the judge will finish all communication, wait for your own program to finish, and give a Correct verdict. If, while waiting for your program to finish, time or memory limits are exceeded, the corresponding verdict will be assigned instead. (Note that verdicts are not messages sent to your program.)
