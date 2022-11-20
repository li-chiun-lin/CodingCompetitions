# Hard

Given two binary trees, the task is to check if each of their levels are anagrams of each other or not.

```cpp
class Solution{
    void print(vector<Node*>& v)
    {
        for (auto& x : v)
            cout << x->data << " ";
        cout << "\n";
    }
    
    bool isAnagrams(vector<Node*>& v1, vector<Node*>& v2)
    {
        if (v1.size() != v2.size())
            return false;
        
        int n = v1.size();
        
        map<int, int> hit;
        
        for (auto& x : v1)
            ++ hit[x->data];
            
        for (auto& x : v2)
            if (-- hit[x->data] < 0)
                return false;
                
        return true;
    }
    
public:
    bool areAnagrams(Node *root1, Node *root2)
    {
        vector<Node*> v1({root1}), v2({root2});
        
        while (v1.size() && v2.size())
        {
            if (! isAnagrams(v1, v2))
                return false;
                
            vector<Node*> vv1, vv2;
            int n1 = v1.size();
            int n2 = v2.size();
            
            for (int i = 0; i < n1; ++i)
            {
                if (v1[i]->left)
                    vv1.push_back(v1[i]->left);
                    
                if (v1[i]->right)
                    vv1.push_back(v1[i]->right);
                    
                if (v2[i]->left)
                    vv2.push_back(v2[i]->left);
                    
                if (v2[i]->right)
                    vv2.push_back(v2[i]->right);
            }
            
            v1 = vv1;
            v2 = vv2;
        }
        
        return v1.empty() && v2.empty();
    }
};
```
