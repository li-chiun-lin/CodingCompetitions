# Problem

Your team is about to prove itself in a dance battle! Initially, your team has $E$ points of energy, and zero points of honor. There are $N$ rival teams who you must face; the $i$-th of these teams is the $i$-th in a lineup, and has a dancing skill of $S_i$.

In each round of battle, you will face the next rival team in the lineup, and you can take one of the following actions:

- Dance: Your team loses energy equal to the dancing skill of the rival team, and that team does not return to the lineup. You gain one point of honor. You cannot take this action if it would make your energy drop to 0 or less.
- Delay: You make excuses ("our shoes aren't tied!") and the rival team returns to the back of the lineup. Your energy and honor do not change.
- Truce: You declare a truce with the rival team, and that team does not return to the lineup. Your energy and honor do not change.
- Recruit: You recruit the rival team onto your team, and that team does not return to the lineup. Your team gains energy equal to the dancing skill of the rival team, but you lose one point of honor. You cannot take this action if it would make your honor drop below 0.

The battle is over when there are no more rival teams in the lineup. If you make optimal decisions, what is the maximum amount of honor you can have when the battle is over?
