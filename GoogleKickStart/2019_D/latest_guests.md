# Problem

The city of Circleburg has a large circular street with N consulates along it. The consulates are numbered 1, 2, ..., N in clockwise order.

Today G guests, numbered 1, 2, ..., G will drive along the circular street for M minutes. Each guest is either a clockwise guest (denoted by the character C) or an anti-clockwise guest (denoted by the character A).

The i-th guest starts at the consulate numbered Hi and at the end of each minute will drive to an adjacent consulate. The i-th guest starts at the j-th consulate. If that guest is:

- a clockwise guest, they will drive to the (j+1)-th consulate (unless they are at the N-th consulate, then they will drive to the 1st consulate).
- an anti-clockwise guest, they will drive to the (j-1)-th consulate (unless they are at the 1st consulate, then they will drive to the N-th consulate).

Each consulate will only remember the guest that visited them last. If there are multiple guests who visited last, then the consulate will remember all of those guests.

For each guest, determine how many consulates will remember them.
