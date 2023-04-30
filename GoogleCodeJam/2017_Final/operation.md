# Problem

Here at Code Jam, we love to play a game called "Operation". (No, it has nothing to do with surgery; why would you think that?) The game is played with cards, each card is labeled with a basic arithmetic operation (addition, subtraction, multiplication or division) Oi and an integer right operand Vi for that operation. For example, a card might say + 0, or - -2, or / -4 — note that operands can be negative or zero, although a card with a division operation will never have 0 as an operand.

In each round of the game, a starting integer value S is chosen, and a set of C cards is laid out. The player must choose an order for the cards, using each card exactly once. After that, the operations are applied, in order, to the starting value S, and a final result is obtained.

Although all of the operands on the cards are integers, the operations are executed on rational numbers. For instance, suppose that the initial value is 5, and the cards are + 1, - 2, * 3, and / -2. If we put them in the order given above, the final result is (5 + 1 - 2) * 3 / (-2) = -6. Notice that the operations are performed in the order given by the cards, disregarding any operator precedence. On the other hand, if we choose the order - 2, / -2, + 1, * 3, the result is ((5 - 2) / (-2) + 1) * 3 = -3 / 2. That example turns out to be the maximum possible value for this set of cards.

Given a set of cards, can you figure out the maximum possible final value that can be obtained? Please give the result as an irreducible fraction with a positive denominator.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case begins with one line with two integers S and C: the starting value for the game, and the number of cards. Then, C lines follow. The i-th of these lines represents one card, and contains one character Oi representing the operation (which is either +, -, *, or /) and one integer Vi representing the operand.
