# Problem

Every morning at The Incremental House of Pancakes, the kitchen staff prepares all of its pancakes for the day and arranges them into two stacks. Initially, the stack on the left has L pancakes, and the stack on the right has R pancakes.

This restaurant's customers behave very consistently: the i-th customer to arrive (counting starting from 1) always orders i pancakes. When the i-th customer places their order of i pancakes, you take i pancakes from the stack that has the most pancakes remaining (or from the left stack if both have the same amount). If neither stack has at least i pancakes, the restaurant closes and the i-th customer does not get served any pancakes. You never complete an order using pancakes from both stacks.

Given the initial numbers of pancakes in each stack, you want to know how many customers will be served, and how many pancakes will remain in each stack when the restaurant closes.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of a single line containing two integers L and R: the initial numbers of pancakes in the left and right stacks, respectively, as described above.

## Output

For each test case, output one line containing Case #x: n l r, where x is the test case number (starting from 1), n is the number of customers who will be served, and l and r are the numbers of pancakes that will remain in the left and right stacks, respectively, when the restaurant closes.
