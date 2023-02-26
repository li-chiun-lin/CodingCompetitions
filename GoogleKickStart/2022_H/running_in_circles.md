# Problem

Ada has decided that this year, she will take part in the annual marathon that takes place in her city. Since this is the first time she would be running such a long distance, she has decided to start practising for it by running in the circular track of length $L$ units near her house.

Ada wants to focus only on running, so she decides to use a machine to count the number of laps she has run. The machine is placed at the starting line of the circular track and starts the count from $0$. Every time Ada arrives at the starting line running in the same direction as the last time she departed from the starting line, the machine increases the number of laps that Ada has run by $1$. If she crosses the starting line or changes direction at the starting line, the machine considers the new direction as the direction she last touched the starting line. The machine only remembers the last direction in which Ada touched the starting line. During a lap, Ada can change directions any number of times, but as long as she eventually touches the starting line in the same direction as she last touched it, the count of laps in the machine increases by $1$.

This is the first time Ada has practised running long distances, so she cannot run continuously. She runs some distance, then takes a break to regain her energy. However, when she starts running again after taking a break, she cannot remember which direction she was running in previously. So she picks one of the directions, clockwise or anticlockwise, and starts running from the same position where she stopped.

Ada begins at the starting line and is initially facing in the direction of her first run. She runs a total of $N$ times, taking breaks in between. Given the information of the distance $D_i$ units Ada has run, and the direction $C_i$ she has taken (clockwise or anticlockwise) when she ran the $i$-th time, for all $i$ from $1,\dots,N$, can you tell the number of laps that would be reported by the machine at the end?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.
The first line of each test case contains two positive integers $L$ and $N$, the length of the circular track in units, and the number of times Ada has run respectively.
The next $N$ lines describe Ada's runs. The $i$-th line contains a positive integer $D_i$ and a character $C_i$, the distance in units Ada has run and the direction she has taken (clockwise or anticlockwise) respectively during the $i$-th run. $C_i$ will always be either 'C' (denoting clockwise direction) or 'A' (denoting anticlockwise direction).
