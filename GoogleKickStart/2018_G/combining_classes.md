# Problem

Supervin is teaching N classes, which are numbered from 1 to N. After giving his most recent exam, he noticed that in each of his classes, the test scores of his students form a sequence of consecutive integers. Therefore, Supervin can summarize the scores for the i-th class as two integers Li and Ri. This means that the i-th class has Ri - Li + 1 students, and for each x (Li ≤ x ≤ Ri), there is exactly one student with score x.

Supervin would like to combine the scores from the students from all of his classes and sort the scores in non-increasing order. He has Q questions (numbered from 1 to Q) about this list; for the i-th question, he wants to know what the Ki-th highest score is. (If Ki is greater than the number of students, then the answer for the i-th question is 0.)

Can you help Supervin answer all of his questions? Since there may be many answers, instead of outputting all of them, output proof that you have answered them: the sum of (Si × i) for all 1 ≤ i ≤ Q, where Si is the answer to the i-th question.
