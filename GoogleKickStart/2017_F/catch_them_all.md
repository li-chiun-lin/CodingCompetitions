# Problem

After the release of Codejamon Go, you, like many of your friends, took to the streets of your city to catch as many of the furry little creatures as you could. The objective of the game is to catch Codejamon that appear around your city by going to their locations. You are wondering how long it would take for you to catch them all!

Your city consists of $N$ locations numbered from $1$ to $N$. You start at location $1$. There are $M$ bidirectional roads (numbered from $1$ to $M$). The $i$-th road connects a pair of distinct locations $(U_i, V_i)$, and it takes $D_i$ minutes to travel on it in either direction. It is guaranteed that it is possible to reach any other location from location $1$ by travelling on one or more roads.

At time $0$, a Codejamon will appear at a uniformly random location other than your current location (which is location $1$ at time $0$). Uniformly random means that the probability that it will appear at each of the $N - 1$ locations other than your current location is exactly $1 / (N - 1)$. The instant that a Codejamon appears, you can immediately start moving towards it. When you arrive at a location containing a Codejamon, you instantly catch it, and then a new Codejamon will instantly appear at a uniformly random location other than your current location, and so on. Notice that only one Codejamon is present at any given time, and you must catch the existing one before the next will appear.

Given the layout of your city, calculate the expected time to catch $P$ Codejamon, assuming that you always take the fastest possible route between any two locations.
