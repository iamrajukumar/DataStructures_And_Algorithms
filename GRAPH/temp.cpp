
#include<bits/stdc++.h>
using namespace std;
#define SIZE 100
//Position this line where user code will be pasted.


void dfs(int n,int m,int i,int j,int g[SIZE][SIZE],map<pair<int,int>,bool> &vis,int &count){
    if(i<0 || j<0 || i>=n || j>=m || g[i][j]==0)
        return;
    
    if(vis[{i,j}])
        return;
    if(g[i][j]==1)
        count++;
    vis[{i,j}]=true;
    dfs(n,m,i+1,j,g,vis,count);
    dfs(n,m,i,j+1,g,vis,count);
    dfs(n,m,i-1,j,g,vis,count);
    dfs(n,m,i,j-1,g,vis,count);
    
    dfs(n,m,i+1,j+1,g,vis,count);
    dfs(n,m,i+1,j-1,g,vis,count);
    dfs(n,m,i-1,j-1,g,vis,count);
    dfs(n,m,i-1,j+1,g,vis,count);
    
    
    return;
    
}





int findAreaUtil(int n, int m, int g[SIZE][SIZE], bool vis[SIZE][SIZE]){
    
    // Your code here
    map<pair<int,int>,bool> vist;
    int count=0;
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            count=0;
            if(!vist[{i,j}])
                dfs(n,m,i,j,g,vist,count);
            if(max<count)
                max=count;
        }
    }
   return count;
    
}

















int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        
        int g[SIZE][SIZE];
        bool vis[SIZE][SIZE];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>g[i][j];
        }
        
        memset(vis, 0, sizeof(vis));
        
        cout << findAreaUtil(n, m, g, vis) << endl;
      
    }
      
	return 0;
}





