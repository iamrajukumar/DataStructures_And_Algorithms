#include<bits/stdc++.h>
using namespace std;

int max_profit(int arr[],int n){
    int dp[1+n]={0};
 
    int best=0;
    for(int i=1;i<=n;i++){
        best=0;
        for(int j=1;j<=i;j++){
            int temp=arr[j]+dp[i-j];
            best=max(best,temp);
        }
        dp[i]=best;
    }
    
    return dp[n];
}



int main(){
    //code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        
        cout<<max_profit(arr,n)<<endl;
        
    }

	return 0;
}
