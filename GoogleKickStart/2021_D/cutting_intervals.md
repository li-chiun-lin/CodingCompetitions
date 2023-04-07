# Problem

You are given N intervals. An interval can be represented by two positive integers Li and Ri - the interval starts at Li and ends at Ri, represented as [Li,Ri]. Intervals may not be unique, so there might be multiple intervals with both equal Li and equal Ri.

You are allowed to perform a maximum of C cuts. A cut at X will cut all intervals [L,R] for which L<X and X<R. Cutting an interval at X is defined as splitting the interval into two intervals - [L,X] and [X,R]. Note that cuts can only be performed at integer points. Also, cutting at an endpoint of an interval (X=L or X=R) has no effect and does not split the interval.

You need to find the maximum number of intervals that can be obtained through a maximum of C cuts.
