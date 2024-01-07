class Solution {
public:

    bool solve(TreeNode* root, long long lb, long long ub){
        if(root == NULL){
            return true;
        }

        if(root->val >lb && root->val <ub){
            bool leftans= solve(root->left, lb,root->val);
            bool rightans=solve(root -> right,root->val, ub);
            return leftans && rightans;
        }
        else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        long long int lowerbound=-4294967296;
        long long int upperbound=4294967296;
        bool ans=solve(root,lowerbound,upperbound);
        return ans;
        
    }
};