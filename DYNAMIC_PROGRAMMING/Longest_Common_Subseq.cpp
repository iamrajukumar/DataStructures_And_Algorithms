#include<bits/stdc++.h>
using namespace std;

int common_subseq(string str1,string str2){
    int n=str1.length();
    int m=str2.length();
    
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int j=0;j<=m;j++){
        dp[0][j]=0;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
    return dp[n][m];
}



int main(){
    //code
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        string str1,str2;
        cin>>str1>>str2;
        
        cout<<common_subseq(str1,str2)<<endl;
        
    }
    
    
	return 0;
}