# Problem

We have a list of integers **X<sub>1</sub>,X<sub>2</sub>,…,X<sub>N</sub>**. We would like them to be in strictly increasing order, but unfortunately, we cannot reorder them. This means that usual sorting algorithms will not work.

Our only option is to change them by appending digits **0**
through **9** to their right (in base 10). For example, if one of the integers is 10, you can turn it into 10**0** or 10**9** with a single append operation, or into 10**34** with two operations.

Given the current list, what is the minimum number of single digit append operations that are necessary for the list to be in strictly increasing order?

## Sample input

```text
4
3
100 7 10
2
10 10
3
4 19 1
3
1 2 3
```

## Sample output

```text
Case #1: 4
Case #2: 1
Case #3: 2
Case #4: 0
```

## Strategy

From begin to end, check every pair of adjacent string _prv_ and _cur_.

1. If _prv_ is shorter/smaller than _cur_, do nothing.<br>
ex. 100 and 1001.

2. If _prv_ is of the same length as _cur_,
    1. If _prv_ is smaller than _cur_, do nothing.<br>
    ex. 100 and 101.

    2. If _prv_ is larger than or equal to _cur_, append a '0' to _cur_.<br>
    ex. 101 and 100 -> 101 and 100**0**.

3. If _prv_ is longer/larger than _cur_,
    1. If _cur_ is a prefix of _prv_,
        1. If the rest of _prv_ only consists of '9's, then append '0's to _cur_ until _cur_ is longer than _prv_.<br>
        ex. 10099 and 100 -> 10099 and 100**000**.

        2. If the rest of _prv_ contains other digits than '9', then
            - Copy the rest of _prv_ and append to _cur_.
            - Add 1 to the last digit of _cur_.
            - Process forward if there is any carriage.
            <br>

             ex. 10039 and 100 -> 10039 and 100**40**.

    2. If _prv_ and _cur_ differ at position j, then append '0's to _cur_ until _cur_ is of the same length as _prv_.
        1. If at position j, the digit of _prv_ is larger than that of _cur_, then append one more '0' to _cur_.<br>
        ex. 10234 and 101 -> 10234 and 101**000**.
        2. Otherwise, do nothing.<br>
        ex. 10101 and 102 -> 10101 and 102**00**.
