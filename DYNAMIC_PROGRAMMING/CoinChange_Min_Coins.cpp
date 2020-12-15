#include<bits/stdc++.h>
using namespace std;

int min_coin(int coins[],int m,int n){
    
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=INT_MAX;
    }
    int miny=INT_MAX;
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            if(coins[j]<=i){
                int temp=dp[i-coins[j]];
                if(temp!=INT_MAX && (temp+1)<dp[i]){
                    dp[i]=temp+1;
                }
            }

        }


    }
    if(dp[n]==INT_MAX)
        return -1;
    return dp[n];
}

int main(){

    int t;
    cin>>t;
    while(t--){
        // n is required money m is number of denomination of coins
        int n,m;
        cin>>n>>m;
        int coins[m];
        for(int i=0;i<m;i++)
            cin>>coins[i];

        cout<<min_coin(coins,m,n)<<endl;
    }
    return 0;
}