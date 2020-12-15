bool findPath(Node *root, vector<int> &path, int k) 
{ 
    // base case 
    if (root == NULL) return false; 
    
    path.push_back(root->data); 

    if (root->data == k) 
        return true; 
  
    if ( (root->left && findPath(root->left, path, k)) || 
         (root->right && findPath(root->right, path, k)) ) 
        return true; 
  
    path.pop_back(); 
    return false; 
}   
   
 
int findDist(Node* root, int a, int b) {
    // Your code here
    vector<int> path1,path2;
    findPath(root,path1,a);
    findPath(root,path2,b);
    
    int n=path1.size();
    int m=path2.size();
    
    int count=0;
    for(int i=0;i<min(n,m);i++){
        if(path1[i]==path2[i])
            count++;
    }
    
    int ans=(n+m-2*count);
    return ans;
}