void bottomView(Node *root)
{
   // Your Code Here
   int hd=0;
   queue<pair<Node*,int>> q;
   map<int,int> m;
   q.push(make_pair(root,hd));
   while(!q.empty()){
       pair<Node*,int> p;
       p=q.front();
       q.pop();
       hd=p.second;
       m[hd]=(p.first)->data;
       
       if((p.first)->left!=NULL){
           q.push(make_pair((p.first)->left,hd-1));
       }
       if((p.first)->right!=NULL){
           q.push(make_pair((p.first)->right,hd+1));
       }
       
   }
   
    for (auto i = m.begin(); i != m.end(); ++i){
        cout<<i->second<<" ";
    }
   
   
}