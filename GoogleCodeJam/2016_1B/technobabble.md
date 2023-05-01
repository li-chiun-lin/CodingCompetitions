# Problem

Every year, your professor posts a blank sign-up sheet for a prestigious scientific research conference on her door. If a student wants to give a lecture at the conference, they choose a two-word topic that is not already on the sheet and write it on the sheet. Once the deadline has passed, the professor has one of her grad students put the topics in a random order, to avoid biasing for or against students who signed up earlier. Then she presents the topics to you for review.

Since the snacks at the conference are excellent, some students try to fake their way into the conference. They choose the first word of some topic already on the sheet and the second word of some topic already on the sheet, and combine them (putting the first word first, and the second word second) to create a new "topic" (as long as it isn't already on the sheet). Since your professor is open-minded, sometimes this strategy actually works!

The fakers are completely unoriginal and can't come up with any new first or second words on their own; they must use existing ones from the sheet. Moreover, they won't try to use an existing first word as their own second word (unless the word also already exists on the sheet as a second word), or vice versa.

You have a list of all N of the submitted topics, in some arbitrary order; you don't know the order in which they were actually written on the sheet. What's the largest number of them that could have been faked?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with an integer N, followed by N lines, each of which represents a different topic and has two strings of uppercase English letters: the two words of the topic, in order.
