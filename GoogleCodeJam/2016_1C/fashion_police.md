# Problem

You are so excited about the 2016 Code Jam World Finals that you just moved to New York. You have brought along J different jackets (numbered 1 through J), P different pairs of pants (numbered 1 through P), and S different shirts (numbered 1 through S). You have at least as many shirts as pairs of pants, and at least as many pairs of pants as jackets. (J ≤ P ≤ S.)

Every day, you will pick one jacket, one pair of pants, and one shirt to wear as an outfit. You wash all of your garments every night so all of your garments are available to use each day.

In New York, the Fashion Police officers are always watching and keeping track of what everyone wears every day. If they find out that you have worn the exact same outfit twice, you will immediately be taken to the Fashion Jail on 5th Avenue for a mandatory makeover; you definitely want to avoid that! You will also immediately be taken to Fashion Jail if they find out that you have worn the same two-garment combination more than K times in total. A combination consists of a particular jacket worn with a particular pair of pants, a particular jacket worn with a particular shirt, or a particular pair of pants worn with a particular shirt. For example, in the set of outfits (jacket 1, pants 2, shirt 3) and (jacket 1, pants 1, shirt 3), the combination (jacket 1, shirt 3) appears twice, whereas the combination (pants 1, shirt 3) only appears once.

You will wear one outfit per day. Can you figure out the largest possible number of days you can avoid being taken to Fashion Jail and produce a list of outfits to use each day?

## Input

The first line of the input gives the number of test cases, T. T test cases follow; each consists of one line with four integers J, P, S, and K.
