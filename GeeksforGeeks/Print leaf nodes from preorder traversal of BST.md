# Medium

Given a preorder traversal of a BST, find the leaf nodes of the tree without building the tree.

```cpp
class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        vector<int> ret;
        stack<int> sta;
        
        for (int i = 0; i < N - 1; ++i)
        {
            if (arr[i] > arr[i + 1])
                sta.push(arr[i]);
            else
            {
                if (sta.empty() || arr[i + 1] < sta.top())
                    continue;
                
                while (sta.size() && arr[i + 1] > sta.top())
                    sta.pop();
                
                ret.push_back(arr[i]);
            }
        }
        
        ret.push_back(arr[N - 1]);
        
        return ret;
    }
};
```
