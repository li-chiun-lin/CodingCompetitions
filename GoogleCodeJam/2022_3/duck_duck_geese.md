# Problem

In the game "Duck, Duck, Goose", all players but one sit on the floor and form a circle. The remaining player walks around the circle calling each player "duck" until they select one sitting player and, while touching their head, call them "goose" instead. At that point, the goose chases the selecting player and our interest in the game fades.

In the new game "Duck, Duck, Geese", the walking player instead chooses a contiguous subset of at least two (but not all) sitting players to be "geese"! Furthermore, each sitting player is wearing a hat. Each hat is one of C possible colors, numbered 1 through C.

Illustration of Sample Case #2. 5 children seated on a grey mat in a circle. In clockwise order (starting from the bottom-right child), the children have hats of colors yellow, blue, yellow, blue, and blue.

For each color i, the quantity of selected geese wearing a hat of color i must be either 0 or between Ai and Bi, inclusive.

Can you help count the number of choices that fulfill these requirements? Two choices are considered different if there is some player that is included in one choice but not the other.
