bool helper(Node* root1,Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    
    if(root1 && root2 && root1->data==root2->data){
        return helper(root1->left,root2->right)&& helper(root1->right,root2->left);
    }
    
    return false;
}
bool isSymmetric(struct Node* root)
{
	// Code here
	return helper(root,root);
}