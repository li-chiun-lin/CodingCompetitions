# Problem

A research consortium has been looking for the best possible database for three years, but they are still having problems. The database stores values as records that hold 8-bit binary strings. Unfortunately, their implementation of the function to set the value of a record is flawed.

Each record of the database is an 8⁠-bit binary string. The bits of the binary string are indexed from 0 to 7 from left to right. When an instruction to set a specific record to a new value V is received, instead of setting the value to V the database does the following:

- Choose an integer r between 0 and 7, inclusive, and let W be like V but rotated by r to the right. That is, the ((i+r)mod8)⁠-th bit of W is the i⁠-th bit of V.
- Replace the current value X of the record with X XOR W. That is, the new value of the record has a 1 as its i⁠-th bit if and only if the i⁠-th bits of X and W are different.
- Finally, return the number of bits that are 1 in the new value to the user.

Luckily, it turns out that no matter what the initial value is or what rotation values the database chooses, it is always possible to reset the value of a record to have all bits be 0 with no more than 300 uses of this operation. Implement a program to interact with the database that does this.
