void helper(Node* root,int &temp){
    if(root==NULL)
        return ;
        
    helper(root->right,temp);
    root->data=temp+root->data;
    temp=root->data;
    helper(root->left,temp);
}



Node* modify(Node *root)
{
    // Your code here
    int temp=0;
    helper(root,temp);
    return root;
 
    
}