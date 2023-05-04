# Problem

Edythe is a young sorceress working in the quality assurance department of Merlin, Inc. -- a magic spell factory. Her job is to test the magic spells that Merlin himself invents. Each spell requires precise amounts of certain ingredients and transforms them into other amounts of other ingredients. Edythe's job is to cast each spell exactly once in order to verify that the spell works correctly.

She can cast a spell only if she has the required amount of each ingredient. If she has already created ingredients of the right type from previous spells, Edythe must use those first. However, if she still needs more ingredients, she is allowed to take them from Merlin's storehouse. She has no ingredients to start with, but at the end, she gets to keep all the extra ingredients that she created and didn't use.

Edythe wants to make as much profit as possible from her apprenticeship! She has to cast each of the N given spells exactly once, but she is free to do so in any order. Assuming that each spell works as expected, which ordering lets her earn the most money in the end?

For example, imagine that the test plan contains the following 3 spells:

1. Inputs: $7 worth of gold. Outputs: $5 worth of sulfur.
1. Inputs: nothing. Outputs: $10 worth of gold, $10 worth of sulfur.
1. Inputs: $3 worth of gold, $20 worth of sulfur. Outputs: $2 worth of toads.

Note that the first spell converts gold into sulfur, the second spell conjures up gold and sulfur from nothing, and the third spell converts gold and sulfur into toads.

If Edythe were to cast these spells in the order 1, 2, 3, then she would start by fetching $7 worth of gold from the storehouse for spell #1. That would let her cast spells #1 and #2, giving her $10 worth of gold and $15 worth of sulfur. For the final spell, she would need $3 worth of gold and $20 worth of sulfur. She would have to use all of the sulfur she created so far, $3 worth of gold, and $5 more worth of sulfur that she fetched from the storehouse. This would leave her with $9 worth of ingredients at the end ($7 worth of gold and $2 worth of toads).

But there is a better plan. If she cast the spells in the order 3, 1, 2, she would have $27 worth of ingredients at the end ($10 worth of gold, $15 worth of sulfur, and $2 worth of toads).

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each one starts with a line containing N and M. M is the number of kinds of ingredients in the world. Each of the next N lines contains M integers describing a spell. Each integer is the value (or cost) of the corresponding ingredient. Negative integers are the dollar costs of the input ingredients; positive integers are the dollar values of the output ingredients; and zeros denote ingredients that are neither produced nor consumed by the spell. This also implies that no spell can simultaneously consume and produce the same ingredient.
