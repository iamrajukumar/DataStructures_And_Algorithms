#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(){
    //code
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long long dp[n+1]={0};
        
        dp[1]=2;
        dp[2]=3;
        for(int i=3;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
        
        cout<<dp[n]<<endl;
    }
    
    
	return 0;
}