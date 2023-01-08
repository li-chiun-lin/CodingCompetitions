# Easy

Jarvis is weak in computing palindromes for Alphanumeric characters.
While Ironman is busy fighting Thanos, he needs to activate sonic punch but Jarvis is stuck in computing palindromes.

You are given a string $S$ containing alphanumeric characters. Find out whether the string is a palindrome or not.

If you are unable to solve it then it may result in the death of Iron Man.

```cpp
bool saveIronman(string ch)
{
    int i = 0;
    int j = ch.size() - 1;
    
    while (i < j)
    {
        if (! isalnum(ch[i]))
            ++ i;
        else if (! isalnum(ch[j]))
            -- j;
        else if (tolower(ch[i]) != tolower(ch[j]))
            return false;
        else
        {
            ++ i;
            -- j;
        }
    }
    
    return true;
}
```
