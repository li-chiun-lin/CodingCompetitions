# Problem

You are given an integer **n** and a string **s** of size **n** composed of lower case english letters.

You can perform the following operation on it:


- In one operation, you have to choose any character in the string **s**, then delete the first character to the left of the chosen character that is equal to the chosen character (if there exists) and delete the first character to the right of the chosen character that is equal to the chosen character (if there exists).
- Note that in one operation, the length of the string **s** is reduced by a maximum of two characters.

## Task

You want to minimize the length of the string **s**.

Find the minimum number of operations that need to be performed to minimize the length of the string **s.**

```cpp
int Minimum_Operations (int n, string s) {
    map<char, int> hit;

    for (char c : s)
    ++ hit[c];

    int r = 0;

    for (auto &h : hit)
        r += h.second / 2;

    return r;
}
```
