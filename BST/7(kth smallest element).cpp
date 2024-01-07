class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL){
            return -1;
        }

        //inorder
        //left call
        int left=kthSmallest(root->left,k);
        if (left != -1){
            return left;
        }

        k--;
        if(k==0){
            return root->val;
        }

        //right call
        int right=kthSmallest(root->right,k);
        return right;
        
    }
};