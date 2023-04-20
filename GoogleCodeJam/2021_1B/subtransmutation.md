# Problem

As the most skilled alchemist in your country, you were summoned yet again because powers beyond science were needed to satisfy your country's leader's ever increasing greed for rare metals.

Each metal is represented by a positive integer. You need to create U1
units of metal 1, U2 units of metal 2, … and UN units of metal N. Metals N+1,N+2,… do exist, but you are not required to create any specific amount of them. You are allowed to create excess amounts of any metal, which can just be discarded.

Unfortunately, budget cuts have left you only the materials for a simple alchemy spell. For some fixed numbers A and B, with A<B, you can take one unit of metal i and destroy it to create one unit of metal (i−A) and one unit of metal (i−B). If either of those integers is not positive, that specific unit is not created. In particular, if i≤A, the spell simply destroys the unit and creates nothing. If A<i≤B the spell destroys the unit and creates only a single unit of metal (i−A).

You have been assigned an expert miner to assist you. The expert miner can fetch a single unit of any metal you want. From that unit, you can use your spell to create other metals and then use the spell on the resulting metals to create even more units. The picture below shows a single unit of metal 4 being converted into one unit of metal 1 and two units of metal 2 using two spells with A=1 and B=2.

A single unit of metal 4 creating one unit of metal 1 and two units of metal 2 Metals represented by larger integers are heavier and more difficult to handle, so you want to ask the expert miner for a single unit of metal represented by the smallest possible integer that is sufficient to complete your task, or say that there is no such metal.
