# Problem

Alice is trapped in Wonderland's labyrinth, being chased by the Queen of Hearts and her herald! The labyrinth is a set of J
junctions numbered 1 through J, connected by C

bidirectional corridors.

Alice and the Queen of Hearts take turns making moves, and each knows the location of the other at all times. A move (by either of them) consists of either staying at the current junction or moving to another one that is connected to it by a corridor.

The Queen's herald, however, announces the next move the Queen makes in advance. That means that before anyone makes a move, he announces the Queen's first move. Then, Alice moves first. Then, each time the Queen moves, she must respect the previous announcement, and then decide her next move so the herald can announce it. Alice hears the announcements, so she always knows the Queen's next move before making her own.

Illustration of Sample Case #1.

If Alice and the Queen are at the same junction after either of them moves, then Alice is caught. Otherwise, the pursuit continues. After 109

total moves (half of them for Alice and half for the Queen), if Alice and the Queen are not in the same junction, then the Queen will give up and Alice will be safe.

Alice chooses her moves optimally to escape. If she cannot escape, she chooses her moves to maximize the total number of moves until she is caught. The Queen chooses her moves optimally to try to catch Alice in as few total moves as possible.

Given the labyrinth's layout and the initial locations of both the Queen and Alice, find out whether Alice will be caught by the Queen and, if so, in how many moves.
