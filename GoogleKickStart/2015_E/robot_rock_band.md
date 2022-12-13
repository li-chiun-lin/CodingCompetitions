# Problem

You're the manager of Xorbitant, the world's first robot rock band. There will be four positions in the band, and there are $N$ robots auditioning for each position. (No robot is auditioning for more than one position.) Every robot has a number, and multiple robots might have the same number, just as two people can have the same name.

You know from market research that your robot audiences won't care how well the robot band members make music, how handsome they are, or what scandalous things the tabloids say about them. Instead, the audience will be checking to see whether the four members' numbers, when bitwise XORed together, equal a certain trendy number $K$.

How many different sets of four robots (one for each position) is it possible to choose so that the band will have this property? More specifically, given four lists $A, B, C, D$ containing $N$ numbers each, how many ways are there to choose one number $a$ from list $A$, one number $b$ from list $B$, and so on, such that $a \oplus b \oplus c \oplus d = K$? (Here $\oplus$ represents the bitwise XOR operation.)
