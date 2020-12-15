#include<bits/stdc++.h>
using namespace std;
int main(){
    //code
    int t;
    cin>>t;
    while(t--){

        // enter the size of matrix
    int n,m;
    cin>>n>>m;
    
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    
    int ans=0;
    map<pair<int,int>,bool> vis;
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==2){
                q.push(make_pair(i,j));
                vis[{i,j}]=true;
            }
        }
    }
    q.push(make_pair(-1,-1));

    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        int x=p.first;
        int y=p.second;
      //  cout<<x<<" "<<y<<endl;
       
        if(x==-1 && y==-1){
            // cout<<"size"<<q.size()<<" ";
            // cout<<ans<<endl;
             if(q.empty())
                break;
            q.push({-1,-1});
            ans++;
        }
        else{
            if((x-1)>=0){
                if(mat[x-1][y]==1 && !vis[{x-1,y}] ){
                    q.push({x-1,y});
                    vis[{x-1,y}]=true;
                }
            }
            if((x+1)<n){
                if(mat[x+1][y]==1 && !vis[{x+1,y}]){
                    q.push({x+1,y});
                    vis[{x+1,y}]=true;
                }
            }
            if((y-1)>=0){
                if(mat[x][y-1]==1 && !vis[{x,y-1}]){
                    q.push({x,y-1});
                    vis[{x,y-1}]=true;
                }
            }
            if((y+1)<m){
                if(mat[x][y+1]==1 && !vis[{x,y+1}]){
                    q.push({x,y+1});
                    vis[{x,y+1}]=true;
                }
            } 
            
        }
    
    }
    
    
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==1){
                if(!vis[{i,j}])
                    flag=1;
            }
        }
    }
    if(flag==1)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;


    }
	return 0;
}


