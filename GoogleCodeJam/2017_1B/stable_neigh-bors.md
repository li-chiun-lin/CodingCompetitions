# Problem

You are lucky enough to own N pet unicorns. Each of your unicorns has either one or two of the following kinds of hairs in its mane: red hairs, yellow hairs, and blue hairs. The color of a mane depends on exactly which sorts of colored hairs it contains:

- A mane with only one color of hair appears to be that color. For example, a mane with only blue hairs is blue.
- A mane with red and yellow hairs appears orange.
- A mane with yellow and blue hairs appears green.
- A mane with red and blue hairs appears violet.

You have R, O, Y, G, B, and V unicorns with red, orange, yellow, green, blue, and violet manes, respectively.

You have just built a circular stable with N stalls, arranged in a ring such that each stall borders two other stalls. You would like to put exactly one of your unicorns in each of these stalls. However, unicorns need to feel rare and special, so no unicorn can be next to another unicorn that shares at least one of the hair colors in its mane. For example, a unicorn with an orange mane cannot be next to a unicorn with a violet mane, since both of those manes have red hairs. Similarly, a unicorn with a green mane cannot be next to a unicorn with a yellow mane, since both of those have yellow hairs.

Is it possible to place all of your unicorns? If so, provide any one arrangement.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with seven integers: N, R, O, Y, G, B, and V.
