bool isSubTree(Node* T, Node* S) {
    // Your code here
    // return 1 if S is subtree of T else 0
    
    if(T==NULL && S==NULL)
        return true;
    if(T==NULL || S==NULL)
        return false;
        
    if(T->data==S->data){
        if(isSubTree(T->left,S->left) && isSubTree(T->right,S->right))
            return true;
    }
    
    return isSubTree(T->left,S)|| isSubTree(T->right,S);
}