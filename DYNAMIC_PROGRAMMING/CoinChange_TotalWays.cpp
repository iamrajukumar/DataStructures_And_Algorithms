#include<bits/stdc++.h>
using namespace std;

int find(int arr[],int n,int x){
    
    int dp[x+1];
   
    memset(dp,0,sizeof(dp));
     dp[0]=1;
     
    for(int i=0;i<n;i++){
        for(int j=1;j<=x;j++){
            if(j>=arr[i])
                dp[j]+=dp[j-arr[i]];
        }
    }
    
    
    return dp[x];
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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x;
        cin>>x;
        
        cout<<find(arr,n,x)<<endl;
    }
    
    
	return 0;
}