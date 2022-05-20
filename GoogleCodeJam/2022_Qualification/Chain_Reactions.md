# Problem

Wile lives alone in the desert, so he entertains himself by building complicated machines that run on chain reactions. Each machine consists of **N** modules indexed **1,2,�K,N**. Each module may point at one other module with a lower index. If not, it points at the abyss.

Modules that are not pointed at by any others are called *initiators*. Wile can manually trigger initiators. When a module is triggered, it triggers the module it is pointing at (if any) which in turn may trigger a third module (if it points at one), and so on, until the chain would hit the abyss or an already triggered module. This is called a *chain reaction*.

Each of the **N** modules has a fun factor **F<sub>i</sub>**. The fun Wile gets from a chain reaction is the largest fun factor of all modules that triggered in that chain reaction. Wile is going to trigger each initiator module once, in some order. The overall fun Wile gets from the session is the sum of the fun he gets from each chain reaction.

For example, suppose Wile has **4**
modules with fun factors **F<sub>1</sub> = 60**, **F<sub>2</sub> = 20**, **F<sub>3</sub> = 40**, and **F<sub>4</sub> = 50** and module **1** points at the abyss, modules **2** and **3** at module **1**, and module **4** at module **2**. There are two initiators (**3** and **4**) that Wile must trigger, in some order.

As seen above, if Wile manually triggers module **4**
first, modules **4**, **2**, and **1** will get triggered in the same chain reaction, for a fun of **max(50, 20, 60) = 60**. Then, when Wile triggers module **3**, module **3** will get triggered alone (module **1** cannot get triggered again), for a fun of **40**, and an overall fun for the session of **60 + 40 = 100**.

However, if Wile manually triggers module **3**
first, modules **3** and **1** will get triggered in the same chain reaction, for a fun of **max(40, 60) = 60**. Then, when Wile triggers module **4**, modules **4** and **2** will get triggered in the same chain reaction, for a fun of **max(50, 20) = 50**, and an overall fun for the session of **60 + 50 = 110**.

Given the fun factors and the setup of the modules, compute the maximum fun Wile can get if he triggers the initiators in the best possible order.

## Input

The first line of the input gives the number of test cases, **T**. **T** test cases follow, each described using 3 lines. Each test case starts with a line with a single integer **N**, the number of modules Wile has. The second line contains **N** integers **F<sub>1</sub>, F<sub>2</sub>, ..., F<sub>N</sub>** where **F<sub>i</sub>** is the fun factor of the ***i***-th module. The third line contains **N** integers **P<sub>1</sub>, P<sub>2</sub>, ..., P<sub>N</sub>**. If **P<sub>i</sub> = 0**, that means module ***i*** points at the abyss. Otherwise, module ***i*** points at module **P<sub>i</sub> = 0**.

## Output

For each test case, output one line containing Case #***x***
: ***y***, where ***x*** is the test case number (starting from 1) and ***y*** is the maximum fun Wile can have by manually triggering the initiators in the best possible order.

## Sample input

```text
3
4
60 20 40 50
0 1 1 2
5
3 2 1 4 5
0 1 1 1 0
8
100 100 100 90 80 100 90 100
0 1 2 1 2 3 1 3
```

## Sample output

```text
Case #1: 110
Case #2: 14
Case #3: 490
```
