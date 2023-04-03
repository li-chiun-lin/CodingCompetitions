# Problem

In an unspecified country, Google has an office campus consisting of N office buildings in a line, numbered from 1 to N from left to right. When represented in meters, the height of each building is an integer between 1 to N, inclusive.

Andre and Sule are two Google employees working in this campus. On their lunch break, they wanted to see the skyline of the campus they are working in. Therefore, Andre went to the leftmost point of the campus (to the left of building 1), looking towards the rightmost point of the campus (to the right of building N). Similarly, Sule went to the rightmost point of the campus, looking towards the leftmost point of the campus.

To Andre, a building x is visible if and only if there is no building to the left of building x that is strictly higher than building x. Similarly, to Sule, a building x is visible if and only if there is no building to the right of building x that is strictly higher than building x.

Andre learned that there are A buildings that are visible to him, while Sule learned that there are B buildings that are visible to him. After they regrouped and exchanged information, they also learned that there are C buildings that are visible to both of them.

They are wondering about the height of each building. They are giving you the value of N, A, B, and C for your information. As their friend, you would like to construct a possible height for each building such that the information learned on the previous paragraph is correct, or indicate that there is no possible height construction that matches the information learned (thus at least one of them must have been mistaken).
