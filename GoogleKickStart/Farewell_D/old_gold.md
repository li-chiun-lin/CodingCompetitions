# Problem

A long, long time ago (7 years) you were in a West-East road in southeast Asia known to contain at least one gold nugget, with a limited but reliable gold detector. After getting immensely rich with that gold, you have tried and got bored of every conceivable activity. While wandering around your huge mansion you found some notes from that gold hunt.

The notes are in the form of a diagram of the road. For each kilometer of road, you have one of 5 markings:

- <, indicating that the closest gold nugget is to the West,
- =, indicating that the closest gold nuggets to the East and to the West are at the same distance, and no gold nugget is at that position,
- \>, indicating that the closest gold nugget is to the East,
- o, indicating that there is a gold nugget at that position, or
- ., indicating that nothing is known about that location.

Since each of the k unknown (.) positions could contain or not contain a gold nugget independently, you want to find out how many of the 2k placements of gold are compatible with all your notes and result in the road overall containing at least one gold nugget. Since the output can be a really big number, we only ask you to output the remainder of dividing the result by the prime $10^9+7$ .
