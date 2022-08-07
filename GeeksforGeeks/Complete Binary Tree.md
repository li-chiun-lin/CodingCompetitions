# Medium

Given a Binary Tree, write a function to check whether the given Binary Tree is Complete Binary Tree or not. A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.

```cpp
class Solution{
public:    
    bool isCompleteBT(Node* root){
        bool eof = false;
        queue<Node*> que;
        
        que.push(root);
        
        while (que.size())
        {
            Node *tmp = que.front();
            que.pop();
            
            if (tmp->left && tmp->right)
            {
                if (eof)
                    return false;
                    
                que.push(tmp->left);
                que.push(tmp->right);
            }
            else if (tmp->left && ! tmp->right)
            {
                if (eof)
                    return false;
                    
                que.push(tmp->left);
                eof = true;
            }
            else if (! tmp->left && tmp->right)
                return false;
        }
    
        return true;
    }
};
```
