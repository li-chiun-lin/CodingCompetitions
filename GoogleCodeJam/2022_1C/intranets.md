# Problem

Apricot Rules LLC is developing a new simplified networking protocol and wants to show off their routing algorithm. In their design, a network consists of M machines numbered from 1 to M, and each pair of machines is connected by a direct link. Each of the links is given a unique integer priority value between 1 and (M×(M−1)/2) and each machine routes traffic according to those priorities.

Unfortunately, the routing algorithm is too aggressive and will route all traffic from a machine through the highest priority link connected to it. This may make some groups of machines isolated from others.

Formally, we say that a machine m uses a link ℓ if (and only if) ℓ is the highest priority link connected to m. We also say that a link is active if it is used by at least one of the two machines it connects. Given the link priorities, the original network becomes partitioned into disjoint intranets. Two machines belong to the same intranet if and only if there is some path between them using only active links.

Example with 2 intranets. Active edges are (1, 2) and (3, 4) with weights 6 and 5 respectively. Example with 1 intranet. Active edges are (1, 2), (2, 3), and (3, 4) with weights 6, 5, and 4 respectively.

For example, as seen in the left image above, only the links with priorities 6 and 5 are active. This creates two disjoint intranets. However, in the example on the right, three links are active, which results in one intranet consisting of all 4 machines.

As part of the quality assurance team at Apricot Rules LLC, you are investigating the extent of the problem. You are interested in knowing the probability of there being exactly K intranets if the priorities are assigned uniformly at random from among the $(M×(M−1)/2)!$ ways of doing so.
