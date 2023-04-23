# Problem

En garde! Charles and Delila are about to face off against each other in the final fight of the Swordmaster fencing tournament.

Along one wall of the fencing arena, there is a rack with N different types of swords; the swords are numbered by type, from 1 to N. As the head judge, you will pick a pair of integers (L, R) (with 1 ≤ L ≤ R ≤ N), and only the L-th through R-th types of swords (inclusive) will be available for the fight.

Different types of sword are used in different ways, and being good with one type of sword does not necessarily mean you are good with another! Charles and Delila have skill levels of Ci and Di, respectively, with the i-th type of sword. Each of them will look at the types of sword you have made available for this fight, and then each will choose a type with which they are most skilled. If there are multiple available types with which a fighter is equally skilled, and that skill level exceeds the fighter's skill level in all other available types, then the fighter will make one of those equally good choices at random. Notice that it is possible for Charles and Delila to choose the same type of sword, which is fine — there are multiple copies of each type of sword available.

The fight is fair if the absolute difference between Charles's skill level with his chosen sword type and Delila's skill level with her chosen sword type is at most K. To keep the fight exciting, you'd like to know how many different pairs (L, R) you can choose that will result in a fair fight.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case begins with a line containing the two integers N and K, as described above. Then, two more lines follow. The first of these lines contains N integers Ci, giving Charles' skill levels for each type of sword, as described above. Similarly, the second line contains N integers Di, giving Delila's skill levels.

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of choices you can make that result in a fair fight, as described above.
