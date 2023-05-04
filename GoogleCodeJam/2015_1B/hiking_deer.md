# Problem

Herbert Hooves the deer is going for a hike: one clockwise loop around his favorite circular trail, starting at degree zero. Herbert has perfect control over his speed, which can be any nonnegative value (not necessarily an integer) at any time -- he can change his speed instantaneously whenever he wants. When Herbert reaches his starting point again, the hike is over.

The trail is also used by human hikers, who also walk clockwise around the trail. Each hiker has a starting point and moves at her own constant speed. Humans continue to walk around and around the trail forever.

Herbert is a skittish deer who is afraid of people. He does not like to have encounters with hikers. An encounter occurs whenever Herbert and a hiker are in exactly the same place at the same time. You should consider Herbert and the hikers to be points on the circumference of a circle.

Herbert can have multiple separate encounters with the same hiker.

If more than one hiker is encountered at the same instant, all of them count as separate encounters.

Any encounter at the exact instant that Herbert finishes his hike still counts as an encounter.

If Herbert were to have an encounter with a hiker and then change his speed to exactly match that hiker's speed and follow along, he would have infinitely many encounters! Of course, he must never do this.

Encounters do not change the hikers' behavior, and nothing happens when hikers encounter each other.

Herbert knows the starting position and speed of each hiker. What is the minimum number of encounters with hikers that he can possibly have?

## Solving this problem

Usually, Google Code Jam problems have 1 Small input and 1 Large input. This problem has 2 Small inputs and 1 Large input. You must solve the first Small input before you can attempt the second Small input; as usual, you will be able to retry the Small inputs (with a time penalty). Once you have solved both Small inputs, you will be able to download the Large input; as usual, you will get only one chance at the Large input.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with an integer N, and is followed by N lines, each of which represents a group of hikers starting at the same position on the trail. The ith of these lines has three space-separated integers: a starting position Di (representing Di/360ths of the way around the trail from the deer's starting point), the number Hi of hikers in the group, and Mi, the amount of time (in minutes) it takes for the fastest hiker in that group to make each complete revolution around the circle. The other hikers in that group each complete a revolution in Mi+1, Mi+2, ..., Mi+Hi-1 minutes. For example, the line

180 3 4

would mean that three hikers begin halfway around the trail from the deer's starting point, and that they take 4, 5, and 6 minutes, respectively, to complete each full revolution around the trail.

Herbert always starts at position 0 (0/360ths of the way around the circle), and no group of hikers does. Multiple groups of hikers may begin in the same place, but no two hikers will both begin in the same place and have the same speed.
