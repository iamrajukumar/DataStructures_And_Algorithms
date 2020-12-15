void connect(Node *p)
{
   // Your Code Here
    queue<Node*> q;
    queue<Node*> acc;
    q.push(p);
    q.push(NULL);
    
    while(!q.empty()){
        Node* temp=q.front();
        if(temp==NULL){
            acc.push(NULL);
            q.pop();
            if(!q.empty())
                q.push(temp);
        }
        else{
            acc.push(temp);
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
    }
    
    while(!acc.empty()){
        Node* t=acc.front();
        acc.pop();
        if(acc.front()==NULL){
            t->nextRight=NULL;
            acc.pop();
        }
        else{
            t->nextRight=acc.front();
        }
    }
    
    
    
    return;
   
}