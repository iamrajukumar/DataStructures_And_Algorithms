
//  TO FIND MINIMUM NUMBER OF OPERATION TO CONVERT A STRING INTO ANOTHER
//  OPERATION--1.INSERTION  2.DELETION  3.REPLACE

#include<bits/stdc++.h>
using namespace std;

int find_distance(string str1,string str2){
    int n=str1.length();
    int m=str2.length();
    int dp[n+1][m+1];
    //insertion
    for(int i=0;i<=m;i++){
        dp[0][i]=i;
    }
    //deletion
    for(int i=0;i<=n;i++){
        dp[i][0]=i;
    }
    
    int q1=0,q2=0,q3=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            // rep
            int q1=dp[i-1][j-1];
            // del
            int q2=dp[i][j-1];
            ///ins
            int q3=dp[i-1][j];
            
            if(str1[i-1]!=str2[j-1]){
                dp[i][j]=min(q1,min(q2,q3))+1;
            }
            else{
                 dp[i][j]=dp[i-1][j-1];
            }
        }
    }
   
    return dp[n][m];
}


int main()
 {
    //code
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string str1,str2;
        cin>>str1>>str2;
        
        cout<<find_distance(str1,str2)<<endl;

    }
    
    
	return 0;
}