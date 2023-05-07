# Problem

Diana needs your help maximizing her gold while playing her favorite game. She is often faced with a scenario where she is standing close to her tower and is facing N monsters. When that happens, Diana and the tower take turns shooting the monsters, and she goes first. During her turn, Diana may choose a monster to shoot at (this means Diana may choose to skip a turn). During its turn, the tower shoots the monster closest to it. Diana and the tower can not shoot dead monsters.

If Diana shoots at a monster, its hit points are reduced by P. If the tower shoots at a monster, its hit points are reduced by Q. If a monster's hit points are reduced below 1, it is killed. The ith monster starts with Hi hit points. Diana is awarded Gi gold if her shot kills the ith monster, but none if the tower's shot kills it. What is the maximum amount of gold Diana can obtain?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case begins with one line containing three space-separated integers representing P, Q and N. N lines then follow, with the ith line containing two space-separated integers representing Hi and Gi.

The monsters are given in the order of their distance from the tower. In other words, the tower will shoot at the ith monster only if all monsters < i are dead.
