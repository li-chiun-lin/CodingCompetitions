# Problem

The story, all names, characters, and incidents portrayed in this problem statement are fictitious. No identification with actual persons is intended or should be inferred.

It is 1935 and a meeting between two Nobel prize winners is producing astonishing results. Schrödinger, a famous physicist, invited Pavlov, a famous physiologist, to see his experiments with cats in boxes. Pavlov brought his dog with him to keep up with his own research, and the combination proved interesting, to say the least.

Schrödinger had a row of N

boxes. Some boxes definitely contain a cat, some boxes definitely do not contain a cat, and some boxes may or may not contain a cat. Each box is only big enough to hold a single cat. Each box is also equipped with a special quantum tunnel, that allows the cat in the box to move to some other specific box if the destination was empty. The tunnels work in a single direction.

Cats are usually mellow and quiet and do not use the tunnels unless they become startled. When a third unannounced guest rings the bell, Pavlov's dog gets excited immediately and starts running and barking. The dog starts at box 1
and runs towards box N

. As the dog runs, it passes right next to each box, one at a time. When it passes next to a box that contains a cat, the cat in that box becomes startled. The startled cat checks the available tunnel and, if the destination box is empty, uses it to escape. If the destination box is occupied, the cat stays in its current box. The same cat can be startled more than once if they move to a box the dog will get to afterwards, and will proceed in the same way every time it is startled (using only the newly available tunnel each subsequent time).

Illustration of Sample Case #1 with a dog shown walking from left to right.

After Pavlov's dog finally stops right next to the last box, Pavlov asks Schrödinger whether there is a cat in that last box. Schrödinger, true to his fame, replies that he does not know. Pavlov notices that the answer may depend on whether or not there were cats in the unknown boxes. Moreover, he also notices that because there are k
unknown boxes, there are 2k possible initial configurations, one for each combination of statuses of the unknown boxes. Pavlov tells Schrödinger that they should try to calculate how many of the 2k initial configurations would result in having a cat in the last box. You are asked to recreate that calculation. Since the output can be a really big number, we only ask you to output the remainder of dividing the result by the prime 109+7 (1000000007

).

Neither cats, nor dogs, nor Nobel prize winners were harmed in the making of this problem statement.
