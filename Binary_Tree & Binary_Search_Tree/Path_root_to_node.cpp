bool findPath(Node *root, vector<int> &path, int k) 
{ 
    // base case 
    if (root == NULL) return false; 
  
    // Store this node in path vector. The node will be removed if 
    // not in path from root to k 
    path.push_back(root->key); 
  
    // See if the k is same as root's key 
    if (root->key == k) 
        return true; 
  
    // Check if k is found in left or right sub-tree 
    if ( (root->left && findPath(root->left, path, k)) || 
         (root->right && findPath(root->right, path, k)) ) 
        return true; 
  
    // If not present in subtree rooted with root, remove root from 
    // path[] and return false 
    path.pop_back(); 
    return false; 
}