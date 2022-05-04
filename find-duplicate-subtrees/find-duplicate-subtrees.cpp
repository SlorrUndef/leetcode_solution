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
    //Depth First Traversals
    string DFS(TreeNode *root, unordered_map<string, int> &hash, vector<TreeNode*> &res){
        if(!root) return "";
        string s = to_string(root->val) + "," + DFS(root->left, hash, res) + "," + DFS(root->right, hash, res);
        if(hash[s]++ == 1) res.push_back(root);
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map <string, int> hash;
        vector <TreeNode*> res;
        DFS(root, hash, res);
        return res;
    }
    
};