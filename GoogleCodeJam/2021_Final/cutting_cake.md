# Problem

Today is your and your twin sibling's birthday. To celebrate, you got a rectangular cake to share. The cake is decorated with N
triangular patches of icing (which may overlap). All the icing patches were created with the same triangular mold, so they have the same shape and orientation. Although you and your twin are very similar, your tastes in icing are much different. This difference is formalized by each of you having a different enjoyment value for each patch of icing. Specifically, your enjoyment value for eating the entire i⁠-⁠th patch of icing is Ai, and your twin's is Bi. If someone eats part of a patch, they get enjoyment proportional to the eaten area. For example, if you eat 23 of the area of the i⁠-⁠th icing patch, you would get 2Ai3 enjoyment from it. Note that there may be some flavors of icing that you or your twin do not enjoy, so the Ai and/or Bi

values can be negative.
A cake with 4 icing patches.

You will cut the cake into two rectangular pieces by making a single vertical cut (parallel to the Y-axis). After cutting the cake, you will eat the left piece and your twin will eat the right piece. Your total enjoyment is the sum of the enjoyment you get from all icing to the left of the cut. Similarly, your twin's enjoyment is the sum of the enjoyment they get from all icing to the right of the cut.

To be as fair as possible, you want to cut the cake such that the absolute value of the difference between your total enjoyment and your twin's total enjoyment is as small as possible. Given the N
triangular icing patches on a rectangular cake, what is the minimum possible absolute value of the difference between your and your twin's total enjoyments you can get?
