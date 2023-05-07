# Problem

Your boss is sending you out on an international sales trip. What joy!

You have N cities (numbered from 1 to N) to visit and can get to them using a set of bidirectional flights that go between the cities.

All of the cities must be visited at least once. To do this you can book any number of tickets, subject to the following conditions:

- Each ticket consists of 2 flights, one from a specific city X to another specific city Y (this is called the outbound flight), and the other one from city Y to city X (this is called the return flight).
- You must use the outbound flight before the corresponding return flight (you can use other flights in between).
- At most 1 outbound flight going to each city, although there is no limit on the return flights (multiple return flights can go to the same city).
- You must use all flights which belong to the tickets you booked.
- You can otherwise visit the cities in any order you like.
- You can start your trip from any city you choose. You may not take an outbound flight to your starting city.

Now you could try to minimize the total distance travelled, but you did that last time, so that would be boring. Instead you noticed that each city has a distinct 5 digit ZIP (postal) code. When you visit a city for the first time (this includes the city which you start from) you write down the zip code and concatenate these into one large number (concatenate them in the order which you visited each city for the first time). What is the smallest number you can achieve?

## Input

The first line of the input gives the number of test cases, T. T test cases follow.

Each test case starts with a single line containing two integers: the number of cities N and the number of possible bidirectional flights M.

N lines then follow, with the i-th line containing the 5-digit zip code of the i-th city. No ZIP code will have leading zeros and all ZIP codes in each test case will be distinct.

M lines then follow, each containing two integers i and j (1 ≤ i < j ≤ N) indicating that a bidirectional flight exists between the i-th city and the j-th city. All flights will be distinct within each test case.

It is guaranteed that you can visit every city following the rules above.
