# Problem

Umon is a foodie coder. Do you know what two activities that he loves the most? Of course, coding and eating! He always spends the whole day doing only those two activities. However, he thinks that some times of the day are better spent coding, and others are better spent eating.

To illustrate this problem, Umon divides his day into S time slots. During the i-th time slot, if Umon codes 100% of the time, he will achieve Ci units of coding. On the other hand, if he eats 100% of the time, he will achieve Ei units of eating. But of course, Umon can also use only a fraction of the time for coding, and the remaining for eating. Formally, he will choose a real number f (0 ≤ f ≤ 1), code for f of the time, and use the remaining (1 - f) time to eat. This way, he will achieve f × Ci units of coding and (1 - f) × Ei units of eating. The total amount of coding Umon achieves for the day is simply the sum of all units of coding he achieved in each of the time slots. The total amount of eating is calculated in a similar way.

Umon needs to plan his schedule for the next D days. On the i-th day, he needs to achieve at least a total amount of Ai units of coding and Bi units of eating. For each day, determine whether there is a way for Umon to achieve his target.
