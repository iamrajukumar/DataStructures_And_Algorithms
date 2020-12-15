class Solution {
public:
    int helper(TreeNode* root,int &res){
        
        
        if(root==NULL)
            return 0;
        
        int l=maxPathSum(root->left);
        int r=maxPathSum(root->right);
        
        int max_single = max(max(l, r) + root->val, root->val); 

        int max_top = max(max_single, l + r + root->val); 
  
        res = max(res, max_top); // Store the Maximum Result. 

        return max_single; 
    }
    
    int maxPathSum(TreeNode* root) {
        int maxy=INT_MIN;
        helper(root,maxy);
            return maxy;
        
    }
};