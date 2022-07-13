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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) 
            return {};
        
        queue<TreeNode*>q;             //Queue
        vector<vector<int>>ans;        //Vector of vectors of tree values
        
        q.push(root);
        
        while(!q.empty())
        {
            int n = q.size();          // current queue size
            
            vector<int>v;              // vector to hold all the values of current level nodes
            
            while(n--)
            {
                TreeNode* temp = q.front();
                q.pop();
                
                v.push_back(temp->val);
                
                if(temp->left)
                    q.push(temp->left);
                
                if(temp->right)
                    q.push(temp->right);
                
                
            }
            
            ans.push_back(v);     //current level node values pushed to ans
        }
        
        
        return ans;
        
    }
};