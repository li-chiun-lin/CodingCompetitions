# Problem

A kiddie pool is a big container in which you can put water, so that small children can play in it.

You have access to N different sources of water. The ith source of water produces water at rate Ri and at temperature Ci. Initially, all of the water sources are off. Each source of water can be switched on only once, and switched off only once; the act of switching a source on or off takes no additional time. Multiple sources can be on at the same time.

Your pool can hold an infinite amount of water, but you want to fill the pool to a volume of exactly V with a temperature of exactly X, as quickly as possible. If you turn sources on and off optimally (not every source necessarily has to be used), what's the minimum number of seconds it will take you to do this?

For the purposes of this problem, combining water that has volume V0 and temperature X0 with water that has volume V1 and temperature X1 will instantaneously create water with volume V0+V1 and temperature (V0X0 + V1X1) / (V0 + V1). For example, combining 5L of water at 10 degrees with 10L of water at 40 degrees will result in 15L of water at 30 degrees. You should also assume that water does not heat or cool over time except as a result of being combined with other water.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. The first line of each test case contains three space-separated numbers: an integer N, and real numbers V and X as described above.

The next N lines each contain two space-separated real numbers, Ri and Ci, the rate of flow and temperature of the ith water source respectively. The volume is expressed in liters, rates of flow are expressed in liters per second, and temperatures are expressed in degrees Celsius.

All real numbers will be exactly specified to four decimal places.
