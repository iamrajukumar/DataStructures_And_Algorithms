void rightView(Node *root)
{
   // Your Code here
        map<int,int> m;
    queue<pair<Node*,int>> q;
    int hd=0;
    q.push(make_pair(root,hd));
    
    while(!q.empty()){
        pair<Node*,int> p;
        p=q.front();
        q.pop();
        
        hd=p.second;
      //  if(m[hd]==0){
            m[hd]=(p.first)->data;
       // }
        if((p.first)->left!=NULL){
            q.push(make_pair((p.first)->left,hd+1));
        }
        if((p.first)->right!=NULL){
            q.push(make_pair((p.first)->right,hd+1));
        }
    }
    
    for(auto it=m.begin();it!=m.end();++it){
        cout<<it->second<<" ";
    }
   
}