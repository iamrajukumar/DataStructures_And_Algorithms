
        //  FIND THE SHORTEST PATH BETWEEN NODES IN A WEIGHTED GRAPH

#include<bits/stdc++.h>
using namespace std;
void dijkstra(vector<vector<int>> , int ,int );

int main()
{
    int t;
    cin>>t;
    while(t--){
        int V;
        int e;
        cin>>V>>e;
        int x,y,z;
        vector<vector<int>> g(V+1);
        
        for(int i = 0;i<=V;i++){
            vector<int> temp(V+1);
            g[i] = temp;
        }
        
        for(int i=0;i<=V;i++)
        {
      	    for(int j=0;j<=V;j++)
      	    {
      		    g[i][j]=0;
      	    }
        }
        

        for(int i=0;i<e;i++){
            cin>>x;
            cin>>y;
            cin>>z;
            g[x][y]=z;
            g[y][x]=z;
        }
        
        
        int s;
        cin>>s;
        
        dijkstra(g, s, V);
        cout<<endl;
       }
        return 0;
}





void dijkstra(vector<vector<int>> graph, int src, int V)
{
    // Your code here
    map<int,int> dist;
    for(int i=1;i<=V;i++)
        dist[i]=INT_MAX;
        
    dist[src]=0;
    
    set<pair<int,int>> s;
    s.insert(make_pair(dist[src],src));
    
    while(!s.empty()){
        auto f=*s.begin();
        s.erase(s.begin());
        int node=f.second;
        int node_dist=f.first;
        
        for(int i=1;i<=V;i++){
            if(graph[node][i]!=0){
                if((dist[node]+graph[node][i])<dist[i]){
                    auto t=s.find(make_pair(dist[i],i));
                    if(t!=s.end()){
                        s.erase(t);
                    }
                    
                    dist[i]=dist[node]+graph[node][i];
                    s.insert(make_pair(dist[i],i));
                }
            }
            
        }

    }
    for(int i=1;i<=V;i++){
        if(i!=src)
            cout<<dist[i]<<" ";
    } 
    
}