/*         UNDIRECTED GRAPH
    CYCLE DETECTION       USING       BFS     */



#include<bits/stdc++.h>
using namespace std;

bool helper(vector<int> adj[],map<int,int> &parent,map<int,bool> &vis,queue<int> q,int src){
   parent[src]=src;
   q.push(src);
   vis[src]=true;
   bool ans=false;
   while(!q.empty()){
       int temp=q.front();
       q.pop();
       for(int j=0;j<adj[temp].size();j++){
           // this below line is to check self loop
           if(adj[temp][j]==temp)
                return true;
           if(vis[adj[temp][j]]==false){
               vis[adj[temp][j]]=true;
               q.push(adj[temp][j]);
               parent[adj[temp][j]]=temp;
           }
           else if(vis[adj[temp][j]]==true && parent[temp]!=adj[temp][j]){
                   return true;
           }
       }
   }
}




bool isCyclic(vector<int> adj[], int V){
   // Your code here
   map<int,bool> vis;
   queue<int> q;
   map<int,int> parent;
   bool ans=false;
    ans=helper(adj,parent,vis,q,0);
    if(ans==true)
        return true;
    
    // check for connected components  
    for(int i=1;i<V;i++){
        if(vis[i]==false){
            ans=helper(adj,parent,vis,q,i);
            if(ans==true)
                return true;
        }
    }
     
    return false;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
