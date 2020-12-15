void printkdistanceNodeDown(node *root, int k) 
{ 
    // Base Case 
    if (root == NULL || k < 0)  return; 
  
    // If we reach a k distant node, print it 
    if (k==0) 
    { 
        cout << root->data << endl; 
        return; 
    } 
  
    // Recur for left and right subtrees 
    printkdistanceNodeDown(root->left, k-1); 
    printkdistanceNodeDown(root->right, k-1); 
} 

int printkdistanceNode(node* root, node* target , int k) 
{ 
    // Base Case 1: If tree is empty, return -1 
    if (root == NULL) return -1; 

    if (root == target){ 
        printkdistanceNodeDown(root, k); 
        return 0; 
    } 
  
    // Recur for left subtree 
    int dl = printkdistanceNode(root->left, target, k); 
  
    // Check if target node was found in left subtree 
    if (dl != -1){ 
         if (dl + 1 == k) 
            cout << root->data << endl; 
  
         else
            printkdistanceNodeDown(root->right, k-dl-2); 
  
         return 1 + dl; 
    } 

    int dr = printkdistanceNode(root->right, target, k); 
    if (dr != -1){ 
         if (dr + 1 == k) 
            cout << root->data << endl; 
         else
            printkdistanceNodeDown(root->left, k-dr-2); 
         return 1 + dr; 
    } 
  
    // If target was neither present in left nor in right subtree 
    return -1; 
} 