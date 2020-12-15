#include<bits/stdc++.h>
using namespace std;

void topoSort(int V, vector<int> adj[]){
    // Your code here
    cout<<"hello"<<endl;
      vector<int> vec;
      map<int,int> indegree;
      for(int i=0;i<V;i++){
        indegree[i]=0;
      }
      cout<<"hello2"<<endl;
      for(int i=0;i<V;i++){
          for(int j=0;j<adj[i].size();j++){
              indegree[adj[i][j]]++;
          }
      }
      
      for(int i=0;i<V;i++)
        cout<<indegree[i]<<" ";
        vec.push_back(0);
      
      queue<int> q;
      for(int i=0;i<V;i++){
          if(indegree[i]==0)
                q.push(i);
      }
      
      while(!q.empty()){
          int node=q.front();
          vec.push_back(node);
          q.pop();
          
          for(int i=0;i<adj[node].size();i++){
              indegree[adj[node][i]]--;
              if(indegree[adj[node][i]]==0)
                    q.push(adj[node][i]);
          }
          
          
      }

        for(int i=0;i<vec.size();i++){
           cout<<vec[i]<<" ";
        }    
   
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

        topoSort(N,adj);
      
       
    }
}
