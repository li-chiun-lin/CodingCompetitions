# Problem

For the first time in as long as anyone can remember, the kingdom of Kickstartia is alive with celebration: it is the coronation day for the new King. As is customary for the coronation, a Royal Parade will march its way through the streets of the capital.

The capital can be thought of as an infinite 2D plane, with infinitely many, infinitely long, streets spaced one meter apart, running horizontally and vertically throughout. The horizontal streets are labelled from negative infinity to infinity from top to bottom, while the vertical streets are labelled from negative infinity to infinity from left to right.

There are N cafes in the capital, and the i-th one is located at the intersection of vertical street Vi and horizontal street Hi. No two cafes lie on the same intersection. In order to keep the parade technicians happy and well-fed, you will pick exactly three of these cafes for them to stop at along the way.

To introduce some order to the chaos, you have additionally decided that a parade should end where it starts, and that its path through the streets must make the shape of a square (with straight sides, all of equal length). Each cafe can be anywhere along the square (on the sides or at a corner).

This immediately presents a problem: depending on which three cafes you pick, it may not be possible to make a square parade that goes through those three cafes. So, your task is to find out: how many different sets of three cafes are there such that there exists at least one square parade that includes all three cafes in the set? (Two sets are different if and only if there is a cafe in one that is not present in the other.)
