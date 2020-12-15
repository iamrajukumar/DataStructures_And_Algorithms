#include<bits/stdc++.h>
using namespace std;

void colour(int n,int m,vector<int> mat[],int x,int y,int k,int op){
    if(x<0 || y<0 || x>=n || y>=m)
        return;
    if(mat[x][y]!=op)
        return;
    
    mat[x][y]=k;
    colour(n,m,mat,x-1,y,k,op);
    colour(n,m,mat,x+1,y,k,op);
    colour(n,m,mat,x,y-1,k,op);
    colour(n,m,mat,x,y+1,k,op);
}



int main()
 {
    //code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m;
        cin>>m;
        int q;
        vector<int> mat[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>q;
                mat[i].push_back(q);
            }
        }
        int x,y,k;
        cin>>x>>y>>k;
        
        int op=mat[x][y];
       
        colour(n,m,mat,x,y,k,op);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cout<<mat[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
	return 0;
}