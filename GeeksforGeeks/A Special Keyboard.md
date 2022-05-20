# Medium

Imagine you have a special keyboard with all keys in a single row. The layout of characters on a keyboard is denoted by a string **S1** of length **26**. **S1** is indexed **from 0 to 25**.

Initially, your finger is at index **0**. To type a character, you have to move your finger to the index of the desired character. The time taken to move your finger from index **i** to index **j** is **|j-i|**, where **||** denotes absolute value.

Find the time taken to type the string **S2** with the given keyboard layout.

```cpp
class Solution {
public:
    int findTime(string S1, string S2) {
        map<char, int> idx;
        
        for (int i = 0; i < S1.size(); ++i)
            idx[S1[i]] = i;
            
        int cost = 0;
        int i = 0;
        
        for (char c : S2)
        {
            cost += abs(idx[c] - i);
            i = idx[c];
        }
        
        return cost;
    }
};
```
