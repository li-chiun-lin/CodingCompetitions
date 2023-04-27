# Problem

To finally settle the age-old question of which programming language is the best, you are asking a total of N people to tell you their favorite language. This is an open-ended question: each person is free to name any language, and there are infinitely many languages in the world.

Some people have already responded, and you have gathered this information as a list of counts. For example, 1 2 means that you have asked 3 people so far, and one picked a particular language, and the other two picked some other language.

You plan to publish the results in a table listing each language and the percentage of people who picked it. You will round each percentage to the nearest integer, rounding up any percentage with a decimal part equal to or greater than 0.5. So, for example, 12.5% would round up to 13%, 99.5% would round up to 100%, and 12.4999% would round down to 12%.

In surveys like this, sometimes the rounded percentages do not add up to exactly 100. After you are done surveying the remaining people, what is the largest value that the rounded percentages could possibly add up to?

## Input

The first line of the input gives the number of test cases, T. T test cases follow; each consists of two lines. The first line consists of two integers N and L: the total number of people in the survey, and the total number of different languages represented among the people who have already responded. The second line consists of L integers Ci; the i-th of these is the number of people who said that the i-th of the represented languages was their favorite.
