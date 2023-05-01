# Problem

You have just built a brand new factory. Your factory has N different machines, and each machine needs to be operated by exactly one worker for the factory to function well.

You have also hired N workers to operate those machines. Since you were in a hurry when you hired them, you did not check whether they actually know how to operate your machines. Now you have finally asked them, and so you have the information on whether the i-th worker can operate the j-th machine, for each i and j.

In a typical working day, the workers will arrive at the factory in a random order, which can be different each day. As each worker arrives, they will find all machines that they know how to operate and that do not already have an operator. They will choose one of those at random and operate it for the whole working day. If all machines they know how to operate already have an operator, they will not work that day. Your goal is to make sure that all machines are being operated each working day, regardless of what order the workers arrive in and which machines they choose.

For example, suppose there are two workers A and B, and two machines 1 and 2. Suppose that A knows how to operate 1 and 2, and B knows how to operate 1 but not 2. If worker B arrives first, he will pick machine 1, then when worker A arrives she will have to choose 2, and the factory will work well. However, if worker A arrives first, it might happen that she chooses to operate 1 on that day, and then when worker B arrives he does not have anything to do, leaving machine 2 without an operator, and causing your factory to waste a whole day!

As another example, suppose there are two workers A and B, and two machines 1 and 2, and that A knows how to operate 1 but not 2, and B does not know how to operate anything. Then, regardless of the order in which the workers arrive, the factory will not be able to function well.

Before you open your factory, in order to guarantee that the factory will constantly function well, you can teach your workers how to operate machines. It costs one dollar to give a single worker a lesson on how to operate a single machine. Each lesson involves only one worker and only one machine, but you can teach any number of lessons to any number of workers, and the same worker can receive multiple lessons. You cannot make a worker forget how to operate a machine if they already know how to operate it.

For example, both examples above can be fixed by teaching worker B to operate machine 2. In that case each machine is guaranteed to have an operator every day, regardless of which order the workers arrive in and which machines they choose to operate when they have more than one possibility.

What is the minimum amount of dollars you need to spend on training workers to make sure the factory functions well every day?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with one line with an integer N, the number of workers (and machines). This line is followed by N lines with a string of N characters each. The j-th character on the i-th of those lines is 1 if the i-th worker knows how to operate the j-th machine, and 0 otherwise.
