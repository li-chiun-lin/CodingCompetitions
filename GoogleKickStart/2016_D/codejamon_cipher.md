# Problem

The Codejamon monsters talk in enciphered messages. Here is how it works:

Each kind of monster has its own unique vocabulary: a list of $V$ different words consisting only of lowercase English letters. When a monster speaks, it first forms a sentence of words in its vocabulary; the same word may appear multiple times in a sentence. Then, it turns the sentence into an enciphered string, as follows:

- Randomly shuffle each word in the sentence.
- Remove all spaces.

Understanding the monsters can bring you huge advantages, so you are building a tool to do that. As the first step, you want to be able to take an enciphered string and determine how many possible original sentences could have generated that enciphered string. For example, if a monster's vocabulary is ["this", "is", "a", "monster", "retsnom"], and it speaks the enciphered string "ishtsiarestmon", there are four possible original sentences:

    "is this a monster"
    "is this a retsnom"
    "this is a monster"
    "this is a retsnom" 

You have $S$ enciphered strings from the same monster. For each one, can you figure out the number of possible original sentences?

IMPORTANT: Since the output can be a really big number, we only ask you to output the remainder of dividing the result by the prime $10^9 + 7$.

## Input

The first line of the input gives the number of test cases, $T$; $T$ test cases follow. Each test case consists of one line with two integers $V$ and $S$, the size of the monster's vocabulary and the number of enciphered strings. Then, $V$ lines follow; each contains a single string of lowercase English letters, representing a word in the monster's vocabulary. Finally, $S$ lines follow. Each contains a string consisting only of lowercase English letters, representing an enciphered sentence. It is guaranteed that all enciphered sentences are valid; that is, each one has at least one possible original sentence.
