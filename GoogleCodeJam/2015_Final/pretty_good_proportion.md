# Problem

I have a sequence of N binary digits. I am looking for a substring with just the right proportion of 0s and 1s, but it may not exist, so I will settle for something that's just pretty good.

Can you find a substring where the fraction of 1s is as close as possible to the given fraction F? Output the earliest possible index at which such a substring starts.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each one starts with a line containing N and F. F will be a decimal fraction between 0 and 1 inclusive, with exactly 6 digits after the decimal point. The next line contains N digits, each being either 0 or 1.
