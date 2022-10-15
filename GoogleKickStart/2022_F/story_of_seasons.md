# Problem

You are a super farmer with some vegetable seeds and an infinitely large farm. In fact, not only are you a farmer, but you are also secretly a super programmer! As a super programmer, you hope to maximize the profit of your farming using your programming skills.

Since your daily energy is limited, you can plant at most $X$ seeds each day. In the beginning, you have $N$ kinds of vegetable seeds. The number of seeds of the $i$-th kind of vegetable is $Q_i$, and each seed of this kind needs $L_i$ days to mature from the day it is planted. Once it matures, you can sell it for $V_i$ dollars. Assume that no energy or time is required for harvesting and selling vegetables. Also, your farm is infinitely large so the growing vegetables do not crowd out each other.

Notice that although the area of your farm is infinite, the number of days that you can plant seeds is limited. The warm season only lasts $D$ days, and after that, the harsh winter comes. Any vegetable that has not matured yet will die immediately and cannot be turned into profit. The remaining seeds that were not planted cannot be turned into profit either.

As a super farmer and a super programmer, you want to come up with a perfect planting plan that will maximize your profit. Find the total amount of profit you will earn.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.

The first line of each test case contains three integers $D$, $N$, and $X$: the number of days of the warm season, the number of kinds of vegetable seeds you have to start with, and the maximum number of seeds you can plant each day, respectively.

The next $N$ lines describe the seeds. The $i$-th line contains three integers $Q_i$, $L_i$, and $V_i$: the quantity of this kind of seed, the number of days it needs to mature, and the value of each matured plant, respectively.
