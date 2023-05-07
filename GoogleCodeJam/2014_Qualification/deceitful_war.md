# Problem

Naomi and Ken sometimes play games together. Before they play, each of them gets $N$ identical-looking blocks of wood with masses between $0.0$ kg and $1.0$ kg (exclusive). All of the blocks have different weights. There are lots of games they could play with those blocks, but they usually play something they call $War$. Here is how $War$ works:

1. Each player weighs each of his or her own blocks, so each player knows the weights of all of his or her own blocks, but not the weights of the other player's blocks.
1. They repeat the following process $N$ times:
   1. Naomi chooses one of her own blocks, with mass $Chosen_{Naomi}$.
   1. Naomi tells Ken the mass of the block she chose.
   1. Ken chooses one of his own blocks, with mass $Chosen_{Ken}$.
   1. They each put their block on one side of a balance scale, and the person whose block is heavier gets one point.
   1. Both blocks are destroyed in a fire.

Naomi has realized three things about $War$.  
First, she has realized that she loses a lot.  
Second, she has realized that there is a unique strategy that Ken can follow to maximize his points without assuming anything about Naomi's strategy, and that Ken always uses it.  
Third, she has realized that she hates to lose.  
Naomi has decided that instead of playing $War$, she will play a game she calls $Deceitful\ War$. The great thing about $Deceitful\ War$ is that Ken will think they're playing $War$!

Here is how $Deceitful\ War$ works, with differences between $Deceitful\ War$ and $War$ in bold:

1. Each player weighs each of his or her own blocks. __Naomi also weighs Ken's blocks while he isn't looking, so Naomi knows the weights of all blocks__ and Ken only knows the weights of his own blocks.
1. They repeat the following process $N$ times:
   1. Naomi chooses one of her own blocks, with mass $Chosen_{Naomi}$.
   1. Naomi tells Ken __a number, $Told_{Naomi}$, between $0.0$ kg and $1.0$ kg exclusive__. Ken, who thinks they're playing $War$, thinks the number Naomi just told him is $Chosen_{Naomi}$.
   1. Ken chooses one of his own blocks, with mass $Chosen_{Ken}$.
   1. They each put their block on one side of a balance scale, and the person whose block is heavier gets one point.
   1. Both blocks are destroyed in a fire.

Naomi doesn't want Ken to know that she isn't playing $War$; so when she is choosing which block to play, and what mass to tell Ken, she must make sure that the balance scale won't reveal that $Chosen_{Naomi} ≠ Told_{Naomi}$. In other words, she must make decisions so that:

- $Chosen_{Naomi} > Chosen_{Ken}$ if, and only if, $Told_{Naomi} > Chosen_{Ken}$, and
- $Told_{Naomi}$ is not equal to the mass of any of Ken's blocks, because he knows that isn't possible.

It might seem like Naomi won't win any extra points by being deceitful, because Ken might discover that she wasn't playing $War$; but Naomi knows Ken thinks both players are playing $War$, and she knows what he knows, and she knows Ken will always follow his unique optimal strategy for $War$, so she can always predict what he will play.

You'll be given the masses of the blocks Naomi and Ken started with. Naomi will play $Deceitful\ War$ optimally to gain the maximum number of points. Ken will play $War$ optimally to gain the maximum number of points assuming that both players are playing $War$. What will Naomi's score be? What would it have been if she had played $War$ optimally instead?

## Examples

If each player has a single block left, where Naomi has $0.5$ kg and Ken has $0.6$ kg, then Ken is guaranteed to score the point. Naomi can't say her number is $≥ 0.6$ kg, or Ken will know she isn't playing $War$ when the balance scale shows his block was heavier.

If each player has two blocks left, where Naomi has $[0.7, 0.2]$ kg and Ken has $[0.8, 0.3]$ kg, then Naomi could choose her $0.2$ kg block, and deceive Ken by telling him that she chose a block that was $0.6$ kg. Ken assumes Naomi is telling the truth (as in how the $War$ game works) and will play his $0.8$ kg block to score a point. Ken was just deceived, but he will never realize it because the balance scale shows that his $0.8$ kg block is, like he expected, heavier than the block Naomi played. Now Naomi can play her $0.7$ kg block, tell Ken it is $0.7$ kg, and score a point. If Naomi had played $War$ instead of Deceitful War, then Ken would have scored two points and Naomi would have scored zero.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.  
Each test case starts with a line containing a single integer $N$, the number of blocks each player has.  
Next follows a line containing $N$ space-separated real numbers: the masses of Naomi's blocks, in kg.  
Finally there will be a line containing $N$ space-separated real numbers: the masses of Ken's blocks, in kg.

Each of the masses given to Ken and Naomi will be represented as a $0$, followed by a decimal point, followed by $1-5$ digits. Even though all the numbers in the input have $1-5$ digits after the decimal point, Ken and Naomi don't know that; so Naomi can still tell Ken that she played a block with mass $0.5000001$ kg, and Ken has no reason not to believe her.
