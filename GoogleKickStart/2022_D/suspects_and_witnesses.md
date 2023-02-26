# Problem

Ada baked some cookies for her birthday party where she invited $N$ guests, labeled $1$ to $N$. When all the guests have arrived and the party is about to start, something terrible has happened — someone stole the cookies!

Ada puts on her detective hat and starts questioning her guests. She gathered $M$ witness statements of the form: Guest $x$: "Guest $y$ did not steal the cookies."

Ada knows that, if a guest is innocent (did not steal a cookie), then all their witness statements must be true. Note that Ada does not know whether any statement made by a cookie stealer is correct.

Lastly, Ada has an informant who told her there can be at most $K$ cookie stealers. With this information, can you help Ada find out the number of guests who can be proved to be innocent?

Note that it is possible that no guest actually stole the cookies, and Ada simply forgot how many cookies she baked.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.
The first line of each test case contains three integers $N$, $M$, and $K$: the number of guests, the number of witness statements, and the maximum number of cookie stealers, respectively.
The next $M$ lines describe the witness statements. The $i$-th line contains two integers $A_i$ and $B_i$, which means the witness statement Guest $A_i$: "Guest $B_i$ did not steal the cookies."
