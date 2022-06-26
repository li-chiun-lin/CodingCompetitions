# Easy

Consider a special family of **Engineers** and **Doctors** with following rules :

1. Everybody has two children.
1. First child of an **Engineer** is an **Engineer** and second child is a **Doctor**.
1. First child of an **Doctor** is **Doctor** and second child is an **Engineer**.
1. All generations of **Doctors** and **Engineers** start with **Engineer**.

We can represent the situation using below diagram:

```text
                E
           /        \
          E          D
        /   \       /  \
       E     D     D    E
      / \   / \   / \   / \
     E   D D   E  D  E  E  D
```

Given $level$ and $pos$ of a person in above ancestor tree, find profession of the person.

```cpp
class Solution{
public:
    char profession(int level, int pos){
        int r = 0;
        
        -- pos;
        
        while (-- level && pos)
        {
            r ^= pos & 1;
            pos >>= 1;
        }
        
        return r ? 'd' : 'e';
    }
};
```
