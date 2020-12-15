#include <iostream>
using namespace std;
int number=0;

bool canplace(int board[11][11],int i,int j,int n){
    for(int k=0;k<i;k++){
        if(board[k][j]==1)
            return false;
    }

    int x=i;
    int y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1)
            return false;
        x--;
        y--;
    }
    x=i;
    y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1)
            return false;
        x--;
        y++;
    }
    return true;
}

bool solvenqueen(int board[11][11],int i,int n){
    if(i==n){
        // for(int p=0;p<n;p++){
        //     for(int q=0;q<n;q++){
        //         if(board[p][q]==1)
        //             cout<<"Q ";
        //         else
        //             cout<<"_ ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        number++;
        return false;
    }
    for(int j=0;j<n;j++){
        if(canplace(board,i,j,n)){
            board[i][j]=1;
            int possible=solvenqueen(board,i+1,n);
            if(possible)
                return true;
            board[i][j]=0;
            //return false;
        }
    }
    return false;
}


int main() {
    int n;
    cin>>n;
    int board[11][11]={0};
    solvenqueen(board,0,n);
    cout<<number<<endl;
    
}
