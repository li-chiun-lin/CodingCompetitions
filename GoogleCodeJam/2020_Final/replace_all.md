# Problem

Banana Rocks Inc is coming up with a revolutionary technology to perform the common edit operation "replace all". Their implementation replaces every occurrence of a character within a given text with another character. (If the character does not appear in the text, then the operation occurs but has no effect.)

For example, if the starting text is CODEJAMWORLDFINALS and an operation is performed to replace A with O, the new text would be CODEJOMWORLDFINOLS. If another operation is performed on that result to replace O with Y, the final text would be CYDEJYMWYRLDFINYLS.

Unfortunately, the implementation is incomplete, so it can only perform replacements from a specific list of N pairs of characters. Also, even if a replacement of a specific character c1 with another character c2 is implemented, the reverse replacement of c2 with c1 may or may not be implemented.

You want to try all the implemented replacements. You are given some initial string S to use as the initial text. You can perform any number of replacements in sequential order: the first replacement is performed on S, and the (i+1)-th replacement is performed on the result of performing the i-th replacement. The only requirement is that each implemented replacement is performed at least once during this process. There is no upper limit on how many times you may perform each replacement.

The allowed characters are decimal digits and uppercase and lowercase English alphabet letters. In this problem, uppercase and lowercase versions of the same letter are treated as distinct characters.

What is the maximum number of unique characters that can appear in a text that is the result of the last replacement performed?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of two lines. The first line contains a string S and an integer N: the initial text and the number of implemented replacements. The second line contains N two-character strings R1, R2, ..., RN, representing the implemented replacements. Ai and Bi are the first and second characters of Ri, respectively. The i-th implemented replacement corresponds to replacing all occurrences of Ai with Bi.

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum number of unique characters that can appear in a text that is the result of performing all implemented replacements to S one or more times each, in some order.
