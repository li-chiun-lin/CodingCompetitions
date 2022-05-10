# Easy

Given a sorted array. Convert it into a Height balanced Binary Search Tree (BST). 

Find the preorder traversal of height balanced BST. If there exist many such balanced BST consider the tree whose preorder is lexicographically smallest.

Height balanced BST means a binary tree in which the depth of the left subtree and the right subtree of every node never differ by more than 1.

```cpp
class Solution {
    void travel(vector<int>& nums, int l, int r, vector<int>& preorder)
    {
        if (l > r)
            return ;

        int m = l + (r - l) / 2;
        
        preorder.push_back(nums[m]);
        
        travel(nums, l, m - 1, preorder);
        travel(nums, m + 1, r, preorder);
    }
public:
    vector<int> sortedArrayToBST(vector<int>& nums) {
        vector<int> ret;
        
        travel(nums, 0, nums.size() - 1, ret);
        
        return ret;
    }
};
```
