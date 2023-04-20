# Problem

Ueli and Vreni are playing a game. The game's board is a tree with N vertices, all initially colored blue. They alternate turns, with Ueli going first. In each turn, a player must choose a blue vertex, together with any subset (possibly none or all) of its blue neighbors, and color all those vertices red. If at the start of a players' turn, all vertices are red, then that player loses the game and the other player wins the game.

In the example game below, Ueli colored vertex 3 red in their first turn. Then, Vreni chose vertex 2 for their turn and colored both it and its neighbor (vertex 1) red. Because all vertices are now red, Ueli loses and Vreni wins.

Illustration of Sample Case #1 Game #1.

Ueli and Vreni have noticed that it is much easier for Ueli to win this game because he has the first turn. Therefore they have adopted the following procedure: first, Ueli chooses an integer N. Then, Vreni chooses any tree with N vertices. And then they start playing as described above, with Ueli taking the first turn.

Vreni is hopeful that being able to choose the tree can help her overcome the disadvantage of going second. Can you demonstrate how Vreni can win games in this setup?
