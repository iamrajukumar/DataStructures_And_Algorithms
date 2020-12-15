/*         UNDIRECTED GRAPH
    CYCLE DETECTION       USING       DFS     */



#include<bits/stdc++.h>
using namespace std;

bool dfs_helper(vector<int> adj[],map<int,bool> &vis,int node,int parent){
    vis[node]=true;
    for(int j=0;j<adj[node].size();j++){
        if(adj[node][j]==node)
            return true;
        if(vis[adj[node][j]]==false){
            bool ans=dfs_helper(adj,vis,adj[node][j],node);
            if(ans==true)
                return true;
        }   
        else if(adj[node][j]!=parent){
            return true;
        }
        
    }
    
    return false;
}




bool isCyclic(vector<int> adj[], int V){
   map<int,bool> vis;
    
    for(int i=0;i<V;i++){
        if(vis[i]==false){
            bool ans=dfs_helper(adj,vis,i,i);
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
