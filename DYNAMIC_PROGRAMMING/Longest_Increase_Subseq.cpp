#include<bits/stdc++.h>
using namespace std;

int find_seq(int arr[],int n){
    
    int dp[n];
    for(int i=0;i<n;i++){
        dp[i]=1;
    }
    int maxy=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                int curr=dp[j]+1;
                dp[i]=max(curr,dp[i]);
            }
        }
        if(maxy<dp[i])
            maxy=dp[i];
    }

    return maxy;    
    
    
}



int main()
 {
    //code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<find_seq(arr,n)<<endl;
    }
    
	return 0;
}