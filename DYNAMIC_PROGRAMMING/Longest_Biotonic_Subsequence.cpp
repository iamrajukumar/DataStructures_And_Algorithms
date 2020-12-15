#include<bits/stdc++.h>
using namespace std;
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
        
        int large_left[n];
        for(int i=0;i<n;i++)
            large_left[i]=1;
        int large_right[n];
        for(int i=0;i<n;i++)
            large_right[i]=1;
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[j]<arr[i]){
                    int curr=large_left[j]+1;
                    large_left[i]=max(large_left[i],curr);   
                }
            }
        }
        
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>i;j--){
                if(arr[j]<arr[i]){
                    int curr=large_right[j]+1;
                    large_right[i]=max(large_right[i],curr);
                }
            }
        }

        int ans=0;
        for(int i=0;i<n;i++)
            ans=max(ans,large_left[i]+large_right[i]-1);
        
        cout<<ans<<endl;
        
    }
    
    
	return 0;
}