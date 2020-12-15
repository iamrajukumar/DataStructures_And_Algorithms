bool helper(Node* root,int miny,int maxy){
    if(root==NULL)
        return true;
        
    if(miny<=root->data && maxy>=root->data && helper(root->left,miny,root->data-1)&& helper(root->right,root->data+1,maxy)){
        return true;   
    }
    return false;
}

bool isBST(Node* root) {
    // Your code here
    
    int miny=INT_MIN;
    int maxy=INT_MAX;
    
    return helper(root,miny,maxy);
  
}