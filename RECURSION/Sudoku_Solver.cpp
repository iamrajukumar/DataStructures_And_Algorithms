#include <bits/stdc++.h>
using namespace std;

bool canfill(int sud[][9],int i,int j,int n,int temp){
    for(int k=0;k<n;k++){
        if(sud[i][k]==temp || sud[k][j]==temp){
            return false;
        }
    }
    int x=sqrt(n);
    int y=(i/x)*x;
    int z=(j/x)*x;
    for(int k=y;k<(y+x);k++){
        for(int l=z;l<(z+x);l++){
            if(sud[k][l]==temp)
                return false;
        }
    }
    return true;
}

bool sudokusolver(int sud[][9],int i,int j,int n){
    if(i==n){
        //print the matrix
        //  for(int p=0;p<n;p++){
        //     for(int q=0;q<n;q++){
        //         cout<<sud[p][q]<<" ";
        //     }
        //     cout<<endl;
        //  }
         return true;
    }
    if(j==n){
        return sudokusolver(sud,i+1,0,n);
    }
    if(sud[i][j]!=0){
       return sudokusolver(sud,i,j+1,n);
    }
    for(int k=1;k<=n;k++){
        if(canfill(sud,i,j,n,k)==true){
            sud[i][j]=k;
            bool ans=sudokusolver(sud,i,j+1,n);
            if(ans==true)
                return true;
        }
        
    }
        sud[i][j]=0;
        return false;
}



int main() {
   int n;
   cin>>n;
   int sud[9][9];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>sud[i][j];
       }
   }
   if(sudokusolver(sud,0,0,n)==true){
       for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<sud[i][j]<<" ";
            }
            cout<<endl;
         }
   }
   else{
       cout<<"Solution Not Exist"<<endl;
   }
  
}

