# Easy

Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.

You are required to complete the function encode that takes only one argument the string which is to be encoded and returns the encoded string.

```cpp
string encode(string src)
{
    string ret = "";
    char r = src[0];
    int l = 1;
    
    for (int i = 1; i < src.size(); ++i)
    {
        if (src[i] == r)
        {
            ++ l;
        }
        else
        {
            ret += r + to_string(l);
            r = src[i];
            l = 1;
        }
    }
    
    return ret + r + to_string(l);
}
```
