# Problem

It's the year 1860, and the Pony Express is the fastest mail delivery system joining the East and West coasts of the United States. This system serves N different cities. In each city, there is one horse (as in the expression "one-horse town"); each horse travels at a certain constant speed and has a maximum total distance it can travel before it becomes too tired to continue.

The Pony Express rider starts off on the starting city's horse. Every time the rider reaches a city, they may continue to use their current horse or switch to that city's horse; switching is instantaneous. Horses never get a chance to rest, so whenever part of a horse's maximum total distance is "used up", it is used up forever! When the rider reaches the destination city, the mail is delivered.

The routes between cities were established via complicated negotiations between company owners, lawmakers, union delegates, and cousin Pete. That means that the distances between cities do not necessarily follow common sense: for instance, they do not necessarily comply with the triangle inequality, and the distance from city A to city B might be different from the distance from city B to city A!

You are a time traveling entrepreneur, and you have brought a fast computer from the future. A single computer is not enough for you to set up an e-mail service and make the Pony Express obsolete, but you can use it to make optimal routing plans for the Pony Express. Given all data about routes between cities and the horses in each city, and a list of pairs of starting and ending cities, can you quickly calculate the minimum time necessary for each delivery? (You should treat all of these deliveries as independent; using cities/horses on one route does not make them unavailable on other routes.)

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case is described as follows:

- One line with two integers: N, the number of cities with horses, and Q, the number of pairs of stops we are interested in. Cities are numbered from 1 to N.
- N lines, each containing two integers Ei, the maximum total distance, in kilometers, the horse in the i-th city can go and Si, the constant speed, in kilometers per hour, at which the horse travels.
- N lines, each containing N integers. The j-th integer on the i-th of these lines, Dij, is -1 if there is no direct route from the i-th to the j-th city, and the length of that route in kilometers otherwise.
- Q lines containing two integers Uk and Vk, the starting and destination point, respectively, of the k-th pair of cities we want to investigate.
