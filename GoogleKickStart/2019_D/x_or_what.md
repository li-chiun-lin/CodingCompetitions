# Problem

Steven has an array of N non-negative integers. The i-th integer (indexed starting from 0) in the array is Ai.

Steven really likes subintervals of A that are xor-even. Formally, a subinterval of A is a pair of indices (L, R), denoting the elements AL, AL+1, ..., AR-1, AR. The xor-sum of this subinterval is AL xor AL+1 xor ... xor AR-1 xor AR, where xor is the bitwise exclusive or.

A subinterval is xor-even if its xor-sum has an even number of set bits in its binary representation.

Steven would like to make Q modifications to the array. The i-th modification changes the Pi-th (indexed from 0) element to Vi. Steven would like to know, what is the size of the xor-even subinterval of A with the most elements after each modification?
