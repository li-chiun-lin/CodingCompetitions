# Problem

It has been almost 15

years since Sphinny became the premiere programming contestant by mastering the art of scheduling contests. She has grown alongside Coding Competitions and graduated into a programming contest organizer, and her Programming Club League (PCL) is the most popular sport in her city.

There are N
bus stops in Sphinny's city, and M

express bus routes. Each route bidirectionally connects two different bus stops, called their endpoints. Because of the popularity of PCL, the driver of each bus routes cheers for exactly one club.

Sphinny has to pick up the contest materials for the j
-th contest at bus stop Pj and then the contest will be run in bus stop Cj. She can only use the given bus routes to travel between them. Formally, a path for Sphinny to go from Pj to Cj is a list of bus routes such that each two consecutive routes have a common endpoint. Also the first route in the path has Pj as an endpoint and the last one has Cj as an endpoint. Notice that the same bus route can be used multiple times in a path. If Sphinny's path from Pj to Cj contains one or more bus routes whose driver cheers for club c, then club c will join the contest. Otherwise, club c

will not join the contest. For organizational reasons, Sphinny needs the number of clubs in each contest to be an odd number.

Given the layout of Sphinny's city's bus routes and the contests' details, find out for how many contests there exists a path for Sphinny to take that can ensure an odd number of clubs joining it.
