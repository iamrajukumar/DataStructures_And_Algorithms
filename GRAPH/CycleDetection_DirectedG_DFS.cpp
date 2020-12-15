#include<bits/stdc++.h>
using namespace std;

bool dfs_helper(vector<int> adj[],int node,map<int,bool> &vis,map<int,bool> &instack){
    vis[node]=true;
    instack[node]=true;
    
    for(int j=0;j<adj[node].size();j++){
        if(!vis[adj[node][j]]){
            bool ans=dfs_helper(adj,adj[node][j],vis,instack);
            if(ans==true)
                return true;
        }
        else if(instack[adj[node][j]]){
            return true;
        }
    }
    
    instack[node]=false;
    return false;
}



bool isCyclic(int V, vector<int> adj[]){
    // Your code here
    map<int,bool> vis;
    map<int,bool> instack;
    
    for(int i=0;i<V;i++){
        if(!vis[i]){
            bool ans=dfs_helper(adj,i,vis,instack);
            if(ans==true)
                return true;
        }
    }
    
    return false;
}

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}