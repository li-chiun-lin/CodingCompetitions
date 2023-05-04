# Problem

While using Google Street View, you may have picked up and dropped the character Pegman before. Today, a mischievous user is going to place Pegman in some cell of a rectangular grid of unit cells with R rows and C columns. Each of the cells in this grid might be blank, or it might be labeled with an arrow pointing in one of four possible directions: up, right, down, or left.

When Pegman is placed on a grid cell, if that cell is blank, Pegman stands still forever. However, if that cell has an arrow, Pegman starts to walk in that direction. As he walks, whenever he encounters a blank cell, he just keeps walking in his current direction, but whenever he encounters another arrow, he changes to the direction of that arrow and then keeps walking.

You know that it is possible that Pegman might keep happily walking around and around the grid forever, but it is also possible that Pegman's walk will take him over the edge of the grid! You may be able to prevent this and save him by changing the direction of one or more arrows. (Each arrow's direction can only be changed to one of the other three possible directions; arrows can only be changed, not added or removed.)

What is the smallest number of arrows you will need to change to ensure that Pegman will not walk off the edge, no matter where on the grid he is initially placed?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with two space-separated integers R, C. This line is followed by R lines, each of which has C characters, each of which describes a grid cell and is one of the following:

- . period = no arrow
- ^ caret = up arrow
- \> greater than = right arrow
- v lowercase v = down arrow
- < less than = left arrow
