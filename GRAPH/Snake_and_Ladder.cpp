#include<bits/stdc++.h>
using namespace std;

void calculate_distance(vector<int> adj[],int start){
    queue<int> q;
    map<int,int> distance;
    for(int i=1;i<=30;i++)
        distance[i]=INT_MAX;

    q.push(1);
    distance[1]=0;
    int flag=0;
    while(!q.empty()){
                int node=q.front();
                q.pop();
                for(auto a:adj[node]){
                    if(distance[a]==INT_MAX && a!=node){
                        q.push(a);
                        distance[a]=distance[node]+1;
                        if(a==30)
                            flag=1;
                    }
                }
                if(flag==1)
                    break;
    }
   // cout<<"hello"<<endl;
    cout<<distance[30]<<endl;
}





int main()
 {
    //code
    int t;
    cin>>t;
    while(t--){
        map<int,int> m;
        for(int i=1;i<=30;i++){
            m[i]=i;
        }
        
        int n;
        cin>>n;
        int x,y;
        for(int i=1;i<=n;i++){
            cin>>x>>y;
            m[x]=y;
        }
        
        vector<int> adj[30];
        for(int i=1;i<=30;i++){
            for(int j=1;j<=6;j++){
                if((j+i)<=30){
                    adj[i].push_back(m[i+j]);
                }
            }
        }
        // for(int i=1;i<=30;i++){
        //     for(int j=0;j<adj[i].size();j++){
        //         cout<<adj[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }



       calculate_distance(adj,1);
    }
    
   
    
    
	return 0;
}