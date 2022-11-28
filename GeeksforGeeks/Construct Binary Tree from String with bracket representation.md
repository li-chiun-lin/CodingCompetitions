# Medium

Construct a binary tree from a string consisting of parenthesis and integers. The whole input represents a binary tree. It contains an integer followed by zero, one or two pairs of parenthesis. The integer represents the roots value and a pair of parenthesis contains a child binary tree with the same structure. Always start to construct the left child node of the parent first if it exists.

```cpp
class Solution{
    void dfs(string& str, int i, stack<Node*>& sta)
    {
        if (i >= str.size())
            return ;
            
        if (str[i] == ')')
        {
            sta.pop();
            dfs(str, i + 1, sta);
        }
        else if (str[i] == '(')
        {
            ++ i;
            
            int v = 0;
            while (isdigit(str[i]))
            {
                v = v * 10 + (str[i] - '0');
                ++ i;
            }
            
            Node* n = new Node(v);
            
            if (sta.top()->left == NULL)
                sta.top()->left = n;
            else
                sta.top()->right = n;
                
            sta.push(n);
            dfs(str, i, sta);
        }
        else
        {
            
        }
    }

public:
    Node *treeFromString(string str){
        stack<Node*> sta;
        
        // the root
        int i = 0;
        int v = 0;
        while (isdigit(str[i]))
        {
            v = v * 10 + (str[i] - '0');
            ++ i;
        }
        
        Node* n = new Node(v);
        sta.push(n);
        
        // the rest nodes
        dfs(str, i, sta);

        // "(" + str + ")"
        
        return sta.top();
    }
};
```
