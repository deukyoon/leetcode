/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution 
{

    public:
    int rangeSumBST(TreeNode* root, int Low, int High) 
    {
        if(!root) return 0;
        
        int ans = root -> val >= Low && root -> val <= High ? root -> val : 0;
        
        if(root -> val > Low) ans += rangeSumBST(root -> left, Low, High);
        
        if(root -> val < High) ans += rangeSumBST(root -> right, Low, High);
        
        return ans;
    }
};
