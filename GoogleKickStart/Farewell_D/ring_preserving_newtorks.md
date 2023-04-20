# Problem

A research consortium is building a new datacenter. In the datacenter, a set of computers is set up to work together and communicate via a network. The network works only with direct bidirectional links between computers. After the success of their name-preserving networks, they decided to do other designs with guaranteed properties.

The consortium has asked you to submit a design of a ring-preserving network. We define a ring of a network as an ordering of all the computers of the network such that any two computers that are consecutive in the ordering have a direct link between them, and the same is true for the first and last computers in the ordering.

A ring-preserving network is a network design that can efficiently find a ring of itself even after losing the original computer identifications. You need to submit several network designs that are ring-preserving.

To evaluate your network designs, the research consortium has set up an automated program. You will be asked for network designs specifying the exact number of computers C and the exact number of bidirectional links L it must contain. You must assign each computer a unique ID between 1 and C and list the L links using the IDs to refer to the links' endpoints. The evaluating program will receive that design and send back a copy of the network design with the following changes:

- the unique IDs have been permuted uniformly at random (that is, each ID is now equally likely to be on any of the computers),
- every link is listed with the smallest ID first (using the new IDs), and
- the set of links is listed in increasing order of the first endpoint (using the new IDs), breaking ties by smallest second endpoint (i.e., lexicographical order).

You need to be able to find a ring of the modified network. It does not need to be the original ring.
