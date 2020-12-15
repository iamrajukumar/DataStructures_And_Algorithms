void duameteroftree(Node *root){
    if(root==NULL)
        return 0;
    
    int h1=diameter(root->left);
    int h2=diameter(root->right);

    return max(h1+h2,max(h1,h2));
}