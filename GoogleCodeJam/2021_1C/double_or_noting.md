# Problem

You are given a starting non-negative integer S and an ending non-negative integer E. Both S and E are given by their binary representation (that is, they are given written in base 2). Your goal is to transform S into E. The following two operations are available to you:

- Double your current value.
- Take the bitwise NOT of your current value. The binary representation of your current value is taken without unnecessary leading zeroes, and any unnecessary leading zeroes produced by the operation are dropped. (The only necessary leading zero is the one in the representation of 0).

For example, by using the double operation, 6 becomes 12, 0 becomes 0, and 10 becomes 20. By using the NOT operation, 0 becomes 1, 1 becomes 0, 3=11_2 becomes 0, 14=1110_2 becomes 1, 10=10102 becomes 5=101_2, and 5=101_2 becomes 2=10_2. (X_2 means the integer whose binary representation is X).

You can use these operations as many times as you want in any order. For example, you can transform S=10001_2 to E=111_2 using the NOT operation first, then using the double operation twice, and then another NOT operation:
10001_2⟹NOT1110_2⟹×211100_2⟹×2111000_2⟹NOT111_2.

Determine the smallest number of operations needed to complete the transformation, or say it is impossible to do so.
