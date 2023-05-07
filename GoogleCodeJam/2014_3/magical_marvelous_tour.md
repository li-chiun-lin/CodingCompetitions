# Problem

The mysterious owner of an electronics factory has decided to do something very intriguing. She has hidden golden transistors inside seven electronic devices, and the people who buy those devices will be invited to a magical, marvelous tour of the factory.

Arnar and Solveig have received a tip that there is a golden transistor hidden inside one device in their local electronics store. First they pooled their money together and bought all the devices, then placed them in a straight line, numbering the devices 0 to N-1. Each device has some number of transistors in it. Then they agreed on a strategy to decide who gets the golden transistor:

First, Arnar will select a range [a, b] (inclusive) of the devices, where 0 ≤ a ≤ b < N. Next, Solveig will choose which one set of devices she wants to take:

-  If a > 0, she may take all the devices in the range [0, a-1].
-  If b < N-1, she may take all the devices in the range [b+1, N-1].
-  She may always choose to take all the devices in the range [a, b].

Once Solveig has chosen one of the sets of devices, Arnar takes all the devices she did not take.

For example, if there are 3 devices and Arnar selects the range [1, 1], Solveig may choose to take the range [0, 0], the range [1, 1] or the range [2, 2]. On the other hand, if Arnar selects the range [1, 2], then Solveig may choose to take the range [0, 0] or the range [1, 2].

Given how many transistors are in each device, and that Arnar and Solveig will each try to maximize their probability of getting the golden transistor (which is maximized by taking electronics with the maximum number of transistors), what is Arnar's probability of getting the golden transistor and thus winning the magical, marvelous tour?

## Input

The first line of the input gives the number of test cases, T. T lines follow. Each line contains five numbers: N, p, q, r and s. This indicates that there are N devices, and the ith device contains ((i * p + q) MOD r + s) transistors. Remember that the devices are numbered from 0 to N-1.
