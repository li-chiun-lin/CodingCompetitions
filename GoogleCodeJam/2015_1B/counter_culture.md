# Problem

In the Counting Poetry Slam, a performer takes the microphone, chooses a number N, and counts aloud from 1 to N. That is, she starts by saying 1, and then repeatedly says the number that is 1 greater than the previous number she said, stopping after she has said N.

It's your turn to perform, but you find this process tedious, and you want to add a twist to speed it up: sometimes, instead of adding 1 to the previous number, you might reverse the digits of the number (removing any leading zeroes that this creates). For example, after saying "16", you could next say either "17" or "61"; after saying "2300", you could next say either "2301" or "32". You may reverse as many times as you want (or not at all) within a performance.

The first number you say must be 1; what is the fewest number of numbers you will need to say in order to reach the number N? 1 and N count toward this total. If you say the same number multiple times, each of those times counts separately.

## Input

The first line of the input gives the number of test cases, T. T lines follow. Each has one integer N, the number you must reach.
