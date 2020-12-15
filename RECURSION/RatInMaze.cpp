#include <iostream>
using namespace std;

bool canforward(char maze[100][100],int i,int j,int m){
    if(j>m || maze[i][j]=='X')
        return false;
    return true;
}

bool candownward(char maze[100][100],int i,int j,int n){
    if(i>n || maze[i][j]=='X')
        return false;
    return true;
}

bool findpath(char maze[100][100],int out[100][100],int i,int j,int n,int m){
   // cout<<"hello"<<endl;
    if(i==n && j==m){
        out[i][j]=1;
        return true;
    }
    
    
    out[i][j]=1;
    if(canforward(maze,i,j+1,m)){
        bool ans=findpath(maze,out,i,j+1,n,m);
        if(ans==true){
            return true;
        }
    }
    if(candownward(maze,i+1,j,n)){
        bool ans=findpath(maze,out,i+1,j,n,m);
        if(ans==true){
            return true;
        }
    }
    out[i][j]=0;
    return false;

}


int main() {
    int n,m;
    cin>>n>>m;
    char maze[100][100];
    int out[100][100];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>maze[i][j];
        }
    }

    bool ans=findpath(maze,out,1,1,n,m);
    if(ans==true){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<out[i][j];
            }
            cout<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
}
