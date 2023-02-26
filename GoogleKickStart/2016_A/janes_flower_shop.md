# Problem

Jane plans to open a flower shop in the local flower market. The initial cost includes the booth license, furnishings and decorations, a truck to transport flowers from the greenhouse to the shop, and so on. Jane will have to recoup these costs by earning income. She has estimated how much net income she will earn in each of the following $M$ months.

Jane wants to predict how successful her flower shop will be by calculating the **IRR** (Internal Rate of Return) for the $M$-month period. Given a series of (time, cash flow) pairs $(i, C_i)$, the **IRR** is the compound interest rate that would make total cash exactly $0$ at the end of the last month. The higher the **IRR** is, the more successful the business is. If the **IRR** is lower than the inflation rate, it would be wise not to start the business in the first place.

For example, suppose the initial cost is $\$10,000$ and the shop runs for $3$ months, with net incomes of $\$3,000$, $\$4,000$, and $\$5,000$, respectively. Then the **IRR** $r$ is given by:

$-C_0 \times (1 + r)^M + \sum_{i = 1}^{M}{C_i \times (1 + r)^{M - i}} = 0$

In this case, there is only one rate $(\approx 8.8963\%)$ that satisfies the equation.

Help Jane to calculate the **IRR** for her business. It is guaranteed that $-1 < r < 1$, and there is exactly one solution in each test case.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case starts with a positive integer $M$: the number of months that the flower shop will be open. The next line contains $M + 1$ non-negative integers $C_i$ ($0 ≤ i ≤ M$). Note that $C_0$ represents the initial cost, all the remaining $C_i$'s are profits, the shop will always either make a positive net profit or zero net profit in each month, and will never have negative profits.
