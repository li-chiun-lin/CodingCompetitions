# Problem

Earlier this year, the Code Jam team planted an orchard with the help of an industrious gopher. It must have told other gophers, because we now have somewhere between 2 and 25 gophers living in the orchard. But it is hard to be sure exactly how many there are, because these gophers only emerge from their underground tunnels to eat at night, and we are too tired after a hard day of tree-pruning to stay up and watch for them. However, we do know how to make one "gopher snack" per day, which we can leave out each night to see whether it gets eaten. We think we can use this information to determine the number of gophers.

Here is what we know about the way that gophers eat. The N gophers meet during one day in a council to determine an order in which they will emerge over the following N nights, one at a time. Then, during each of the i-th of the next N nights, the i-th gopher in the order emerges and looks for a gopher snack. Each gopher has its own particular taste level (which never changes), and it will eat a snack if and only if the snack's quality level is at least as high as that gopher's taste level. During the day after the N-th gopher in the order has emerged, the gophers choose a new order and the process continues. Notice that even if a gopher chooses not to eat the snack that it finds, it still does not emerge again until it comes up in the next order chosen by the council.

We must make exactly one new gopher snack each day; even if a snack is not eaten, it spoils and cannot be reused the next night. Each morning, we learn whether or not the previous night's snack was taken.

Today, we know that the gophers are meeting in their council to determine their next order, so tonight will mark the start of that order. We are willing to devote some serious time to this investigation — as many as 105 nights. Using S or fewer snacks, can you help us figure out how many gophers there are?
Input and output

This problem is interactive, which means that the concepts of input and output are different than in standard Code Jam problems. You will interact with a separate process that both provides you with information and evaluates your responses. All information comes into your program via standard input; anything that you need to communicate should be sent via standard output. Remember that many programming languages buffer the output by default, so make sure your output actually goes out (for instance, by flushing the buffer) before blocking to wait for a response. See the FAQ for an explanation of what it means to flush the buffer. Anything your program sends through standard error is ignored, but it might consume some memory and be counted against your memory limit, so do not overflow it. To help you debug, a local testing tool script (in Python) is provided at the very end of the problem statement. In addition, sample solutions to a previous Code Jam interactive problem (in all of our supported languages) are provided in the analysis for Number Guessing.

Initially, your program should read a single line containing a single integer T indicating the number of test cases. Then, you need to process T test cases. For each test case, your program will first read one line containing one integer S: the maximum number of snacks you can use. Then, your program will process up to S + 1 exchanges with our judge, in which the last exchange must be a guess at the answer.

For the i-th exchange, your program needs to use standard output to send a single line containing an integer Qi.

- If Qi is in the inclusive range [1, 106], it represents that you will leave out a gopher snack with quality level Qi. In response, the judge will print a single line with a single integer: 1 if the gopher ate the snack, or 0 if it did not. This line will be printed to your input stream, as described above, and your program must read it through standard input. Then, you can start another exchange.
- If Qi is in the inclusive range [-25, -2], it represents that your answer to the test case is that there are -Qi gophers. If your answer is correct, the judge will proceed to the next test case, if there is one.

The judge will print a single line with the integer -1, and then stop sending output to your input stream, if any of the following happen:

1. Your program sends a malformed or out-of-bounds value (e.g., 1000001, -1, or GO_IS_THE_BEST_LANGUAGE), or too many values (e.g., 1 2).
1. Your program sends a value not in the inclusive range [-25, -2] after having already sent S values for the current test case.
1. Your program sends a value in the inclusive range [-25, -2] that is not a correct answer. Note that this means that you only get one chance to answer a test case correctly.

If your program continues to wait for the judge after receiving -1, your program will time out, resulting in a Time Limit Exceeded error. Notice that it is your responsibility to have your program exit in time to receive the appropriate verdict (Wrong Answer, Runtime Error, etc.) instead of a Time Limit Exceeded error. As usual, if the total time or memory is exceeded, or your program gets a runtime error, you will receive the appropriate verdict.

You should not send additional information to the judge after solving all test cases. In other words, if your program keeps printing to standard output after sending the answer to the last test case, you will get a Wrong Answer judgment.
