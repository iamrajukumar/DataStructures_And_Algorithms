#include<bits/stdc++.h>
using namespace std;

int knapsack(int weight[],int value[],int w,int n){
   int dp[n+1][w+1];

   for(int i=0;i<=n;i++){
       for(int j=0;j<=w;j++){
           if(i==0 || j==0){
               dp[i][j]=0;
           }
           else if(weight[i-1]<=j){
               dp[i][j]=max((value[i-1]+dp[i-1][j-weight[i-1]]),dp[i-1][j]);
           }
           else{
               dp[i][j]=dp[i-1][j];
           }
       }
   }


    return dp[n][w];
}

int main(){
    int t;
    cin>>t;
    while(t--){

    int n,w;
    cin>>n>>w;

    int weight[n];
    int value[n];
    for(int i=0;i<n;i++)
        cin>>value[i];
    for(int i=0;i<n;i++)
        cin>>weight[i];

    cout<<knapsack(weight,value,w,n)<<endl;
    
    }

}