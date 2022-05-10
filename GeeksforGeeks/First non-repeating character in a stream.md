# Medium

Given an input stream of **A** of **n** characters consisting only of lower case alphabets. The task is to find the first non repeating character, each time a character is inserted to the stream. If there is no such character then append **'#'** to the answer.

```cpp
class Solution {
public:
    string FirstNonRepeating(string A){
        map<char, int> hit;
        string ret = "";
        int j = 0;
        
        for (int i = 0; i < A.size(); ++i)
        {
            ++ hit[A[i]];
            
            while (hit[A[j]] != 1 && j <= i)
                ++ j;
            
            ret += j > i ? '#' : A[j];
        }
        
        return ret;
    }
};
```
