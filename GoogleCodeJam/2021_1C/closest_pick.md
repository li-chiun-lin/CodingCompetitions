# Problem

You are entering a raffle for a lifetime supply of pancakes. N tickets have already been sold. Each ticket contains a single integer between 1 and K, inclusive. Different tickets are allowed to contain the same integer. You know exactly which numbers are on all of the tickets already sold and would like to maximize your odds of winning by purchasing two tickets (possibly with the same integer on them). You are allowed to choose which integers between 1 and K, inclusive, are on the two tickets.

Two piles of tickets. The left has numbers 1, 3, and 7. The right has numbers 4 and 8.

You know you are the last customer, so after you purchase your tickets, no more tickets will be purchased. Then, an integer c between 1 and K, inclusive, is chosen uniformly at random. If one of your tickets is strictly closer to c than all other tickets or if both of your tickets are the same distance to c and strictly closer than all other tickets, then you win the raffle. Otherwise, you do not win the raffle.

Given the integers on the N tickets purchased so far, what is the maximum probability of winning the raffle you can achieve by choosing the integers on your two tickets optimally?
