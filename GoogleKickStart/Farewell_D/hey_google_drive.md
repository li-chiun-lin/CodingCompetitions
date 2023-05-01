# Problem

The Google Assistant and Android Auto teams are collaborating on a new prototype car that can be driven via voice commands. The early prototype works through a phone connected to a car simulator. Unfortunately, one of the early testers dropped their phone in the toilet, damaging the microphone and making it harder to use the new feature. Since they do not want to miss out on the opportunity, they want your help to use it anyway.

The early prototype moves on a simple grid of $R$ rows and $C$ columns and only understands 4 very simple voice commands: north, south, east, and west. Each command makes the car try to move exactly one cell in the corresponding direction. Because of the microphone issues, however, the system may mishear and interchange north and south, and separately, east and west. That means that a command of north may make the car move north or south, a command of south may make the car move south or north, and similarly both commands east and west may make the car move east or west when issued. In all cases, both movement options can happen with equal probability (1/2).

The tester set up a driving grid such that each cell can contain either a wall, a hazard, or be empty. If a command would make the car move into a wall, or outside the grid, it does nothing instead. If a command makes the car move into a hazard, the car cannot execute any more commands.

The tester has marked some empty cells of the grid as interesting starts and others as interesting finishes. A pair of an interesting start and an interesting finish is drivable if there is a strategy to drive the car through voice commands from the start that makes it end at the finish with probability at least $1 − 10^{−10^{100}}$. A strategy can choose which command to issue and when to stop depending on the outcome of the previous commands. Notice that if the car moves into a hazard it stops moving, so it cannot make it to the finish. The tester wants your help finding the list of all drivable pairs.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.  
Each test case starts with a line containing two integers $R$ and $C$, the number of rows and columns of the grid.  
Then, $R$ lines follow containing a string of $C$ characters each.  
The $j$-th character on the $i$-th of these lines $G_{i,j}$ represents the grid in the $i$-th row and $j$-th column as follows:

- A period (.) represents an uninteresting empty cell.
- A hash symbol (#) represents a cell containing a wall.
- An asterisk (*) represents a cell containing a hazard.
- An English lowercase letter (a through z) represents an empty cell that is an interesting start.
- An English uppercase letter (A through Z) represents an empty cell that is an interesting finish.
