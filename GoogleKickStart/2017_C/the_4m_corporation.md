# Problem

The 4M Corporation has hired you to organize their departments and allocate headcount. You will create at least one department, and each department will receive some positive integer number of employees. It will not be easy, though — you have four different bosses, and each has given you a different instruction:

1. The department with the fewest employees must have exactly **MINIMUM** employees.
1. The department with the most employees must have exactly **MAXIMUM** employees.
1. The average number of employees across all departments must be exactly **MEAN**.
1. The median of the number of employees across all departments must be exactly **MEDIAN**. As a reminder, the median of a list is the value that, when the list is sorted in nondecreasing order, is in the center (for a list of odd length) or is the average of the two values in the center (for a list of even length).

Moreover, for the sake of efficiency, it is best to avoid creating too many departments. What is the smallest number of departments that you can create, if it is possible to satisfy your bosses' requests?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each consists of four integers: **MINIMUM**, **MAXIMUM**, **MEAN**, and **MEDIAN**, in that order.
