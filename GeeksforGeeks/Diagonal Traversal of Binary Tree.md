# Medium

Given a Binary Tree, print the diagonal traversal of the binary tree.

Consider lines of slope $-1$ passing between nodes. Given a Binary Tree, print all diagonal elements in a binary tree belonging to same line.

```cpp
vector<int> diagonal(Node *root)
{
   vector<int> ord;
   queue<Node *> que;
   
   que.push(root);
   
   while (que.size())
   {
       Node *tmp = que.front();
       que.pop();
       
       while (tmp)
       {
           ord.push_back(tmp->data);
           que.push(tmp->left);
           tmp = tmp->right;
       }
   }
   
   return ord;
}
```
