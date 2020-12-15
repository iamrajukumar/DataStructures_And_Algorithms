int findCeil(Node* root, int input) 
{ 
    // Base case 
    if (root == NULL) 
        return -1; 
  
    // Your code here
    if(root->data==input){
        return root->data;
    }
    
    if(root->data<input){
        return findCeil(root->right,input);
    }
    int ceil=findCeil(root->left,input);
    
    return (ceil>=input)?ceil:root->data;
    
    
}