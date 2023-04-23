# Problem

You are trying to organize a group of skiers. The skiers are taking a trip to a large mountain, which has been rented for the day.

There are N rest points numbered from 1 to N on the mountain, and they are connected by N-1 slopes. Each slope starts at some rest point and goes directly to another rest point, with no intermediate slopes or rest points. A slope can be traversed in only one direction.

Each skier starts at the summit rest point and traverses a slope to reach another rest point. From there, the skier can traverse another slope to reach another rest point, and so on. Once a skier reaches their destination rest point, they stop skiing for the day and head to the ski lodge for hot cocoa. The destination rest point cannot be the summit rest point. However, notice that a skier's destination rest point can be the start of zero or more slopes; that is, a skier does not necessarily have to keep using available slopes until there are none available: they can always walk carefully down the rest of the mountain! For all rest points, there is exactly one sequence of slopes that a skier can use to reach it from the summit rest point.

Each slope can accommodate only a certain total number of skiers in a day, after which the snow gets too choppy to ski. In addition, the ski resort can charge or reward each skier for each slope that they ski on. Each slope may have a different price, and each skier must pay the price for each slope they ski on. A slope's price can be positive, zero, or even negative; a negative price represents a bounty awarded for testing that slope. As the organizer, you pay all the slope prices and collect all the bounties on behalf of your group of skiers. Notice that if multiple skiers use the same slope, you pay that slope's price or collect the slope's bounty multiple times. The sum of all costs you pay minus the sum of all bounties you collect is the total expense for the trip. The expense can be positive, zero, or negative. A negative expense means that you actually made money on the trip!

As the organizer, you want to figure out the maximum number of skiers that you can put on the mountain. Also, you would like to figure out the minimum possible expense for a trip with that maximum number of skiers.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. The first line of a test case contains a single integer N: the number of rest points on the mountain.

Each of the final N-1 lines of a test case describes a slope via four integers Ui, Vi, Si, and Ci. These are the slope's starting rest point, the slope's ending rest point, the maximum number of skiers the slope can accommodate, and the slope's price per skier, respectively.

The summit rest point where the skiers start from is always numbered 1.

## Output

For each test case, output one line containing Case #x: y z, where x is the test case number (starting from 1), y is the maximum number of skiers, and z is the minimum expense for having y skiers ski at least one slope each.
