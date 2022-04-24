# Easy

Given three integers **'A'** denoting the first term of an arithmetic sequence, **'C'** denoting the common difference of an arithmetic sequence and an integer **'B'**. you need to tell whether **'B'** exists in the arithmetic sequence or not. 

```cpp
class Solution{
public:
    int inSequence(int A, int B, int C){
        if (C > 0)
        {
            if (B >= A)
                return (A - B) % C == 0;
        }
        else if (C < 0)
        {
            if (B <= A)
                return (A - B) % C == 0;
        }
        else
        {
            return A == B;
        }
            
        return 0;
    }
};
```

```cpp
class Solution{
public:
    int inSequence(int A, int B, int C){
        if ((C > 0 && B >= A) || C < 0 && B <= A)
            return (A - B) % C == 0;
        else if (C == 0)
            return A == B;
            
        return 0;
    }
};
```
