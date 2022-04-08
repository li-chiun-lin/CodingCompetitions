Cody-Jamal is working on his latest piece of abstract art: a mural consisting of a row of waning moons and closed umbrellas. Unfortunately, greedy copyright trolls are claiming that waning moons look like an uppercase C and closed umbrellas look like a J, and they have a copyright on CJ and JC. Therefore, for each time CJ appears in the mural, Cody-Jamal must pay **X**, and for each time JC appears in the mural, he must pay **Y**.

Cody-Jamal is unwilling to let them compromise his art, so he will not change anything already painted. He decided, however, that the empty spaces he still has could be filled strategically, to minimize the copyright expenses.

For example, if CJ?CC? represents the current state of the mural, with C representing a waning moon, J representing a closed umbrella, and ? representing a space that still needs to be painted with either a waning moon or a closed umbrella, he could finish the mural as CJCCCC, CJCCCJ, CJJCCC, or CJJCCJ. The first and third options would require paying **X + Y**
in copyrights, while the second and fourth would require paying **2  ⋅X + Y**.

Given the costs **X** and **Y** and a string representing the current state of the mural, how much does Cody-Jamal need to pay in copyrights if he finishes his mural in a way that minimizes that cost? 

### Sample input 
```
4
2 3 CJ?CC?
4 2 CJCJ
1 3 C?J
2 5 ??J???
```

### Sample output
```
Case #1: 5
Case #2: 10
Case #3: 1
Case #4: 0
```

### Extra credit
What if some copyright holders could pay Cody-Jamal for the advertisement instead of being paid? Cody-Jamal getting paid is represented by a negative cost. 

### Sample input 
```
1
2 -5 ??JJ??
```

### Sample output
```
Case #1: -8
```

### Dynamic Programming
- f(?s)=min(f(Cs),f(Js))
- f(a?s)=min(f(aCs),f(aJs)) for a∈{C,J}
- f(aas)=f(as) for a∈{C,J}
- f(CJs)=X+f(Js)
- f(JCs)=Y+f(Cs)
- f(s)=0, if the length of s≤1