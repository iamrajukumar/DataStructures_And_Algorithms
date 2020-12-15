#include<bits/stdc++.h>
using namespace std;

void dfs_helper(vector<int> adj[],map<int,bool> &vis,int node,vector<int> &v){
    vis[node]=true;
    for(int j=0;j<adj[node].size();j++){
        if(!vis[adj[node][j]]){
            dfs_helper(adj,vis,adj[node][j],v);
        }
    }
    v.push_back(node);
}

int* topoSort(int V, vector<int> adj[]){
    map<int,bool> vis;
    vector<int> v;
    
    for(int i=0;i<V;i++){
        if(!vis[i]){
            dfs_helper(adj,vis,i,v);
        }
    }
    
    int* arr=new int[v.size()];
    for(int i=v.size()-1;i>=0;i--){
        arr[v.size()-i-1]=v[i];
    }
    
    return arr;
}



bool check(int V, int* res, vector<int> adj[]){
    bool flag =true;
    for(int i=0;i<V && flag;i++)
    {
        int n=adj[res[i]].size();
        for(auto j : adj[res[i]])
        {
            for(int k=i+1;k<V;k++)
            {
                if(res[k]==j )
                    n--;
            }
        }
        if(n!=0)
            flag =false;
    }
    if(flag==false)
        return 0;
    return 1;
}

// Driver Code
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,E;
        cin>>E>>N;
        int u,v;
        
        vector<int> adj[N];
        
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
        }
    
        int *res = topoSort(N, adj);
        
        cout<<check(N, res, adj)<<endl;
       
    }
}
