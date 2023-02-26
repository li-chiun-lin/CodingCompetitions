# Problem

Alice just bought a virtual pet rabbit. The rabbit hops around on a screen and can be "fed" by pressing a button. Alice is fond of the rabbit, but she is also busy, and doesn't want to spend too much time taking care of it. However, if the rabbit goes without "food" for too long, it "dies" and Alice loses the game.

Every day, Alice gets up at time $G$, goes to work at time $W$, returns home at time $H$, and goes to bed at time $B$. Alice cannot feed the rabbit while she is at work or asleep -- that is, in the intervals $[W, H)$ and $[B, G)$. Note that times $W$ and $B$ themselves are not valid feeding times, whereas times $H$ and $G$ are. In any other second, Alice can either push a button to instantly feed the rabbit, or not push the button. Between every two seconds, the rabbit determines the number of consecutive seconds in which it has not been fed, and "dies" if that duration is equal to $X$.

It is currently $00:00:00$ on Day $0$, and the rabbit has just been delivered to Alice's house by the mail service. (The mail carrier pushes the button at $00:00:00$, even if Alice is asleep, and then leaves.) Alice wants to make sure the rabbit is still "alive" at $00:00:00$ on day $D$. What is the minimal number of times that she needs to feed the rabbit, if she can keep the rabbit "alive" at all?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow; each consists of 6 lines. The first 5 lines represent the times $G$, $W$, $H$, $B$, and $X$ in "$hh:mm:ss$" format. The last line consists of one integer $D$.
