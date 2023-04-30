# Problem

Joy is about to go on a long vacation, so she has hired technicians to install a security system based on infrared laser beams. The technicians have given her a diagram that represents her house as a grid of unit cells with R rows and C columns. Each cell in this grid contains one of the following:

 - /: A two-sided mirror that runs from the cell's lower left corner to its upper right corner.
 - \: A two-sided mirror that runs from the cell's upper left corner to its lower right corner.
 - -: A beam shooter that shoots horizontal beams out into the cells (if any) to the immediate left and right of this cell.
 - |: A beam shooter that shoots vertical beams out into the cells (if any) immediately above and below this cell.
 - #: A wall. (Note that the house is not necessarily surrounded by a border of walls; this is one reason why Joy needs a security system!)
 - .: Nothing; the cell is empty.

Beams travel in straight lines and continue on through empty cells. When a beam hits a mirror, it bounces 90 degrees off the mirror's surface and continues. When a beam traveling to the right hits a / mirror, it bounces off the mirror and starts traveling up; beams traveling up, left, or down that hit a / mirror bounce off and travel right, down, or left, respectively. The \ mirror behaves similarly: when a beam traveling right, up, left or down hits it, it bounces off and starts traveling down, left, up or right, respectively. When a beam hits a wall or goes out of the bounds of the grid, it stops. It is fine for beams to cross other beams, but if a beam hits any beam shooter (including, perhaps, the beam shooter that originated the beam), that beam shooter will be destroyed!

Joy wants to make sure that every empty cell in the house has at least one beam passing through it, and that no beam shooters are destroyed, since that would just be wasting money! Unfortunately, the technicians have already installed the system, so the most Joy can do is rotate some of the existing beam shooters 90 degrees. That is, for any number (including zero) of beam shooters, she can turn - into | or vice versa.

Can you find any way for Joy to achieve her goal, or determine that it is impossible? Note that it is not required to minimize the number of rotations of beam shooters.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case begins with one line with two integers R and C: the number of rows and columns in the grid representing the house. Then, R lines of C characters each follow; each character is /, \, -, |, #, or ., as described in the statement.
