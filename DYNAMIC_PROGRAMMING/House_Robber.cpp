#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll FindMaxSum(ll arr[], ll n)
{
    // Your code here
    if(n==0)
        return 0;
    
    
    ll dp[n];
    
    dp[0]=arr[0];
    if(n==1)
        return dp[0];
    dp[1]=max(arr[0],arr[1]);
    if(n==2)
        return dp[1];
 
    
    for(int i=2;i<n;i++){
        dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
    }
    return dp[n-1];
}
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<FindMaxSum(arr,n)<<endl;
    }
    
    
	return 0;
}