# Problem

 Googlers are crazy about numbers and games, especially number games! Two Googlers, Laurence and Seymour, have invented a new two-player game based on "gNumbers". A number is a gNumber if and only if the sum of the number's digits has no positive divisors other than $1$ and itself. (In particular, note that $1$ is a gNumber.)

The game works as follows: First, someone who is not playing the game chooses a starting number $N$. Then, the two players take turns. On a player's turn, the player checks whether the current number $C$ is a gNumber. If it is, the player loses the game immediately. Otherwise, the player chooses a prime factor $P$ of $C$, and keeps dividing $C$ by $P$ until $P$ is no longer a factor of $C$. (For example, if the current number were $72$, the player could either choose $2$ and repeatedly divide by $2$ until reaching $9$, or choose $3$ and repeatedly divide by $3$ until reaching $8$.) Then the result of the division becomes the new current number, and the other player's turn begins.

Laurence always gets to go first, and he hates to lose. Given a number $N$, he wants you to tell him which player is certain to win, assuming that both players play optimally.
