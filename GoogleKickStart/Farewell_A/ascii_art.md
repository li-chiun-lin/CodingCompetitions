# Problem

Cody-Jamal has heard about generative artificial intelligence producing art. He is excited about the new art opportunities, but also worried about human-created art being displaced. He thought a good compromise would be to use computers to create art that humans simply cannot.

Since Cody-Jamal is just beginning at computer-generated art, he started simple. He wants to create an immense string that shows the English alphabet in a doubly-repeated way, to represent its ubiquity and permanence.

Cody-Jamal wrote the following program:

```text
for i = 1 to 1e100:
  for letter = A to Z:
    print letter i times
```

Here 1e100 represents the integer $10^{100}$ . For example:

- When $i=1$, the program prints ABCD....XYZ.
- When $i=2$, the program prints AABBCC...XXYYZZ.
- When $i=3$, the program prints AAABBBCCC...XXXYYYZZZ.

Of course, Cody-Jamal's program takes a long time to finish. Can you help him know what the $N$-th printed letter will be without waiting for it to be printed?
