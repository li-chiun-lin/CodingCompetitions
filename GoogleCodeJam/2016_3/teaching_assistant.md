# Problem

You are taking a programming course which is graded using problem sets of different types. The course goes for a positive even number of days. You start the course with no problem sets. On each day of the course, you must do exactly one of the following:

    Request a "Coding" problem set.
    Request a "Jamming" problem set.
    Submit a problem set for grading. You must have at least one problem set to choose this option. If you have multiple problem sets, you must submit the one among those that was requested most recently, regardless of its type.

All problem sets are different. There is no requirement on how many sets of each type must be submitted. Once you submit a set, you no longer have that set. Any problem sets that you have not submitted before the end of the course get you no points.

The problem sets are requested from and submitted to an artificially-intelligent teaching assistant. Strangely, the assistant has different moods — on each day it is in the mood for either "Coding" or "Jamming".

    When you request a problem set:
        If the requested topic matches the assistant's mood, it assigns a problem set worth a maximum of 10 points.
        If the requested topic does not match its mood, it assigns a problem set worth a maximum of 5 points.
    When you submit a problem set:
        If the topic of the submitted set matches the assistant's mood that day, it gives you the maximum number of points for that set.
        If the topic of the submitted set does not match its mood that day, it gives you 5 points fewer than the maximum number of points for that set.

For example:

    f you request a "Coding" problem set on a day in which the assistant is in a "Coding" mood, and submit it on a day in which it is in a "Jamming" mood, you will earn 5 points: the problem set is worth a maximum of 10, but the assistant gives 5 points fewer than that.
    If you request a "Jamming" problem set on a day in which the assistant is in a "Coding" mood, and submit it on a day in which it is in a "Jamming" mood, you will earn 5 points: the set is worth a maximum of 5, and the assistant gives you the maximum number of points.

Thanks to some help from a senior colleague who understands the assistant very well, you know what sort of mood the assistant will be in on each day of the course. What is the maximum total score that you will be able to obtain?

## Input

The first line of the input gives the number of test cases, T; T test cases follow. Each test case consists of one line with a string S of C and/or J characters. The i-th character of S denotes the assistant's mood on the i-th day of the course. If it is C, it is in the mood for "Coding"; if it is J, it is in the mood for "Jamming".
