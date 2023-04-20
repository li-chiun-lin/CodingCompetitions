# Problem

Gooli is a huge company that owns B
buildings in a hilly area. Five years ago, Gooli built slides that allowed employees to go from one building to another (they are not bidirectional), starting a tradition of building slides between buildings. Currently, S

slides exist.

Melek is Gooli's Head of Transportation and a problem-solving enthusiast. She was tasked with keeping the slides enjoyable to use. The idea she came up with was disabling some slides such that only circuits remained. A circuit is a set of two or more buildings b1,b2,...,bk
such that there is exactly one slide enabled from building bi to building bi+1, for each i, and exactly one slide enabled from building bk to building b1

. No other slides from or to any of those buildings should be enabled, to prevent misdirection. A state of the slides is then called fun if each building belongs to exactly one circuit.

Slides in Gooli's campus are numbered with integers between 1 and S
, inclusive. Melek created a slide controlling console that supports two operations: enable and disable. Both operations receive three parameters ℓ, r, and m and perform the operation on each slide x such that ℓ≤x≤r and x is a multiple of m

. An enable operation is valid only if all affected slides are in a disabled state right before the operation is performed. Similarly, a disable operation is valid only if all affected slides are in an enabled state right before the operation is performed.

The following picture illustrates a possible succession of states and operations. The layout has 3
buildings and 3

slides. Slides are light grey when disabled and dark grey when enabled.
Sample input 1

1. Initial state. All sides are disabled.
Sample input 1 with slides 1 and 2 enabled

2. After enable operation with ℓ=1, r=2, and m=1.
Sample input 1 with slides 1, 2 and 3 enabled

3. After enable operation with ℓ=3, r=3, and m=1.
Sample input 1 with slides 1 and 3 enabled

4. After disable operation with ℓ=1, r=3, and m=2.
Sample input 1 with slide 1 enabled

5. After disable operation with ℓ=1, r=3, and m=3.
Sample input 1 with slides 1 and 2 enabled

6. After enable operation with ℓ=1, r=2, and m=2.

Unfortunately, Sult, Melek's cat, found the console and started performing several valid enable and disable operations. After every console operation performed by Sult, Melek wants to know if the state of the slides can be made fun by enabling exactly one currently disabled slide. Note that Melek does not actually enable this slide.

In the picture above, we can see that after the first, third, and last operations, Melek could enable the only disabled slide and get to a fun state. After the second operation, there are two issues. One issue is that there are no currently disabled slides, so Melek cannot enable any. Additionally, the state is already fun, so even if there were additional disabled slides, enabling anything would result in a not fun state. After the fourth operation, there are two disabled slides, but enabling either would not yield a fun state.

All slides are initially disabled, then Sult performs its operations one at a time. After each of Sult's operations, determine which disabled slide, if any, Melek can enable to put the slides in a fun state.
