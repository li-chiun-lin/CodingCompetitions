# Problem

There are N events, numbered 1 through N. The probability of occurrence of each event depends upon the occurrence of exactly one other event called the parent event, except event 1, which is an independent event. In other words, for each event from 2 to N, 3 values are given: Pi denoting the parent event of event i, Ai denoting the probability of occurrence of event i if its parent event occurs, and Bi denoting the probability of occurrence of event i if its parent event does not occur. For event 1, its probability of occurrence K is given. There are Q queries that we want to answer. Each query consists of 2 distinct events, uj and vj, and you need to find the probability that both events uj and vj have occurred.