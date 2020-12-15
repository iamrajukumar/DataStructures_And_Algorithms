#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1]={0};
        int x=0;
        for(int i=1;i<=n;i++){
            cin>>x;
            arr[x]++;
        }

        int rem=0,left=0;

        long long ans=0;
        for(int i=1;i<=n;i++){
            ans+=(arr[i]/i);
            rem=arr[i]%i;
            if((left+rem)>=i){
                ans+=((left+rem)/i);
                left=(left+rem)%i;
            }
            else{
                left+=rem;
            }
        }

        cout<<ans<<endl;

    }  
}
