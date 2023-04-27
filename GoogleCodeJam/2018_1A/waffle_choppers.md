# Problem

The diners at the Infinite House of Pancakes have gotten tired of circular pancakes, so the chefs are about to offer a new menu option: waffles! As a publicity stunt, they have made one large waffle that is a grid of square cells with R rows and C columns. Each cell of the waffle is either empty, or contains a single chocolate chip.

Now it is time for the chefs to divide up the waffle among their hungry diners. A horizontal cut runs along the entire gridline between two of the rows; a vertical cut runs along the entire gridline between two of the columns. For efficiency's sake, one chef will make exactly H different horizontal cuts and another chef will make exactly V different vertical cuts. This will conveniently create one piece for each of the (H + 1) × (V + 1) diners. The pieces will not necessarily all be of equal sizes, but that is fine; market research has shown that the diners do not care about that.

What the diners do care about is the number of chocolate chips they get, so each piece must have exactly the same number of chocolate chips. Can you determine whether the chefs can accomplish this goal using the given numbers of horizontal and vertical cuts?

## Input

The first line of the input gives the number of test cases, T; T test cases follow. Each begins with one line containing four integers R, C, H, and V: the number of rows and columns in the waffle, and the exact numbers of horizontal and vertical cuts that the chefs must make. Then, there are R more lines of C characters each; the j-th character in the i-th of these lines represents the cell in the i-th row and the j-th column of the waffle. Each character is either @, which means the cell has a chocolate chip, or ., which means the cell is empty.
