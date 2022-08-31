# Easy

Given a Binary tree and a key in the binary tree, find the node right to the given key. If there is no node on right side, then return a node with value $-1$.

```cpp
class Solution
{
public:
    Node *nextRight(Node *root, int key)
    {
        queue<Node*> que;
        int size = 0;
        
        que.push(root);
        
        while (size = que.size())
        {
            while (size --)
            {
                auto u = que.front();
                que.pop();
                
                if (u->data == key)
                    return size ? que.front() : new Node(-1);
                
                if (u->left)
                    que.push(u->left);
                    
                if (u->right)
                    que.push(u->right);
            }
        }
        
        return new Node(-1);
    }
};
```
