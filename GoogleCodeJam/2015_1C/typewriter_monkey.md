# Problem

Your publishing house has decided to use monkeys randomly typing at keyboards to write great works of literature. You are the supervisor for one monkey with a keyboard containing K keys, each of which is labeled with an uppercase English letter. (There may be multiple keys displaying the same letter.) The monkey will start with an empty string and repeat the following S times: choose a key from its keyboard uniformly at random and press it, adding a copy of that key's letter to the right end of the string. The final resulting string will have length S.

You have a target word of length L that you are hoping the monkey will type. (The target word will not necessarily be a real English word.) This target word may even appear multiple times in what the monkey types. (Overlapping instances count too -- for example, if "ABA" is the target word and the monkey types "ABABA", that contains two instances of the target.)

You plan to pay the monkey one banana for each instance of the target word that it types. When you go to inspect the monkey's work, you will bring along the minimum number of bananas that you need to ensure that you will always have enough bananas to pay the monkey, no matter what it has typed. Then, you will pay the monkey one banana for each instance of the target word that it actually typed. You will keep the remaining bananas that you brought with you.

What is the expected number of bananas that you will get to keep?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each consists of three lines. The first contains three space-separated positive integers: K, L, and S. The second contains a string of K uppercase English letters representing the monkey's keyboard. The third contains a string of L uppercase English letters representing the target word.
