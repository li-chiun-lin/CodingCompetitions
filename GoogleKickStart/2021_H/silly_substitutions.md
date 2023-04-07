# Problem

You are given a string S of length N which consists of digits 0-9. You do the following operations on the string in the order given.

    Find all the substrings 01 and replace each of them with 2.
    Find all the substrings 12 and replace each of them with 3.
    Find all the substrings 23 and replace each of them with 4.
    Find all the substrings 34 and replace each of them with 5.
    .
    .
    .
    Find all the substrings 89 and replace each of them with 0.
    Find all the substrings 90 and replace each of them with 1.

You repeat this process in the same given order until none of the above operations change the string. For example, if S is 12 then we do not stop at operation 1 since it does not affect the string but perform operation 2 and change the string to 3. We can see that the string does not change further no matter how many times we repeat the above process.

Your task is to find how the final string will look like for the given S.
