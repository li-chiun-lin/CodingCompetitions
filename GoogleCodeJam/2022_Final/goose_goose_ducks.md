# Problem

The first international Geese conference just wrapped up, and even though it should have been a happy occasion, it was bittersweet. The organizers found a paper with detailed plans of a duck infiltration. Now, they are trying to identify the infiltrating group from among the attendees.

The document that they found contained a list of M triples of integers (Xi,Yi,Ci) meaning the ducks would meet exactly Ci seconds after the start of the conference at point (Xi,Yi), which is Xi meters east and Yi meters north of the center of the conference floor. Each goose may or may not have been at those specific points at those specific times, but every duck certainly was.

Both ducks and geese walk at a maximum speed of one meter per second, which means an attendee that is at point (x,y) at time t can reach any point of the form (x+Δx,y+Δy) by time t+Δt as long as Δx2+Δy2≤Δt2. Each attendee's position at time 0 can be any point, independently of the other attendees.

A picture of two geese and one duck.

After the discovery, the group held a questioning session to try to identify the ducks. During that session, attendees issued a series of statements, one at a time. The j-th of those, in the order they were issued, was made by attendee Aj, claiming that both they and attendee Bj were at point (Uj,Vj) exactly Dj seconds after the start of the conference. Points in statements may or may not be points where duck meetings happened.

Statements from geese are always true, but ducks may lie. Moreover, ducks know which attendees are ducks and which are geese. To avoid getting caught easily, ducks only make statements that are consistent with all statements previously made by geese. Note that statements made by geese are consistent with all ducks being at all duck meetings.

It may not be possible to determine all the ducks with the information provided. However, knowing the minimum number of ducks will at least provide a lower bound on the level of duck activity. Note that there was at least one duck. Find this minimum number of ducks.

Formally, a hypothesis H is a partition of all attendees into a set of ducks (named H-ducks) and geese (named H-geese). H is consistent with a set of statements S if there exists a path for each attendee moving at most one meter per second such that:

- all H-ducks were at all duck meetings and
- for each statement in S claiming that A saw B at point P at time T, both A and B⁠'s paths went through point P at time T.

A hypothesis H is feasible under a set of statements S if:

- H-ducks is not empty (i.e., there was at least one duck),
- the subset of all statements from S made by members of H-geese is consistent with H
(i.e., statements from geese are always true), and
- for each statement s∈S made by a member of H-ducks, if P⊆S is the subset of statements made by members of H-geese issued before s, there exists a hypothesis H′ (which may or may not be equal to H) such that {s}∪P is consistent with H′ (i.e., ducks do not contradict previous statements made by geese).

Notice that the hypotheses H such that H-ducks contains all attendees is always feasible.

Find the minimum size of H-ducks over all feasible hypotheses H.
