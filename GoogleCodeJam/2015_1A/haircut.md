# Problem

You are waiting in a long line to get a haircut at a trendy barber shop. The shop has B barbers on duty, and they are numbered 1 through B. It always takes the kth barber exactly Mk minutes to cut a customer's hair, and a barber can only cut one customer's hair at a time. Once a barber finishes cutting hair, he is immediately free to help another customer.

While the shop is open, the customer at the head of the queue always goes to the lowest-numbered barber who is available. When no barber is available, that customer waits until at least one becomes available.

You are the Nth person in line, and the shop has just opened. Which barber will cut your hair?

## Input

The first line of the input gives the number of test cases, T. T test cases follow; each consists of two lines. The first contains two space-separated integers B and N -- the number of barbers and your place in line. The customer at the head of the line is number 1, the next one is number 2, and so on. The second line contains $M_1, M_2, ..., M_B$.
