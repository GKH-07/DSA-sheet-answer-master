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
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>> v;
        vector<int> ans;
        if(!root) 
            return v;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();

            if(curr != NULL)
            {
                ans.push_back(curr->val);
                if(curr->left != NULL)q.push(curr->left);
                if(curr->right != NULL)q.push(curr->right);
            }
            else 
                {
                    v.push_back(ans);
                    ans = {};
                    if(!q.empty())
                    {
                        q.push(NULL);
                    }
                }
        
        }
         reverse(v.begin(),v.end());
         return v;
    }
};