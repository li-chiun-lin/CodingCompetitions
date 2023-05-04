# Problem

The city you live in lies on the banks of the spectacular Binary river. The water in the river comes from some tributary streams that start way up in the mountains. Unfortunately for your city, there are farmers who live in the mountains who need to use up some of the water in the tributary streams for their crops.

Long ago, the city struck a deal with the farmers to allow them to farm while keeping the river flowing: each farmer was allowed to use the water for her crops exactly half the time. The farmers would alternately divert water for their crops for a day and leave the water to run down the river for a day. The result was a disaster! Because the farmers' water usage was synchronized, with everyone either diverting or not diverting water at the same time, the river would run dry every other day and then flood the city the next.

To solve this problem, the city went back to the farmers and asked each one to choose some integer power of 2 (this is the Binary River after all) between 1 and D, inclusive, and toggle her water usage (either start or stop collecting water) every time that number of days has elapsed. (Not every power of 2 between 1 and D was necessarily represented, and multiple farmers may have selected the same integer. 1 counts as a power of 2.) The idea was that this would make the water usage more even overall, and so the droughts and flooding would become less frequent.

This all happened a long time ago, and you and the other citizens have recently become suspicious that the farmers aren't sticking to the agreement. (You're not even sure how many farmers there are right now!) However, the only data you have is N days' history of the amount of water flowing through the city. Can you tell if the farmers are being honest?

Each tributary stream has flow 1 and the flow through the main river is the sum of all the tributary streams that are not being diverted for farming. (Before looking at the records, you don't know how many tributary streams there are.) At most 1 farmer will divert the water from each tributary stream, but there may be some tributary streams from which no farmers ever divert water. Note that the farmers started their water diversion cycles long before the city started recording the water flow, but there is no guarantee that they all started on the same day.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a line containing two space-separated integers N and D. The next line contains N space-separated integers, with the ith integer di giving the river flow on the ith day.
