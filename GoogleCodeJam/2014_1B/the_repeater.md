# Problem

Fegla and Omar like to play games every day. But now they are bored of all games, and they would like to play a new game. So they decided to invent their own game called "The Repeater".

They invented a 2 player game. Fegla writes down N strings. Omar's task is to make all the strings identical, if possible, using the minimum number of actions (possibly 0 actions) of the following two types:

- Select any character in any of the strings and repeat it (add another instance of this character exactly after it). For example, in a single move Omar can change "abc" to "abbc" (by repeating the character 'b').
- Select any two adjacent and identical characters in any of the strings, and delete one of them. For example, in a single move Omar can change "abbc" to "abc" (delete one of the 'b' characters), but can't convert it to "bbc".

The 2 actions are independent; it's not necessary that an action of the first type should be followed by an action of the second type (or vice versa).

Help Omar to win this game by writing a program to find if it is possible to make the given strings identical, and to find the minimum number of moves if it is possible.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a line containing an integer N which is the number of strings. Followed by N lines, each line contains a non-empty string (each string will consist of lower case English characters only, from 'a' to 'z').
