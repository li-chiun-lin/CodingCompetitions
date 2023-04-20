# Problem

We have a string S
consisting of decimal digits. A division of S is created by dividing S into contiguous substrings. For example, if S is 0145217, two possible divisions are 014 5 21 7 and 0 14 52 17. Each digit must be used in exactly one substring, and each substring must be non-empty. If S has L digits, then there are exactly 2L−1

possible divisions of it.

Given a positive integer D
, a division of S is called divisible by D if for every pair of consecutive substrings, at least one of the integers they represent in base 10 is divisible by D. If D=7, the first example division above is divisible because 014, 21, and 7 represent integers divisible by 7. The second example division is not divisible because 52 and 17 are consecutive substrings and neither represents an integer divisible by 7. Dividing 0145217 as 0145217 is divisible by any D

because there are no pairs of consecutive substrings.

Given S
and D, count how many divisions of S exist that are divisible by D. Since the output can be a really big number, we only ask you to output the remainder of dividing the result by the prime 109+7 (1000000007).
