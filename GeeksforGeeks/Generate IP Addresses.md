# Easy

Given a string $S$ containing only digits, Your task is to complete the function **genIp()** which returns a vector containing all possible combinations of valid IPv4 IP addresses and takes only a string $S$ as its only argument.

Note: Order doesn't matter. A valid IP address must be in the form of **A.B.C.D**, where **A**, **B**, **C**, and **D** are numbers from $0-255$. The numbers cannot be $0$ prefixed unless they are $0$.

```cpp
class Solution{
    void dfs(string& s, int i, vector<int>& ip, vector<string>& ret)
    {
        // ending case: 
        if (i == s.size())
        {
            // it is valid only if there are exactly 4 ip values.
            if (ip.size() == 4)
            {
                // convert to string
                string t = "";
                for (int i = 0; i < 4; ++i)
                    t += to_string(ip[i]) + ".";
                t.pop_back();
                ret.push_back(t);
            }
            
            return ;
        }
        
        // if there are already more than 4 ip value, 
        // it's already invalid, makes no sence to continue this path.
        if (ip.size() > 4)
            return ;
        
        // add one more ip value, but we don't decide the value yet.
        ip.push_back(0);
        
        // special case: 
        // if the leading char is '0',
        // we can only consider it a new ip value, 
        // can not add more char or we will violate the rule.
        if (s[i] == '0')
        {
            dfs(s, i + 1, ip, ret);
        }
        // general case:
        else
        {
            int v = 0;
            
            // keep adding char until exceed 255
            while (i < s.size() && (v = v * 10 + s[i] - '0') < 256)
            {
                // update the last ip value
                ip.back() = v;
                ++ i;
                
                dfs(s, i, ip, ret);
            }
        }
        
        // backtracking
        ip.pop_back();
    }
    
  public:
    vector<string> genIp(string &s) {
        vector<string> ret;
        vector<int> ip;
        
        dfs(s, 0, ip, ret);
        
        return ret;
    }

};
```
